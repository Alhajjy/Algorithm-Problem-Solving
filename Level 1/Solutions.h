#pragma once
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

namespace Solutions {
/*  [1]
    PrintName => While name gived as parameter (Hard Coded):
*/
void PrintName(string Name) { cout << "Your name is: " << Name << endl; }

/*  [2]
    PrintNameDynamicly => getting input from user by ReadName() function:
*/
string ReadName() {
  string Name;
  cout << "Enter Your Name.." << endl;
  getline(cin, Name);
  return Name;
}
void PrintNameDynamicly() { PrintName(ReadName()); }

/*  [3]
    isEvenOdd => Check if Number Even or Odd:
    Usage     => PrintNumber(isEvenOdd(ReadNumber()));
*/
int ReadNumber() {
  int Number;
  cout << "Enter a Number.." << endl;
  cin >> Number;
  return Number;
}
string isEvenOdd(int Number) {
  if (Number % 2 == 0) {
    return "Even";
  } else {
    return "Odd";
  }
}
void PrintNumber(string Result) { cout << "Number is: " << Result << endl; }

/*  [4]
    isAccepted => Check if the driver lisence excepted (excepted when: age > 21 and lisence is exists):
    Usage      => showResult(isAccepted(ReadInfo()));
*/
struct stTerms {
  short Age;
  bool Lisence;
};
stTerms ReadInfo() {
  stTerms driver1;
  cout << "Enter Your age!\n";
  cin >> driver1.Age;
  cout << "Do you have lisence? (0, 1)\n";
  cin >> driver1.Lisence;
  return driver1;
}
bool isAccepted(stTerms driver) {
  if (driver.Age > 21 && driver.Lisence == true) {
    return true;
  } else {
    return false;
  }
}
void showResult(bool result) {
  if (result) {
    cout << "Driver Hired!";
  } else {
    cout << "Driver Rejected!";
  }
}

/*  [5]
    isAccepted => Check if the driver excpted in job (excepted when: age > 21 and have a lisence of just by having Mediation:
    Usage      => showResult2(isAccepted2(ReadInfo2()));
*/
struct stTerms2 {
  short Age;
  bool Lisence;
  bool Mediation;
};
stTerms2 ReadInfo2() {
  stTerms2 driver1;
  cout << "Enter Your age!\n";
  cin >> driver1.Age;
  cout << "Do you have lisence? (0, 1)\n";
  cin >> driver1.Lisence;
  cout << "Do you have mediation? (0, 1)\n";
  cin >> driver1.Mediation;
  return driver1;
}
bool isAccepted2(stTerms2 driver) {
  if ((driver.Age > 21 && driver.Lisence) || driver.Mediation) {
    return true;
  } else {
    return false;
  }
}
void showResult2(bool result) {
  if (result) {
    cout << "You are Hired!";
  } else {
    cout << "You Rejected";
  }
}

/*  [6]
    FullName => get first and last name then print it together as FullName
    Usage    => PrintFullName(getFullName(ReadFullName(), enFullName::Normal));
*/
struct stNames {
  string FirstName;
  string LastName;
};
enum enFullName {
  Normal = 1,
  Reversed = 0,
};

stNames ReadFullName() {
  stNames fullname;
  cout << "write your first name!\n";
  cin >> fullname.FirstName;
  cout << "write your last name!\n";
  cin >> fullname.LastName;
  return fullname;
}
string getFullName(stNames fullname, bool isReversed) {
  if (!isReversed)
    return fullname.FirstName + " " + fullname.LastName;
  else
    return fullname.LastName + " " + fullname.FirstName;
}
void PrintFullName(string fullname) {
  cout << "Your fullname is: " << fullname;
}

/*  [7]
    calcHalfNum => Dividing given number on 2 (num / 2)
    Usage       => int number;
                   ReadNumberByReferans(number);
                   PrintNum(calcHalfNum(number), number);
*/
void ReadNumberByReferans(int &number) {
  cout << "Write a Number\n";
  cin >> number;
}
float calcHalfNum(int number) { return (float)number / 2; }
void PrintNum(float num, int &number) {
  cout << "Half of " << to_string(number) << " is: " << to_string(num);
}

/*  [8]
    checkMark => MARK PASS or FAIL
    Usage     => PrintResultMark(checkMark(ReadMark()));
*/
double ReadMark() {
  double mark;
  cout << "Enter your mark!\n";
  cin >> mark;
  return mark;
}
bool checkMark(double mark) {
  if (mark > 50)
    return true;
  else
    return false;
}
void PrintResultMark(bool result) {
  if (result)
    cout << "Pass!";
  else
    cout << "Fail";
}

/*  [9]
    SumNums => Sum Three Numbers
    Usage   => PrintResultOfSumNumbers(SumNums(ReadNums()));
*/
struct stNums {
  int num1;
  int num2;
  int num3;
};

stNums ReadNums() {
  stNums Nums;
  cout << "Enter your num1\n";
  cin >> Nums.num1;
  cout << "Enter your num2\n";
  cin >> Nums.num2;
  cout << "Enter your num3\n";
  cin >> Nums.num3;
  return Nums;
}
int SumNums(stNums Nums) { return Nums.num1 + Nums.num2 + Nums.num3; }
void PrintResultOfSumNumbers(int sum) { cout << "Sum of Numbers is: " << sum; }

/*  [10]
    AverageNums => AVERAGE OF 3 NUMBERS
    Usage       => PrintAvgResult(AverageNums(ReadNums()));
*/
float AverageNums(stNums Nums) {
  return (float)(Nums.num1 + Nums.num2 + Nums.num3) / 3;
}
void PrintAvgResult(float average) {
  cout << "Average of Numbers is: " << average;
}

/*  [11]
    isPassed => AVERAGE OF 3 NUMBERS PASS/FAIL
    Usage    => PrintResultAvg(isPassed(AverageNums(ReadNums())));
*/
bool isPassed(float average) {
  cout << average << endl;
  if (average > 50)
    return true;
  else
    return false;
}
void PrintResultAvg(bool passing) {
  if (passing)
    cout << "Passed!";
  else
    cout << "Failed!";
}

/*  [12]
    getMax => MAX OF 2 NUMBERS
    Usage  => PrintResultMaxOf2Nums(getMax(Read2Nums()));
*/
struct st2Nums {
  int num1;
  int num2;
};

st2Nums Read2Nums() {
  st2Nums Nums;
    cout << "Enter your num1\n";
    cin >> Nums.num1;
    cout << "Enter your num2\n";
    cin >> Nums.num2;
  return Nums;
}

int getMax(st2Nums Nums) {
  if (Nums.num1 > Nums.num2)
    return Nums.num1;
  else
    return Nums.num2;
}
void PrintResultMaxOf2Nums(int num) {
  string result = "max Number is: " + to_string(num);
  cout << result;
}

/*  [13]
    getMax => MAX OF 3 NUMBERS
    Usage  => PrintResultMax3Nums(getMaxOf3Nums(Read3Nums()));
*/
struct st3Nums {
  int num1;
  int num2;
  int num3;
};

st3Nums Read3Nums() {
  st3Nums Nums;
  do {
    cout << "Enter your num1\n";
    cin >> Nums.num1;
    cout << "Enter your num2\n";
    cin >> Nums.num2;
    cout << "Enter your num3\n";
    cin >> Nums.num3;
  } while (Nums.num1 == Nums.num2 || Nums.num1 == Nums.num3 ||
           Nums.num3 == Nums.num2);
  return Nums;
}

int getMaxOf3Nums(st3Nums Nums) {
  if (Nums.num1 > Nums.num2)
    if (Nums.num1 > Nums.num3)
      return Nums.num1;
    else
      return Nums.num3;
  else if (Nums.num2 > Nums.num3)
    return Nums.num2;
  else
    return Nums.num3;
}
void PrintResultMax3Nums(int num) {
  string result = "max Number is: " + to_string(num);
  cout << result;
}

/*  [14]
    SwapTwoNums => SWAP 2 NUMBERS
    Usage       => PrintResult(SwapTwoNums(Read2Nums()));
*/
st2Nums SwapTwoNums(st2Nums Nums) {
  int container;
  container = Nums.num1;
  Nums.num1 = Nums.num2;
  Nums.num2 = container;
  return Nums;
}
void PrintResultOfSwap2Nums(st2Nums Nums) {
  cout << "num1 is: " << Nums.num1 << endl;
  cout << "num2 is: " << Nums.num2 << endl;
}

/*  [15]
    RectangleArea => Find RECTANGLE AREA
    Usage         => PrintResultOfRectangleArea(RectangleArea(Read2Nums()));
*/
int RectangleArea(st2Nums Nums) { return Nums.num1 * Nums.num2; }
void PrintResultOfRectangleArea(int area) {
  cout << "Rectangle area is: " << area << endl;
}

/*  [16]
    RectangleArea => Find RECTANGLE AREA, Other Method
    Usage         => PrintResultOfRectangleArea2(RectangleArea2(Read2Nums()));
*/
float RectangleArea2(st2Nums Nums) {
  return (float)(Nums.num1 * sqrt(pow(Nums.num2, 2) - pow(Nums.num1, 2)));
}
void PrintResultOfRectangleArea2(float area) {
  cout << "Rectangle area is: " << area << endl;
}

/*  [17]
    triangleArea => Find TRIANGLE AREA
    Usage        => PrintResultOfTriangleArea(triangleArea(Read2Nums()));
*/
float triangleArea(st2Nums Nums) { return (float)((Nums.num1 * Nums.num2) / 2); }
void PrintResultOfTriangleArea(float area) {
  cout << "Rectangle area is: " << area << endl;
}

/*  [18]
    CircleArea => Find CIRCLE AREA
    Usage      => PrintResultOfCircleArea(CircleArea(ReadNumber()));
*/
float CircleArea(int num) {
  float PI = 3.141592653589793238;
  return (float)(pow(num, 2) * PI);
}
void PrintResultOfCircleArea(float area) {
  cout << "Circle area is: " << area << endl;
}

/*  [19]
    CircleArea2 => Find CIRCLE AREA, Other Method
    Usage       => PrintResultOfCircleArea2(CircleArea2(ReadNumber()));
*/
float CircleArea2(int num) {
  float PI = 3.141592653589793238;
  return (float)((PI * pow(num, 2)) / 4);
}
void PrintResultOfCircleArea2(float area) {
  cout << "Circle area is: " << area << endl;
}

/*  [20]
    CircleArea3 => Find CIRCLE AREA, Other Method
    Usage       => PrintResultCircleArea3(CircleArea3(ReadNumber()));
*/
float CircleArea3(int num) {
  float PI = 3.141592653589793238;
  return (float)(PI * pow(num / 2, 2));
}
void PrintResultCircleArea3(float area) {
  cout << "Circle area is: " << area << endl;
}

/*  [21]
    CircleArea4 => Find CIRCLE AREA, Other Method
    Usage       => PrintResultCircleArea4(CircleArea4(ReadNumber()));
*/
float CircleArea4(int num) {
  float PI = 3.141592653589793238;
  return (float)(pow(num, 2) / (4 * PI));
}
void PrintResultCircleArea4(float area) {
  cout << "Circle area is: " << area << endl;
}

/*  [22]
    CircleArea5 => Find CIRCLE AREA, Other Method
    Usage       => PrintResultOfCircleArea5(CircleArea5(Read2Nums()));
*/
float CircleArea5(st2Nums Nums) {
  float PI = 3.141592653589793238;
  return (float)(PI * (pow(Nums.num2, 2) / 4) *
                 ((2 * Nums.num1 - Nums.num2) / (2 * Nums.num1 + Nums.num2)));
}
void PrintResultOfCircleArea5(float area) {
  cout << "Circle area is: " << area << endl;
}
/*  [23]
    CircleArea6 => Find CIRCLE AREA, Other Method
    Usage       => PrintResultOfCircleArea6(CircleArea6(Read3Nums()));
*/
float CircleArea6(st3Nums Nums) {
  float PI = 3.141592653589793238;
  int p = (Nums.num1 + Nums.num2 + Nums.num3) / 2;
  return (float)(PI * (pow((Nums.num1 * Nums.num2 * Nums.num3) /
                               (4 * sqrt(p * (p - Nums.num1) * (p - Nums.num2) *
                                         (p - Nums.num3))),
                           2)));
}
void PrintResultOfCircleArea6(float area) {
  cout << "Circle area is: " << area << endl;
}

/*  [24]
    ValidateNumberInRange => VALIDATE NUMBER IN RANGE (18 - 45)
    Usage                 => PrintResultOfValidationRange(ReadAge());
*/
int ReadAge() {
  int Age;
  cout << "Enter your age\n";
  cin >> Age;
  return Age;
}
bool ValidateNumberInRange(int Age, int From, int To) {
  return (Age >= From && Age <= To);
}
void PrintResultOfValidationRange(int Age) {
  if (ValidateNumberInRange(Age, 18, 45))
    cout << Age << " Age Is In Range.." << endl;
  else
    cout << Age << " Age Is Out Of Range.." << endl;
}

/*  [25]
    ReadUntilAgeBetween => READ UNTIL AGE 18-45
    Usage               => PrintResultOf_ReadUntilAgeBetween(ReadUntilAgeBetween());
*/
int ReadUntilAgeBetween() {
  int Age = 0;
  do {
    cout << "Enter your age (18 - 45)\n";
    cin >> Age;
  } while (!ValidateNumberInRange(Age, 18, 45));
  return Age;
}

void PrintResultOf_ReadUntilAgeBetween(int Age) {
  cout << Age << " Age Is In Range.." << endl;
}

/*  [26]
    calcSumToN => SUM from 0 TO N
    Usage      => PrintSum(calcSumToN(ReadNumber()));
*/
int calcSumToN(int n) {
  int sum = 0;
  for (int i = 0; i <= n; i++) {
    sum += i;
  }
  return sum;
}
void PrintSum(int sum) { cout << "Sum from 0 to n " << sum; }

/*  [27]
    PrintFromNToZero => PRINT FROM N TO 0
    Usage      => PrintFromNToZero(ReadNumber());
*/
void PrintFromNToZero(int n) {
  short counter = n;
  do {
    cout << counter << endl;
    counter--;
  } while (counter >= 0);
}

/*  [28]
    calcSumOddToN => SUM ODD NUMS FROM 0 TO N
    Usage         => PrintSumOddNums(calcSumOddToN(ReadNumber()));
*/
int calcSumOddToN(int n) {
  int sum = 0;
  for (int i = 0; i <= n; i++) {
    if (i % 2 != 0) sum += i;
  }
  return sum;
}
void PrintSumOddNums(int sum) { cout << "Sum Odd from 0 to n " << sum; }

/*  [29]
    calcSumEvenToN => SUM EVEN NUMS FROM 0 TO N
    Usage          => PrintSumOf_calcSumEvenToN(calcSumEvenToN(ReadNumber()));
*/
enum enOddOrEven { Odd = 1, Even = 2 };
enOddOrEven CheckOddOrEven(int num) {
  if (num % 2 != 0)
    return enOddOrEven::Odd;
  else
    return enOddOrEven::Even;
}

int calcSumEvenToN(int n) {
  int sum = 0;
  for (int i = 0; i <= n; i++) {
    if (CheckOddOrEven(i) == enOddOrEven::Even) sum += i;
  }
  return sum;
}
void PrintSumOf_calcSumEvenToN(int sum) {
  cout << "Sum Even from 0 to n ==>  " << sum;
}

/*  [30]
    Factoial => N FACTORIAL
    Usage    => Factoial(ReadPozitifNumber("Enter Pozitif Number!\n"));
*/
int ReadPozitifNumber(string message) {
  short n;
  do {
    cout << message << endl;
    cin >> n;
  } while (n < 0);
  return n;
}
void Factoial(short n) {
  int result = 1;
  short counter = 1;
  while (counter <= n) {
    result *= counter;
    counter++;
  }
  cout << n << " Factorial is: " << result;
}

/*  [31]
    Power2_3_4 => POWER 2,3,4
    Usage    => Power2_3_4(ReadNumber());
*/
void Power2_3_4(short n) {
  int a, b, c;
  a = n * n;
  b = n * n * n;
  c = n * n * n * n;
  cout << a << " | " << b << " | " << c << endl;
}

/*  [32]
    calcNumPow => POWER OF M
    Usage    => calcNumPow(ReadNumPow());
*/
struct stNumPow {
  short num;
  short power;
};
stNumPow ReadNumPow() {
  stNumPow numPow;
  do {
    cout << "enter num\n";
    cin >> numPow.num;
  } while (numPow.num < 0);
  do {
    cout << "enter pow\n";
    cin >> numPow.power;
  } while (numPow.power < 1);

  return numPow;
}
void calcNumPow(stNumPow numPow) {
  int result = pow(numPow.num, numPow.power);
  cout << result;
}

/*  [33]
    GetGradeLetter => GRADE A, B, C, D, E, F
    Usage    =>  char letter = GetGradeLetter(ReadNumberInRange(0, 100));
                 cout << letter;
*/
int ReadNumberInRange(short From, short To) {
  int grade;
  do {
    cout << "enter grade\n";
    cin >> grade;
  } while (grade < From || grade > To);
  return grade;
}
char GetGradeLetter(int Grade) {
  if (Grade >= 90)
    return 'A';
  else if (Grade >= 80)
    return 'B';
  else if (Grade >= 70)
    return 'C';
  else if (Grade >= 60)
    return 'D';
  else if (Grade >= 50)
    return 'E';
  else
    return 'F';
}

/*  [34]
    calcSalesPercntg => COMMISSION PERCENTAGE
    Usage            =>  float TotalSales = ReadTotalSales();
                         cout << "Commission Percentage = " << whichPercentage(TotalSales) << endl;
                         cout << "Total Commission = " << calcSalesPercntg(TotalSales) << endl;
*/
int ReadTotalSales() {
  int total;
  cout << "Write Total Sales\n";
  cin >> total;
  return total;
}
float whichPercentage(int total) {
  float percentage;
  if (total == 1000000)
    percentage = 0.1;
  else if (total >= 500000 && total < 1000000)
    percentage = 0.2;
  else if (total >= 100000 && total < 500000)
    percentage = 0.3;
  else if (total >= 50000 && total < 100000)
    percentage = 0.5;
  else
    percentage = 0;
  return percentage;
}
float calcSalesPercntg(float Total) { return whichPercentage(Total) * Total; }

/*  [35]
    calcSalesPercntg => PIGGY BANK CALCULATOR
    Usage            => PrintResultOf_calcPennies();
*/
struct stBank {
  int Pennies, Nickles, Dimes, Quarters, Dollars;
};
stBank ReadValues() {
  stBank Banky;
  cout << "Pennies?\n";
  cin >> Banky.Pennies;
  cout << "Nickles?\n";
  cin >> Banky.Nickles;
  cout << "Dimes?\n";
  cin >> Banky.Dimes;
  cout << "Quarters?\n";
  cin >> Banky.Quarters;
  cout << "Dollars?\n";
  cin >> Banky.Dollars;
  return Banky;
}
float calcPennies(stBank Banky) {
  float result = 0;
  result += Banky.Pennies +
      Banky.Nickles * 5 +
      Banky.Dimes * 10 +
      Banky.Quarters * 25 +
      Banky.Dollars * 100;
  return result;
}
void PrintResultOf_calcPennies() {
  int TotalPennies = calcPennies(ReadValues());
  cout << "Total Pennies: " << TotalPennies << endl;
  cout << "Total Dollars: " << (float)TotalPennies / 100 << endl;
}

/*  [36]
    CheckCalcOpr => OPERATION TYPE
    Usage        => PrintOperationResult(CheckCalcOpr(ReadDetails()));
*/
struct stOperation {
  float num1;
  float num2;
  string operationType;
};
stOperation ReadDetails() {
  stOperation Opr;
  cout << "Enter num1?\n";
  cin >> Opr.num1;
  cout << "Enter num2?\n";
  cin >> Opr.num2;
  cout << "Enter Operation Type (+, -, *, /)?\n";
  cin >> Opr.operationType;
  return Opr;
}
string CheckCalcOpr(stOperation Opr) {
  if (Opr.operationType == "-")
    return "The Result is: " + to_string(Opr.num1 - Opr.num2);
  else if (Opr.operationType == "+")
    return "The Result is: " + to_string(Opr.num1 + Opr.num2);
  else if (Opr.operationType == "*")
    return "The Result is: " + to_string(Opr.num1 * Opr.num2);
  else if (Opr.operationType == "/")
    return "The Result is: " + to_string(Opr.num1 / Opr.num2);
  else {
    return "Enter a Valid Operation Type!\n";
  }
}
void PrintOperationResult(string Result) { cout << Result; }

/*  [37]
    EnterSumNums => Sum Nums Until Getting -99 Number
    Usage        => cout << "Result is: " << EnterSumNums();
*/
float ReadNumbers(string Message) {
  float Number = 0;
  cout << Message << endl;
  cin >> Number;
  return Number;
}
int EnterSumNums() {
  int sum = 0, num = 0, counter = 1;
  do {
    num = ReadNumbers("Enter num " + to_string(counter) + " ?\n");
    if (num == -99) break;
    counter++;
    sum += num;
  } while (num != -99);
  return sum;
}

/*  [38]
    CheckPrime => check if number is prime
    Usage        => PrintResultOf_CheckPrime(CheckPrime(ReadPozitifNumber("Enter num to see Prime or Not Prime!\n")));
*/
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
enPrimeNotPrime CheckPrime(int Number) {
  int M = round(Number / 2);
  for (int i = 2; i <= M; i++) {
    if (Number % i == 0) return enPrimeNotPrime::NotPrime;
  }
  return enPrimeNotPrime::Prime;
}
void PrintResultOf_CheckPrime(enPrimeNotPrime result) {
  switch (result) {
    case enPrimeNotPrime::NotPrime:
      cout << "Number is Not Prime";
      break;
    case enPrimeNotPrime::Prime:
      cout << "Number is Prime";
      break;
    default:
      break;
  }
}

/*  [39]
    Calc => check Bill and Paid
    Usage        =>     float TotalBill = ReadPozitifNumber("Enter The Total Bill!\n");
                        float CashPaid = ReadPozitifNumber("Enter The Cash Paid!\n");
                        PrintResultOf_Calc(Calc(TotalBill, CashPaid));
*/
float Calc(float Bill, float Paid) { return Paid - Bill; }
void PrintResultOf_Calc(float Money) { cout << "Result: " << Money; }

/*  [40]
    Calc2 => check Bill and Tax
    Usage        =>  float BillValue = ReadPozitifNumber("Enter The Bill Value!\n");
                     PrintResult(Calc2(BillValue));
*/
float Calc2(float BillValue) { return (BillValue * 1.1) * 1.16; }
void PrintResult(float Money) { cout << "Result: " << Money; }

/*  [41]
    CalcDaysNum, CalcWeeksNum => Hours, days and weeks number
    Usage        =>    float Hours = ReadPozitifNumber("Enter Hours Number!\n");
                        float Days = CalcDaysNum(Hours);
                        float Weeks = CalcWeeksNum(Hours);
                        PrintResultOfCalculation(Hours, Days, Weeks);
*/
float CalcDaysNum(float Hours) { return Hours / 24; }
float CalcWeeksNum(float Hours) { return Hours / 168; }
void PrintResultOfCalculation(float Hours, float Days, float Weeks) {
  cout << "Hours: " << Hours << endl;
  cout << "Days: " << Days << endl;
  cout << "Weeks: " << Weeks << endl;
}

/*  [42]
    CalcSeconds => Calculate time as seconds
    Usage       => int Seconds = CalcSeconds(ReadDuration());
                   cout << "Total Seconds is: " << Seconds;
*/
struct strTaskDuration {
  int Days, Hours, Minutes, Seconds;
};
strTaskDuration ReadDuration() {
  strTaskDuration info;
  info.Days = ReadPozitifNumber("Enter Days?\n");
  info.Hours = ReadPozitifNumber("Enter Hours?\n");
  info.Minutes = ReadPozitifNumber("Enter Minutes?\n");
  info.Seconds = ReadPozitifNumber("Enter Seconds?\n");
  return info;
}
int CalcSeconds(strTaskDuration Durations) {
  int Seconds = 0;
  Seconds += Durations.Days * (24 * 60 * 60);
  Seconds += Durations.Hours * (60 * 60);
  Seconds += Durations.Minutes * 60;
  Seconds += Durations.Seconds;
  return Seconds;
}

/*  [43]
    CalcDetails => Convert given seconds as [Days, Hours, Minutes, Seconds]
    Usage       => PrintResultOf_CalcDetails(CalcDetails(ReadPozitifNumber("Enter Seconds number?\n")));
*/
strTaskDuration CalcDetails(int Seconds) {
  strTaskDuration Durations;
  Durations.Days = Seconds / (24 * 60 * 60);
  Seconds = Seconds % (24 * 60 * 60);
  Durations.Hours = Seconds / (60 * 60);
  Seconds = Seconds % (60 * 60);
  Durations.Minutes = Seconds / 60;
  Seconds = Seconds % 60;
  Durations.Seconds = Seconds;
  return Durations;
}
void PrintResultOf_CalcDetails(strTaskDuration Durations) {
  cout << Durations.Days << " | " << Durations.Hours << " | "
       << Durations.Minutes << " | " << Durations.Seconds;
}

/*  [44]
    WhichDay => write day name getting its number
    Usage       => cout << WhichDay(ReadPozitifNumber("Enter num (1-7)\n"));
*/
enum enWeekDays {
  Sunday = 1,
  Monday = 2,
  Tuesday = 3,
  Wednesday = 4,
  Thursday = 5,
  Friday = 6,
  Saturday = 7,
};
int ReadNumberInRange(string Message) {
  int Number = 0;
  do {
    cout << Message << endl;
    cin >> Number;
  } while (Number < 1 || Number > 7);
  return Number;
}
string WhichDay(int num) {
  switch (num) {
    case enWeekDays::Sunday:
      return "It's Sunday";
      break;
    case enWeekDays::Monday:
      return "It's Monday";
      break;
    case enWeekDays::Tuesday:
      return "It's Tuesday";
      break;
    case enWeekDays::Wednesday:
      return "It's Wednesday";
      break;
    case enWeekDays::Thursday:
      return "It's Thursday";
      break;
    case enWeekDays::Friday:
      return "It's Friday";
      break;
    case enWeekDays::Saturday:
      return "It's Saturday";
      break;
    default:
      return "Somethis Went Wrong!";
  }
}

/*  [45]
    ReadMonth => give month name getting its number
    Usage       => cout << WhichMonth(ReadMonth());
*/
enum enMonthDays {
  January = 1,
  February = 2,
  March = 3,
  April = 4,
  May = 5,
  June = 6,
  July = 7,
  August = 8,
  September = 9,
  October = 10,
  November = 11,
  December = 12,
};
int ReadNumberInRange2(short From, short To) {
  int num;
  do {
    cout << "enter num\n";
    cin >> num;
  } while (num < From || num > To);
  return num;
}
int ReadMonth() { return ReadNumberInRange2(1, 12); }
string WhichMonth(int num) {
  switch (num) {
    case enMonthDays::January:
      return "January";
      break;
    case enMonthDays::February:
      return "February";
      break;
    case enMonthDays::March:
      return "March";
      break;
    case enMonthDays::April:
      return "April";
      break;
    case enMonthDays::May:
      return "May";
      break;
    case enMonthDays::June:
      return "June";
      break;
    case enMonthDays::July:
      return "July";
      break;
    case enMonthDays::August:
      return "August";
      break;
    case enMonthDays::September:
      return "September";
      break;
    case enMonthDays::October:
      return "October";
      break;
    case enMonthDays::November:
      return "November";
      break;
    case enMonthDays::December:
      return "December";
      break;
    default:
      break;
  }
}

/*  [46]
    PrintLetterAtoZ => print all letters by ascii codes
    Usage       => PrintLetterAtoZ();
*/
void PrintLetterAtoZ() {
  for (int i = 65; i <= 90; i++) {
    cout << char(i) << endl;
  }
}

/*  [47]
    HowMonth => calculate in how month loan will be finished
    Usage       =>     int Loan = ReadPozitifNumber("Enter Loan\n");
                       int MonthlyPayment = ReadPozitifNumber("Enter Monthly Payment\n");
                       cout << HowMonth(Loan, MonthlyPayment) << " Months";
*/
int HowMonth(int Loan, int MonthlyPayment) { return Loan / MonthlyPayment; }

/*  [48]
    MonthlyPayment => calculate monthly payment by loan and time
    Usage       =>    int Loan = ReadPozitifNumber("Enter Loan\n");
                        int Months = ReadPozitifNumber("Enter Months\n");
                        cout << MonthlyPayment(Loan, Months) << " $ in each month.";
*/
int MonthlyPayment(int Loan, int Months) { return Loan / Months; }

/*  [49]
    CheckPin => check passowrd if right or wrong
    Usage       =>    if (CheckPin(ReadPin("Enter Pin\n")))
                        {
                            system("color 2F");
                            cout << "Your Balance is: " << 7500 << '\n';
                        };
*/
string ReadPin(string message) {
  string Pin = "";
  cout << message;
  cin >> Pin;
  return Pin;
}
bool CheckPin(string Pin) {
  do {
    if (Pin == "1234")
      return 1;
    else {
      cout << "wrong Pin!";
      system("color 4F");
    }
  } while (Pin != "1234");
}

/*  [50]
    Login => check passowrd if right or wrong, and give ablility to try 3 times
    Usage       =>    if (Login()) {
                          system("color 2F");
                          cout << "Your Balance is: " << 7500 << '\n';
                        };
*/
bool Login() {
  string Pin;
  int counter = 0;
  do {
    Pin = ReadPin("Enter Pin\n");

    if (Pin == "1234")
      return 1;
    else {
      cout << "wrong Pin!\n";
      system("color 4F");
    }
    counter++;
    if (counter == 3) break;
  } while (Pin != "1234");
  return 0;
}
}