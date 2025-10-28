#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace Solutions {
/*
    [54] => Calculate vacation days excluding weekends
*/
enum enDays {
  Sunday = 0,
  Monday = 1,
  Tuesday = 2,
  Wednesday = 3,
  Thursday = 4,
  Friday = 5,
  Saturday = 6,
};
struct sDate {
  short Day;
  short Month;
  short Year;
};
short ReadShortNumber(string Message) {
  short Number;
  cout << Message << ": ";
  cin >> Number;
  return Number;
}
sDate ReadDate() {
  sDate Date;
  Date.Day = ReadShortNumber("Enter a Day..");
  Date.Month = ReadShortNumber("Enter a Month..");
  Date.Year = ReadShortNumber("Enter a Year..");
  return Date;
}
string WhichDay(short Year, short Month, short Day) {
  int a = (14 - Month) / 12;
  int y = Year - a;
  int m = Month + 12 * a - 2;
  int Result =
      (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
  switch (Result) {
    case enDays::Sunday:
      return "Sunday";
    case enDays::Monday:
      return "Monday";
    case enDays::Tuesday:
      return "Tuesday";
    case enDays::Wednesday:
      return "Wednesday";
    case enDays::Thursday:
      return "Thursday";
    case enDays::Friday:
      return "Friday";
    case enDays::Saturday:
      return "Saturday";
    default:
      return "ERROR";
  }
}
string WhichDay(sDate Date) {
  return WhichDay(Date.Year, Date.Month, Date.Day);
}
bool IsLeapYear(int Num) {
  // return (Num % 4 == 0 && Num % 100 != 0) || (Num % 400 == 0) ? true : false;
  return (Num % 4 == 0 && Num % 100 != 0) || (Num % 400 == 0);
}
short NumberOfDaysInMonth(short Year, short Month) {
  if (Month < 1 || Month > 12) return 0;

  const short DaysInMonth[12] = {31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31};

  if (Month == 2 && IsLeapYear(Year))
    return 29;
  else
    return DaysInMonth[Month - 1];
}
bool IsLastDayInMonth(sDate Date) {
  return (NumberOfDaysInMonth(Date.Year, Date.Month) == Date.Day);
}
bool IsLastMonthInYear(sDate Date) { return (Date.Month == 12); }
sDate IncreaseDateByOneDay(sDate& Date) {
  if (IsLastDayInMonth(Date)) {
    if (IsLastMonthInYear(Date)) {
      Date.Day = 1;
      Date.Month = 1;
      Date.Year++;
    } else {
      Date.Day = 1;
      Date.Month++;
    }
  } else
    Date.Day++;
  return Date;
}
bool IsDate1BeforeDate2(sDate Date1, sDate Date2) {
  return (Date1.Year < Date2.Year)
             ? true
             : ((Date1.Year == Date2.Year)
                    ? (Date1.Month < Date2.Month
                           ? true
                           : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day
                                                         : false))
                    : false);
}
bool IsItBusinessDay(sDate Date) {
  if (WhichDay(Date) != "Saturday" && WhichDay(Date) != "Friday") return 1;
  return 0;
}
short ActualVacationDays(sDate Date1, sDate Date2) {
  short days = 0;
  while (IsDate1BeforeDate2(Date1, Date2)) {
    if (IsItBusinessDay(Date1)) {
      days++;
    }
    Date1 = IncreaseDateByOneDay(Date1);
  }
  return days;
}
string PrintDate(sDate Date) {
  return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" +
         to_string(Date.Year);
}
void Vacation(sDate Date1, sDate Date2) {
  cout << "Vacation Starts at:   " << WhichDay(Date1) << PrintDate(Date1)
       << endl;
  cout << "Vacation Ends at:     " << WhichDay(Date2) << PrintDate(Date2)
       << endl;
  cout << "Actual Vacation Days: " << ActualVacationDays(Date1, Date2) << endl;
}
/*
    [55] => Calculate Return Date Excluding Weekends
*/
bool IsItWeekendDay(sDate Date) {
  if (WhichDay(Date) == "Saturday" || WhichDay(Date) == "Friday") return 1;
  return 0;
}
sDate CalculateVacationReturnDate(sDate Date1, short Days) {
  while (Days >= 0 || IsItWeekendDay(Date1)) {
    IncreaseDateByOneDay(Date1);
    if (IsItWeekendDay(Date1)) continue;
    Days--;
  }
  return Date1;
}
void PrintVacationReturnDate(sDate Date1, short Days) {
  cout << "Vacation Starts at:   " << WhichDay(Date1) << PrintDate(Date1)
       << endl;
  cout << "Vacation is:          " << Days << " Day(s)" << endl;
  cout << "Return Date:          " << WhichDay(Date1)
       << PrintDate(CalculateVacationReturnDate(Date1, Days)) << endl;
}

