#pragma once
#include <iostream>
#include <string>
#pragma warning(disable : 4996)

using namespace std;

namespace DateSolutions {
/* Shared Functions */
int ReadNumber(string Message) {
  int Number;
  cout << Message << ": ";
  cin >> Number;
  return Number;
}
short ReadShortNumber(string Message) {
  short Number;
  cout << Message << ": ";
  cin >> Number;
  return Number;
}
short ReadMonth(string Message = "\nPlease enter a Month\n") {
  short Month;
  cout << Message;
  cin >> Month;
  return Month;
}
short ReadYear(string Message = "\nPlease enter a Year\n") {
  short Year;
  cout << Message;
  cin >> Year;
  return Year;
}
void PauseProgram() {
  cout << "\n\nPress Enter to continue...";
  cin.ignore().get();
}
/* [1] 
   NumberToText => Converts a number to its textual representation by recursion.
*/
string NumberToText(int Number) {
  if (Number == 0) return "";
  // Ones - Tens
  if (Number >= 1 && Number <= 19) {
    string OnesArr[20] = {"",        "One",       "Two",      "Three",
                          "Four",    "Five",      "Six",      "Seven",
                          "Eight",   "Nine",      "Ten",      "Eleven",
                          "Twelve",  "Thirteen",  "Fourteen", "Fifteen",
                          "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    return OnesArr[Number] + " ";
  }

  if (Number >= 20 && Number <= 99) {
    string TensArr[10] = {"",      "",      "Twenty",  "Thirty", "Forty",
                          "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    return TensArr[Number / 10] + " " + NumberToText(Number % 10);
  }
  // Houndreds
  if (Number >= 100 && Number <= 199) {
    return "One Hundred " + NumberToText(Number % 10);
  }

  if (Number >= 200 && Number <= 999) {
    return NumberToText(Number / 100) + "Hundreds " +
           NumberToText(Number % 100);
  }

  // Thousands
  if (Number >= 1000 && Number <= 1999) {
    return "One Thousand " + NumberToText(Number % 1000);
  }
  if (Number >= 2000 && Number <= 999999) {
    return NumberToText(Number / 1000) + "Thousands " +
           NumberToText(Number % 1000);
  }

  // Millions
  if (Number >= 1000000 && Number <= 1999999) {
    return "One Million " + NumberToText(Number % 1000000);
  }
  if (Number >= 2000000 && Number <= 9999999) {
    return NumberToText(Number / 1000000) + "Millions " +
           NumberToText(Number % 1000000);
  }

  // Billions
  if (Number >= 1000000000 && Number <= 1999999999) {
    return "One Billion " + NumberToText(Number % 1000000000);
  } else if (Number <= 2147483647) {
    return NumberToText(Number / 1000000000) + "Billions " +
           NumberToText(Number % 1000000000);
  } else {
    return "OUT OF RANGE MAN!";
  }
}

/*  [2]
    IsLeapYear => Determines if a given year is a leap year.
*/
bool IsLeapYear1(int Num) {
  if (Num % 4 == 0 && Num % 100 != 0) return true;
  if (Num % 400 == 0) return true;
  return false;
}

/*  [3]
    IsLeapYear => Determines if a given year is a leap year (Shrinked method).
*/
bool IsLeapYear(int Num) {
  return (Num % 4 == 0 && Num % 100 != 0) || (Num % 400 == 0);
}

/*  [4]
    AnalyzeYear => Analyzes a given year and prints the number of days, hours,
   minutes, and seconds in that year.
*/
void AnalyzeYear(short Num) {
  // Declare:
  short Days = IsLeapYear(Num) ? 366 : 365;
  short Hours = Days * 24;
  int Minutes = Hours * 60;
  int Seconds = Minutes * 60;
  // Print:
  cout << "Number of Days in Year [" << Num << "] is =>>     " << Days << endl;
  cout << "Number of Hours in Year [" << Num << "] is =>>    " << Hours << endl;
  cout << "Number of Minutes in Year [" << Num << "] is =>>  " << Minutes
       << endl;
  cout << "Number of Seconds in Year [" << Num << "] is =>>  " << Seconds
       << endl;
}
// or seperated:
short NumberOfDaysInYear(short Num) { return IsLeapYear(Num) ? 366 : 365; }
short NumberOfHoursInYear(short Num) { return NumberOfDaysInYear(Num) * 24; }
int NumberOfMinutesInYear(short Num) { return NumberOfHoursInYear(Num) * 60; }
int NumberOfSecondsInYear(int Num) { return NumberOfMinutesInYear(Num) * 60; }
void PrintAnalyzing(){
  short Num = ReadShortNumber("Enter a Year..");
  cout << "Number of Days in Year [" << Num << "] is =>>     "
       << NumberOfDaysInYear(Num) << endl;
  cout << "Number of Hours in Year [" << Num << "] is =>>    "
       << NumberOfHoursInYear(Num) << endl;
  cout << "Number of Minutes in Year [" << Num << "] is =>>  "
       << NumberOfMinutesInYear(Num) << endl;
  cout << "Number of Seconds in Year [" << Num << "] is =>>  "
       << NumberOfSecondsInYear(Num) << endl;
}

/*  [5]
    AnalyzeMonth => Analyzes a given month in a specific year and prints the number of days,
*/
short NumberOfDaysInMonth1(short Year, short Month) {
  if (Month % 2 == 0) {
    if (Month == 2) {
      return IsLeapYear(Year) ? 29 : 28;
    }
    if (Month == 8) {
      return 31;
    }
    return 30;
  }
  return 31;
}
short NumberOfHoursInMonth(short Year, short Month) {
  return NumberOfDaysInMonth1(Year, Month) * 24;
}
int NumberOfMinutesInMonth(short Year, short Month) {
  return NumberOfHoursInMonth(Year, Month) * 60;
}
int NumberOfSecondsInMonth(short Year, int Month) {
  return NumberOfMinutesInMonth(Year, Month) * 60;
}
void AnalyzeMonth(short Year, short Month) {
  cout << "Number of Days in Month    [" << Month << "], in Year [" << Year
       << "] is =>>  " << NumberOfDaysInMonth1(Year, Month) << endl;
  cout << "Number of Hours in Month   [" << Month << "], in Year [" << Year
       << "] is =>>  " << NumberOfHoursInMonth(Year, Month) << endl;
  cout << "Number of Minutes in Month [" << Month << "], in Year [" << Year
       << "] is =>>  " << NumberOfMinutesInMonth(Year, Month) << endl;
  cout << "Number of Seconds in Month [" << Month << "], in Year [" << Year
       << "] is =>>  " << NumberOfSecondsInMonth(Year, Month) << endl;
}

/*  [6]
    NumberOfDaysInAMonth => short hand
*/
short NumberOfDaysInAMonth(short Month, short Year) {
  if (Month < 1 || Month > 12) return 0;
  int NumberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1]; 
}
/*  [7]
  WhichDay => Determines the day of the week for a given date using Zeller's
  Congruence.
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

/*  [8]
    PrintMonth => Prints a formatted calendar for a specific month and year.
*/
enum enMonths {
  January = 1,
  February,
  March,
  April,
  May,
  June,
  July,
  August,
  September,
  October,
  November,
  December
};
string GetMonthName(short month) {
  switch (month) {
    case enMonths::January:
      return "Jan";
    case enMonths::February:
      return "Feb";
    case enMonths::March:
      return "Mar";
    case enMonths::April:
      return "Apr";
    case enMonths::May:
      return "May";
    case enMonths::June:
      return "Jun";
    case enMonths::July:
      return "Jul";
    case enMonths::August:
      return "Aug";
    case enMonths::September:
      return "Sep";
    case enMonths::October:
      return "Oct";
    case enMonths::November:
      return "Nov";
    case enMonths::December:
      return "Dec";
    default:
      return "???";
  }
}
short DayNum(short Year, short Month, short Day) {
  int a = (14 - Month) / 12;
  int y = Year - a;
  int m = Month + 12 * a - 2;
  return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}
short NumberOfDaysInMonth(short Year, short Month) {
  return Month % 2 == 0 ? Month == 2   ? (IsLeapYear(Year) ? 29 : 28)
                          : Month == 8 ? 31
                                       : 30
                        : 31;
}
string GetDayName(short Year, short Month, short Day) {
  switch (DayNum(Year, Month, Day)) {
    case enDays::Sunday:
      return "Sun";
    case enDays::Monday:
      return "Mon";
    case enDays::Tuesday:
      return "Tue";
    case enDays::Wednesday:
      return "Wed";
    case enDays::Thursday:
      return "Thu";
    case enDays::Friday:
      return "Fri";
    case enDays::Saturday:
      return "Sat";
    default:
      return "ERR";
  }
}
void PrintWeekDays() {
  cout << "Sun" << "\t"
       << "Mon" << "\t"
       << "Tue" << "\t"
       << "Wed" << "\t"
       << "Thu" << "\t"
       << "Fri" << "\t"
       << "Sat" << endl;
}
void PrintMonthDays(short Year, short DaysCount, short Day) {
  short mon[6][7];
  short counter = 1;

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 7; j++) {
      if (j < Day && i == 0) {
        mon[i][j] = 0;
        continue;
      }
      if (counter > DaysCount) {
        mon[i][j] = 0;
        continue;
      }
      mon[i][j] = counter;
      counter++;
    }
  }

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 7; j++) {
      if (mon[i][j] == 0) {
        cout << " " << "\t";
        continue;
      }
      cout << mon[i][j] << "\t";
    }
    cout << endl;
  }
}
void PrintMonth(short Year, short Month, short DaysCount, short Day) {
  cout << "_______________________[" << GetMonthName(Month)
       << "]_______________________" << endl
       << endl;
  PrintWeekDays();
  PrintMonthDays(Year, DaysCount, Day);
  cout << "___________________________________________________" << endl;
}

