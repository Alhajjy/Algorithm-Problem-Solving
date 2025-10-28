#include <iostream>
#include <string>

using namespace std;


/*
    prob 47, 48, 49, 50, 51, 52, 53

    Write a program that reads a date from the user and performs the following

    tasks:
    47- Determine the day of the week for the given date.
    48- Check if the given date is the last day of the week.
    49- Check if the given date falls on a weekend.
    50- Check if the given date is a business day.
    51- Calculate the number of days remaining until the end of the week.
    52- Calculate the number of days remaining until the end of the month.
    53- Calculate the number of days remaining until the end of the year.
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
  struct sDate {
    short Day;
    short Month;
    short Year;
  };
  short ReadShortNumber(string Message) {
    short Number = 0;
    cout << Message;
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
    string text = " " + to_string(Date.Day) + '.' + to_string(Date.Month) +
                  '.' + to_string(Date.Year);
    return text;
  }
  bool IsLeapYear(short Num) {
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
  int DaysInAYear(sDate Date) {
    int counter = 0;
    counter += NumberOfDaysInMonth(Date.Year, Date.Month) - Date.Day;
    for (int i = Date.Month + 1; i < 13; i++) {
      counter += NumberOfDaysInMonth(Date.Year, i);
    }
    return counter;
  }
  short DayNum(sDate Date) {
    int a = (14 - Date.Month) / 12;
    int y = Date.Year - a;
    int m = Date.Month + 12 * a - 2;
    return (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) %
           7;
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
  //
  bool IsTheDayEndOfWeek(sDate Date) {
    if (WhichDay(Date) == "Saturday") return 1;
    return 0;
  }
  bool IsItWeekendDay(sDate Date) {
    if (WhichDay(Date) == "Saturday" || WhichDay(Date) == "Friday") return 1;
    return 0;
  }
  bool IsItBusinessDay(sDate Date) {
    if (WhichDay(Date) != "Saturday" && WhichDay(Date) != "Friday") return 1;
    return 0;
  }
  short DaysUntilEndOfWeek(sDate Date) { return 7 - DayNum(Date) - 1; }
  short DaysUntilEndOfMonth(sDate Date) {
    return NumberOfDaysInMonth(Date.Year, Date.Month) - Date.Day + 1;
  }
  short DaysUntilEndOfYear(sDate Date) { return DaysInAYear(Date) + 1; }
  void PrintDecreasedDates(sDate & Date) {
    cout << "Today is: " << WhichDay(Date) << PrintDate(Date) << endl << endl;

    if (IsTheDayEndOfWeek(Date))
      cout << "Is it end of week?\n" << "Yes, its end of week" << endl << endl;
    else
      cout << "Is it end of week?\n"
           << "No, its not end of week" << endl
           << endl;

    if (IsItWeekendDay(Date))
      cout << "Is it in weekend?\n" << "Yes, its in weekend" << endl << endl;
    else
      cout << "Is it in weekend?\n" << "No, its not in weekend" << endl << endl;

    if (IsItBusinessDay(Date))
      cout << "Is it business day?\n"
           << "Yes, its business day" << endl
           << endl;
    else
      cout << "Is it business day?\n"
           << "No, its not business day" << endl
           << endl;

    cout << "Days Until end of week:  " << DaysUntilEndOfWeek(Date) << " Day(s)"
         << endl;
    cout << "Days Until end of Month: " << DaysUntilEndOfMonth(Date)
         << " Day(s)" << endl;
    cout << "Days Until end of Year:  " << DaysUntilEndOfYear(Date) << " Day(s)"
         << endl;
  }

  int main() {
    sDate Date = ReadDate();
    PrintDecreasedDates(Date);

    system("pause>0");
    return 0;
  }