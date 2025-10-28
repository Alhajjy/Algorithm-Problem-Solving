#include <iostream>
#include <string>
#pragma warning(disable : 4996)
using namespace std;

/*
    Problems 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46

    33 => Decrease One Day from The Date
    34 => Decrease X Days from The Date
    35 => Decrease One Week from The Date
    36 => Decrease X Weeks from The Date
    37 => Decrease One Month from The Date
    38 => Decrease X Months from The Date
    39 => Decrease One Year from The Date
    40 => Decrease X Years from The Date
    41 => Decrease X Years (Faster) from The Date
    42 => Decrease One Decade from The Date
    43 => Decrease X Decades from The Date
    44 => Decrease X Decades (Faster) from The Date
    45 => Decrease One Century from The Date
    46 => Decrease One Millennuim from The Date
*/
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
string PrintDate(sDate Date) {
  string text = " " + to_string(Date.Day) + '.' + to_string(Date.Month) + '.' +
                to_string(Date.Year);
  return text;
}
bool IsLeapYear(short Num) {
  return (Num % 4 == 0 && Num % 100 != 0) || (Num % 400 == 0);
}
short NumberOfDaysInMonth(short Year, short Month) {
  if (Month < 1 || Month > 12) return 0;  //  Õﬁﬁ „‰ ’Õ… «·‘Â—

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
int DaysInAYear(sDate Date) {
  int counter = 0;
  counter += NumberOfDaysInMonth(Date.Year, Date.Month) - Date.Day;
  for (int i = Date.Month + 1; i < 13; i++) {
    counter += NumberOfDaysInMonth(Date.Year, i);
  }
  return counter;
}
//
sDate DecreaseDateByOneDay(sDate &Date) {
  if (Date.Day == 1) {
    if (Date.Month == 1) {
      if (Date.Year == 1) {
        Date.Day = 0;
        Date.Month = 0;
        Date.Year = 0;
      } else {
        Date.Year -= 1;
        Date.Month = 12;
        Date.Day = 31;
      }
    } else {
      Date.Month -= 1;
      Date.Day = NumberOfDaysInMonth(Date.Year, Date.Month);
    }
  } else {
    Date.Day -= 1;
  }
  return Date;
}
sDate DecreaseDateByXDays(sDate &Date, int x) {
  for (int i = 0; i < x; i++) {
    DecreaseDateByOneDay(Date);
  }
  return Date;
}
sDate DecreaseDateByOneWeek(sDate &Date) {
  for (short i = 0; i < 7; i++) {
    DecreaseDateByOneDay(Date);
  }
  return Date;
}
sDate DecreaseDateByXWeeks(sDate &Date, int x) {
  for (int i = 0; i < x; i++) {
    DecreaseDateByOneWeek(Date);
  }
  return Date;
}
sDate DecreaseDateByOneMonth(sDate &Date) {
  for (short i = 0; i < NumberOfDaysInMonth(Date.Year, Date.Month); i++) {
    DecreaseDateByOneDay(Date);
  }
  return Date;
}
sDate DecreaseDateByXMonths(sDate &Date, int x) {
  for (int i = 0; i < x; i++) {
    DecreaseDateByOneMonth(Date);
  }
  return Date;
}
sDate DecreaseDateByOneYear(sDate &Date) {
  Date.Year--;
  return Date;
}
sDate DecreaseDateByXYears(sDate &Date, int x) {
  for (int i = 0; i < x; i++) {
    DecreaseDateByOneYear(Date);
  }
  return Date;
}
sDate DecreaseDateByXYearsFaster(sDate &Date, int x) {
  Date.Year -= x;
  return Date;
}
sDate DecreaseDateByOneDecade(sDate &Date) {
  Date.Year -= 10;
  return Date;
}
sDate DecreaseDateByXDecades(sDate &Date, int x) {
  for (short i = 0; i < x; i++) {
    DecreaseDateByOneDecade(Date);
  }
  return Date;
}
sDate DecreaseDateByXDecadesFaster(sDate &Date, int x) {
  Date.Year -= 10 * x;
  return Date;
}
sDate DecreaseDateByOneCentury(sDate &Date) {
  Date.Year -= 100;
  return Date;
}
sDate DecreaseDateByOneMillennium(sDate &Date) {
  Date.Year -= 1000;
  return Date;
}

void PrintDecreasedDates(sDate &Date) {
  int x = 10;
  cout << "01-Subtracting one day is: " << PrintDate(DecreaseDateByOneDay(Date))
       << endl;
  cout << "02-Subtracting 10 day is: "
       << PrintDate(DecreaseDateByXDays(Date, x)) << endl;
  cout << "03-Subtracting one week is: "
       << PrintDate(DecreaseDateByOneWeek(Date)) << endl;
  cout << "04-Subtracting 10 weeks is: "
       << PrintDate(DecreaseDateByXWeeks(Date, x)) << endl;
  cout << "05-Subtracting one month is: "
       << PrintDate(DecreaseDateByOneMonth(Date)) << endl;
  cout << "06-Subtracting 10 months is: "
       << PrintDate(DecreaseDateByXMonths(Date, x)) << endl;
  cout << "07-Subtracting one year is: "
       << PrintDate(DecreaseDateByOneYear(Date)) << endl;
  cout << "08-Subtracting 10 years is: "
       << PrintDate(DecreaseDateByXYears(Date, x)) << endl;
  cout << "09-Subtracting 10 years (faster) is: "
       << PrintDate(DecreaseDateByXYearsFaster(Date, x)) << endl;
  cout << "10-Subtracting one decade is: "
       << PrintDate(DecreaseDateByOneDecade(Date)) << endl;
  cout << "11-Subtracting 10 decades is: "
       << PrintDate(DecreaseDateByXDecades(Date, x)) << endl;
  cout << "12-Subtracting 10 decades (faster) is: "
       << PrintDate(DecreaseDateByXDecadesFaster(Date, x)) << endl;
  cout << "13-Subtracting one century is: "
       << PrintDate(DecreaseDateByOneCentury(Date)) << endl;
  cout << "14-Subtracting one millenium is: "
       << PrintDate(DecreaseDateByOneMillennium(Date)) << endl;
}


int main() {
    sDate Date = ReadDate();
  PrintDecreasedDates(Date);

  system("pause>0");
  return 0;
}