/*  [9]
    Print Month Day Order => Returns the day of the week for a given date.
*/
short DayOfWeekOrder(short Day, short Month, short Year) {
  short a, y, m;
  a = (14 - Month) / 12;
  y = Year - a;
  m = Month + (12 * a) - 2;
  // Gregorian:
  // 0:sun, 1:Mon, 2:Tue...etc
  return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

void PrintYearMonths(short Year) {

  for (int i = 1; i < 13; i++) {

    short DaysCount = NumberOfDaysInMonth(Year, i);

    PrintMonth(Year, i, DaysCount, DayNum(Year, i, 1));

    cout << "\t     \\//\\//\\//\\//\\//\\//\\//\\//" << endl;
  }
}
string MonthShortName(short MonthNumber) {
  string Months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                       "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  return (Months[MonthNumber - 1]);
}
void PrintMonthCalendar(short Month, short Year) {
  int NumberOfDays;
  // Index of the day from 0 to 6
  int current = DayOfWeekOrder(1, Month, Year);
  NumberOfDays = NumberOfDaysInAMonth(Month, Year);
  // Print the current month name
  printf("\n  _______________%s_______________\n\n "
         ,
         MonthShortName(Month).c_str());
  // Print the columns
  printf("  Sun  Mon  Tue  Wed Thu Fri Sat\n "
  );
  // Print appropriate spaces
  int i;
  for (i = 0; i < current; i++) printf("     ");
  for (int j = 1; j <= NumberOfDays; j++) {
    printf("%5d", j);
    if (++i == 7) {
      i = 0;
      printf("\n");
    }
  }
  printf("\n  _________________________________\n "
  );
}

void PrintYearCalendar(int Year) {
  printf("\n  _________________________________\n\n "
  );
  printf("           Calendar - %d\n", Year);
  printf("  _________________________________\n "
  );
  for (int i = 1; i <= 12; i++) {
    PrintMonthCalendar(i, Year);
  }
  return;
}

/*  [10]
    PrintMonthDays2 => Prints the days of a month in a formatted calendar layout.
*/
void PrintMonthDays2(short Year, short DaysCount, short Day) {
  short mon[6][7];
  short counter = 1;

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 7; j++) {
      if (j < Day && i == 0) {
        mon[i][j] = 0;
        continue;
      }
      if (counter > DaysCount) {
        mon[i][j] = 0;
        continue;
      }
      mon[i][j] = counter;
      counter++;
    }
  }

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 7; j++) {
      if (mon[i][j] == 0) {
        cout << " " << "\t";
        continue;
      }
      cout << mon[i][j] << "\t";
    }
    cout << endl;
  }
}

