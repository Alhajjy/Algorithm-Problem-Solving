#include <iostream>
#include <string>
#pragma warning(disable : 4996)
using namespace std;

/*
    Problems 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32

    20 => Add One Day to The Date
    21 => Add X Days to The Date
    22 => Add One Week to The Date
    23 => Add X Weeks to The Date
    24 => Add One Month to The Date
    25 => Add X Months to The Date
    26 => Add One Year to The Date
    27 => Add X Years to The Date
    28 => Add X Years (Faster) to The Date
    29 => Add One Decade to The Date
    30 => Add X Decades to The Date
    31 => Add One Century to The Date
    32 => Add One Millennuim to The Date
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
// hmwrks
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
sDate IncreaseDateByXDays(sDate& Date, int x) {
  for (int i = 0; i < x; i++) {
    IncreaseDateByOneDay(Date);
  }
  return Date;
}
sDate IncreaseDateByOneWeek(sDate& Date) {
  for (short i = 0; i < 7; i++) {
    IncreaseDateByOneDay(Date);
  }
  return Date;
}
sDate IncreaseDateByXWeeks(sDate& Date, int x) {
  for (int i = 0; i < x; i++) {
    IncreaseDateByOneWeek(Date);
  }
  return Date;
}
sDate IncreaseDateByOneMonth(sDate& Date) {
  for (short i = 0; i < NumberOfDaysInMonth(Date.Year, Date.Month); i++) {
    IncreaseDateByOneDay(Date);
  }
  return Date;
}
sDate IncreaseDateByXMonths(sDate& Date, int x) {
  for (int i = 0; i < x; i++) {
    IncreaseDateByOneMonth(Date);
  }
  return Date;
}
sDate IncreaseDateByOneYear(sDate& Date) {
  Date.Year++;
  return Date;
}
sDate IncreaseDateByXYears(sDate& Date, int x) {
  for (int i = 0; i < x; i++) {
    IncreaseDateByOneYear(Date);
  }
  return Date;
}
sDate IncreaseDateByXYearsFaster(sDate& Date, int x) {
  Date.Year += x;
  return Date;
}
sDate IncreaseDateByOneDecade(sDate& Date) {
  Date.Year += 10;
  return Date;
}
sDate IncreaseDateByXDecades(sDate& Date, int x) {
  for (short i = 0; i < x; i++) {
    IncreaseDateByOneDecade(Date);
  }
  return Date;
}
sDate IncreaseDateByXDecadesFaster(sDate& Date, int x) {
  Date.Year += 10 * x;
  return Date;
}
sDate IncreaseDateByOneCentury(sDate& Date) {
  Date.Year += 100;
  return Date;
}
sDate IncreaseDateByOneMillennium(sDate& Date) {
  Date.Year += 1000;
  return Date;
}

void PrintIncreasedDates(sDate& Date) {
  int x = 10;
  cout << "01-Adding one day is: " << PrintDate(IncreaseDateByOneDay(Date))
       << endl;
  cout << "02-Adding 10 day is: " << PrintDate(IncreaseDateByXDays(Date, x))
       << endl;
  cout << "03-Adding one week is: " << PrintDate(IncreaseDateByOneWeek(Date))
       << endl;
  cout << "04-Adding 10 weeks is: " << PrintDate(IncreaseDateByXWeeks(Date, x))
       << endl;
  cout << "05-Adding one month is: " << PrintDate(IncreaseDateByOneMonth(Date))
       << endl;
  cout << "06-Adding 10 months is: "
       << PrintDate(IncreaseDateByXMonths(Date, x)) << endl;
  cout << "07-Adding one year is: " << PrintDate(IncreaseDateByOneYear(Date))
       << endl;
  cout << "08-Adding 10 years is: " << PrintDate(IncreaseDateByXYears(Date, x))
       << endl;
  cout << "09-Adding 10 years (faster) is: "
       << PrintDate(IncreaseDateByXYearsFaster(Date, x)) << endl;
  cout << "10-Adding one decade is: "
       << PrintDate(IncreaseDateByOneDecade(Date)) << endl;
  cout << "11-Adding 10 decades is: "
       << PrintDate(IncreaseDateByXDecades(Date, x)) << endl;
  cout << "12-Adding 10 decades (faster) is: "
       << PrintDate(IncreaseDateByXDecadesFaster(Date, x)) << endl;
  cout << "13-Adding one century is: "
       << PrintDate(IncreaseDateByOneCentury(Date)) << endl;
  cout << "14-Adding one millenium is: "
       << PrintDate(IncreaseDateByOneMillennium(Date)) << endl;
}


int main()
{
  cout << "Date" << endl;
  sDate Date = ReadDate();
  PrintIncreasedDates(Date);

  system("pause>0");
  return 0;
}