/*
    [56] => Checking Date1 After Date2
*/
bool IsDate1EqualsDate2(sDate Date1, sDate Date2) {
  return (Date1.Year != Date2.Year)     ? false
         : (Date1.Month != Date2.Month) ? false
         : (Date1.Day != Date2.Day)     ? false
                                        : true;
}
bool IsDate1AfterDate2(sDate Date1, sDate Date2) {
  return !(IsDate1BeforeDate2(Date1, Date2) ||
           IsDate1EqualsDate2(Date1, Date2));
}
/*
    [57] => Comparing 2 Dates
*/
enum enDateCompare {
  before = -1,
  equal = 0,
  after = 1,
};
enDateCompare Compare2Dates(sDate Date1, sDate Date2) {
  if (IsDate1BeforeDate2(Date1, Date2)) return enDateCompare::before;
  if (IsDate1EqualsDate2(Date1, Date2)) return enDateCompare::equal;
  // if(IsDate1AfterDate2(Date1, Date2))
  // return enDateCompare::after;
  // faster, cuz obviosly its after if it's not before or equal
  return enDateCompare::after;
}
/*
    [58] => Checking Overlapping Periods
*/
struct sPeriod {
  sDate StartingDate;
  sDate EndingDate;
};
sPeriod ReadPeriod() {
  sPeriod Period;
  cout << "Staring date?\n";
  Period.StartingDate = ReadDate();
  cout << "Ending date?\n";
  Period.EndingDate = ReadDate();
  return Period;
}
bool IsPeriodsOverlaps(sPeriod Period1, sPeriod Period2) {
  while (!IsDate1EqualsDate2(Period1.StartingDate, Period1.EndingDate)) {
    if (IsDate1EqualsDate2(Period1.StartingDate, Period2.StartingDate))
      return 1;
    Period1.StartingDate = IncreaseDateByOneDay(Period1.StartingDate);
  }
  return 0;
}
/*
    [59] => Period Length in Days
*/
int GetDifferenceInDays(sDate Date1, sDate Date2,
                        bool IncludeEndDay = false) {
  int Days = 0;
  while (IsDate1BeforeDate2(Date1, Date2)) {
    Days++;
    Date1 = IncreaseDateByOneDay(Date1);
  }
  return IncludeEndDay ? ++Days : Days;
}

int PeriodLengthInDays(sPeriod Period, bool IncludeEndDate = false) {
  if (IncludeEndDate)
    return GetDifferenceInDays(Period.StartingDate, Period.EndingDate) + 1;
  return GetDifferenceInDays(Period.StartingDate, Period.EndingDate);
}

/*
    [60] => Checking if a Date is within a Period
*/
bool IsDateWithinPeriod(sPeriod Period, sDate Date) {
  if ((IsDate1BeforeDate2(Date, Period.EndingDate) &&
       IsDate1AfterDate2(Date, Period.StartingDate)) ||
      (IsDate1EqualsDate2(Date, Period.EndingDate) ||
       IsDate1EqualsDate2(Date, Period.StartingDate))) {
    return 1;
  }
  return 0;
}
/*
    [61] => Counting Overlapping Days in 2 Periods
*/
int CountOverlapsDaysIn2Periods(sPeriod Period1, sPeriod Period2) {
  int overlaps = 0;
  while (!IsDate1EqualsDate2(Period1.StartingDate, Period1.EndingDate)) {
    if (IsDate1EqualsDate2(Period1.StartingDate, Period2.StartingDate))
      return overlaps;
    Period1.StartingDate = IncreaseDateByOneDay(Period1.StartingDate);
    overlaps++;
  }
  return overlaps;
}

/*
    [62] => Validating a Date
*/
bool IsValidDate(sDate Date) {
  if (Date.Year > 0 && Date.Month > 0 && Date.Month < 13 &&
      Date.Day <= NumberOfDaysInMonth(Date.Year, Date.Month) && Date.Day > 0) {
    return 1;
  }
  return 0;
}
// more performance
//bool IsValidDate(sDate Date) {
//  if (Date.Year < 0) return 0;
//  if (Date.Day < 1 && Date.Day > 31) return 0;
//  if (Date.Month > 0 && Date.Month < 13) return 0;
//  if (Date.Day <= NumberOfDaysInMonth(Date.Year, Date.Month) && Date.Day > 0)
//    return 0;
//  return 1;
//}

/*
    [63], [64] => Converting String and Date datatypes to each other :)
*/
string ReadStringDate(string Message) {
  string DateString;
  cout << Message;
  getline(cin >> ws, DateString);
  return DateString;
}
vector<string> SplitString(string S1, string Delim) {
  vector<string> vString;
  short pos = 0;
  string sWord;
                 
  while ((pos = S1.find(Delim)) != std::string::npos) {
    sWord = S1.substr(0, pos);
    if (sWord != "") {
      vString.push_back(sWord);
    }
    S1.erase(0, pos + Delim.length());
  }
  if (S1 != "") {
    vString.push_back(S1);
  }
  return vString;
}
string DateToString(sDate Date) {
  return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" +
         to_string(Date.Year);
}
sDate StringToDate(string DateString) {
  sDate Date;
  vector<string> vDate;
  vDate = SplitString(DateString, "/");
  Date.Day = stoi(vDate[0]);
  Date.Month = stoi(vDate[1]);
  Date.Year = stoi(vDate[2]);
  return Date;
}

/*
    [65]
*/
string ReplaceWordInString(std::string S1,
                                const std::string& StringToReplace,
                                const std::string& sReplaceTo) {
  size_t pos = S1.find(StringToReplace);
  while (pos != std::string::npos) {
    S1.replace(pos, StringToReplace.length(), sReplaceTo);
    pos = S1.find(StringToReplace, pos + sReplaceTo.length());
  }
  return S1;
}

string FormatDate(sDate Date, string Format = "YYYY.DD.MM") {
  string FormatedText = Format;
  FormatedText = ReplaceWordInString(FormatedText, "YYYY", to_string(Date.Year));
  FormatedText = ReplaceWordInString(FormatedText, "MM", to_string(Date.Month));
  FormatedText = ReplaceWordInString(FormatedText, "DD", to_string(Date.Day));
  return FormatedText;
}

}  // namespace Solutions