/*  [11]
    DaysInAYear => Calculates the number of days remaining in a year from a given date.
*/
int DaysInAYear(short Year, short Month, short Day) {
  int counter = 0;
  counter += NumberOfDaysInMonth(Year, Month) - Day;
  for (int i = Month + 1; i < 13; i++) {
    counter += NumberOfDaysInMonth(Year, i);
  }
  return counter;
}

/*  [12]
    HandleAddingDays => Adds a specified number of days to a given date and prints the resulting date.
*/
struct sDate {
  short Day;
  short Month;
  short Year;
};
sDate ReadDate() {
  sDate Date;
  Date.Day = ReadShortNumber("Enter a Day..");
  Date.Month = ReadShortNumber("Enter a Month..");
  Date.Year = ReadShortNumber("Enter a Year..");
  return Date;
}
int DaysFromBegginningTillDate(short Year, short Month, short Day) {
  int counter = 0;
  for (int i = 1; i < Month; i++) {
    counter += NumberOfDaysInMonth(Year, i);
  }
  counter += Day;
  return counter;
}
void HandleAddingDays(sDate Date, int AddDays) {
  int Daysbox =
      DaysFromBegginningTillDate(Date.Year, Date.Month, Date.Day) + AddDays;
  short MonthDays = 0;
  Date.Month = 1;
  Date.Day = 1;

  while (true) {
    MonthDays = NumberOfDaysInMonth(Date.Year, Date.Month);
    if (Daysbox > MonthDays) {
      Daysbox -= MonthDays;
      Date.Month++;

      if (Date.Month > 12) {
        Date.Month = 1;
        Date.Year += 1;
      }
    } else {
      Date.Day = Daysbox;
      break;
    }
  }

  cout << "After adding: " << Date.Day << "." << Date.Month << "." << Date.Year
       << endl;
}
/*  [13]
    CompairTwoDates => Compares two dates and returns 1 if the first date is
   later,
*/
short CompairTwoDates(sDate Date1, sDate Date2) {
  if (Date1.Year > Date2.Year)
    return 1;
  else if (Date1.Year < Date2.Year)
    return 2;
  else {
    if (Date1.Month > Date2.Month)
      return 1;
    else if (Date1.Month < Date2.Month)
      return 2;
    else {
      if (Date1.Day > Date2.Day)
        return 1;
      else if (Date1.Day < Date2.Day)
        return 2;
      else
        return 0;
    }
  }
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

/*  [14]
    IsDate1EqualsDate2 => Checks if two dates are equal.
*/
bool IsDate1EqualsDate2(sDate Date1, sDate Date2) {
  return (Date1.Year != Date2.Year)     ? false
         : (Date1.Month != Date2.Month) ? false
         : (Date1.Day != Date2.Day)     ? false
                                        : true;
}

/*  [15]
    IsLastDayInMonth, IsLastMonthInYear => Checks if a given day of the month
*/
bool IsLastDayInMonth(sDate Date) {
  return (NumberOfDaysInMonth(Date.Year, Date.Month) == Date.Day);
}
bool IsLastMonthInYear(sDate Date) { return (Date.Month == 12); }

/*  [16]
    IncreaseDateByOneDay => Increases a given date by one day.
*/
void IncreaseDateByOneDay(sDate &Date) {
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
}

/*  [17]
    CalculateDiffirenceDays => Calculates the difference in days between two dates.
*/
void PrintDate(sDate Date) {
  cout << Date.Day << "." << Date.Month << "." << Date.Year << endl;
}
void CalculateDiffirenceDays(sDate Date1, sDate Date2) {
  int counter = 0;
  while (true) {
    if (IsDate1EqualsDate2(Date1, Date2)) break;
    if (IsDate1BeforeDate2(Date1, Date2)) {
      IncreaseDateByOneDay(Date1);
      counter++;
    }
  }

  cout << "Diffirence between " << Date1.Day << "." << Date1.Month << "."
       << Date1.Year << " and " << Date2.Day << "." << Date2.Month << "."
       << Date2.Year << " =>  " << counter << endl;
  cout << "Diffirence between " << Date1.Day << "." << Date1.Month << "."
       << Date1.Year << " and " << Date2.Day << "." << Date2.Month << "."
       << Date2.Year << " =>  " << counter + 1 << " Including Last Day" << endl;
}

// returning date
bool IsLastMonthInYear_Boolean(short Month) { return (Month == 12); }
sDate IncreaseDateByOneDay_ReturningDate(sDate Date){
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

int GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false) {
  int Days = 0;
  while (IsDate1BeforeDate2(Date1, Date2)) {
    Days++;
    Date1 = IncreaseDateByOneDay_ReturningDate(Date1);
  }
  return IncludeEndDay ? ++Days : Days;
}
/*  [18]
    GetSystemDate => Retrieves the current system date.
*/
sDate GetSystemDate() {
  sDate Date;
  time_t t = time(0);
  tm* now = localtime(&t);
  Date.Year = now->tm_year + 1900;
  Date.Month = now->tm_mon + 1;
  Date.Day = now->tm_mday;
  return Date;
}

/*  [19]
    CalculateDiffirenceDays2 => Calculates the difference in days between two
   dates (with swapping).
*/
void SwapDates(sDate &Date1, sDate &Date2) {
  sDate tempDate;
  tempDate.Day = Date1.Day;
  tempDate.Month = Date1.Month;
  tempDate.Year = Date1.Year;

  Date1.Day = Date2.Day;
  Date1.Month = Date2.Month;
  Date1.Year = Date2.Year;

  Date2.Day = tempDate.Day;
  Date2.Month = tempDate.Month;
  Date2.Year = tempDate.Year;
}

int CalculateDiffirenceDays2(sDate Date1, sDate Date2) {
  int counter = 0;
  short SwapFlagValue = 1;
  if (!IsDate1BeforeDate2(Date1, Date2)) {
    SwapDates(Date1, Date2);
    SwapFlagValue = -1;
  }
  while (true) {
    if (IsDate1EqualsDate2(Date1, Date2)) break;
    if (IsDate1BeforeDate2(Date1, Date2)) {
      IncreaseDateByOneDay(Date1);
      counter++;
    }
  }
  return counter * SwapFlagValue;
}

}  // namespace DateSolutions