#pragma once
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

namespace Solutions {
/*
    Shared Functions
*/
float ReadNumber() {
  float Number;
  cout << "enter a number ";
  cin >> Number;
  return Number;
}
int ReadPozitifNumber(string Message) {
  float Number = 0;
  do {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);
  return Number;
}

float ReadFloatNumber() {
  float Number;
  cout << "enter a number ";
  cin >> Number;
  return Number;
}

string ReadText(string message) {
  string Text = "";
  while (Text == "") {
    cout << message << endl;
    getline(cin, Text);
  }
  return Text;
}

/*  [1]
    MultiplicationTable => Create Multiplication Table and Print it
*/
void PrintTableHeader() {
  cout << "    ";
  for (int i = 1; i <= 10; i++) {
    if (i < 10)
      cout << "  " << i << " ";
    else
      cout << " " << i << " ";
  }
  cout << endl;
  cout << "------------------------------------------------------------\n";
}
void MultiplicationTable() {
  for (int i = 1; i <= 10; i++) {
    if (i < 10)
      cout << i << "  | ";
    else
      cout << i << " | ";
    for (int j = 1; j <= 10; j++) {
      int product = i * j;
      if (product < 10)
        cout << "  " << product << " ";
      else if (product < 100)
        cout << " " << product << " ";
      else
        cout << product << " ";
    }
    cout << endl;
  }
}
void PrintMultiplicationTable() {
  cout << "\t\t\tMultiplication Table From 1 to 10\n\n";
  PrintTableHeader();
  MultiplicationTable();
}

/*  [2]
    Prime Numbers => Get all prime numbers less then your number
*/
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
enPrimeNotPrime CheckPrime(int Number) {
  int M = round(Number / 2);
  for (int i = 2; i <= M; i++) {
    if (Number % i == 0) return enPrimeNotPrime::NotPrime;
  }
  return enPrimeNotPrime::Prime;
}
void PrintPrimeNumbers(int num) {
  for (int i = 1; i <= num; i++) {
    switch (CheckPrime(i)) {
      case enPrimeNotPrime::Prime:
        cout << " | " << i;
        break;
      default:
        break;
    }
  }
}
/*  [3]
    Perfect Number => Check if Number is Perfect Number
*/
bool CheckPerfect(int num) {
  int sum = 0;
  for (int i = 1; i < num; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }
  return sum == num;
}

void PrintResult(bool IsPerfect) {
  if (IsPerfect)
    cout << "This is a Perfect Number!";
  else
    cout << "This is Not a Perfect Number!";
}

/*  [4]
    FindPerfectNumbers => Find Perfect Numbers less then given Number
*/
void FindPerfectNumbers(int num) {
  string Numbers;
  for (int i = 1; i < num; i++) {
    if (CheckPerfect(i)) cout << i << endl;
    ;
  }
}

/*  [5]
    AccessDigits => Access and print digits of a number in a reversed order
*/
void AccessDigits(int num) {
  string number = to_string(num);
  for (int i = number.size(); i >= 0; i--) {
    cout << number[i] << endl;
  }
}

/*  [6]
    SumOfDigits => Sum Digits of a Number
*/
int SumOfDigits(int Number) {
  int Sum = 0;
  int Remainder = 0;

  while (Number > 0) {
    Remainder = Number % 10;
    Number = Number / 10;
    Sum = Sum + Remainder;
  }

  return Sum;
}
/*  [7]
    ReverseNumber => Reverse Number Digits and Print it
*/
void ReverseNumber(int Number) {
  int Reminder = 0;
  int ReversedNumber = 0;
  while (Number > 0) {
    Reminder = Number % 10;
    Number = Number / 10;
    cout << Reminder << endl;

    ReversedNumber = ReversedNumber * 10 + Reminder;
  }
  cout << "Reversed Number: " << ReversedNumber;
}

/*  [8]
    DigitFrequency => Check the frequency of a digit in a number
*/
void DigitFrequency(int Number, short Digit) {
  int Reminder = 0;
  int Repeating = 0;
  while (Number > 0) {
    Reminder = Number % 10;
    Number = Number / 10;
    if (Reminder == Digit) Repeating++;
  }
  cout << "Digit " << Digit << " Frequency is " << Repeating << " Times.";
}

/*  [9]
    PrintAllDigitsFrequencey => Print Frequency of all digits in a number
*/
int CountDigitFrequency(short DigitToCheck, int Number) {
  int Freq = 0;
  int Remainder = 0;

  while (Number > 0) {
    Remainder = Number % 10;
    Number = Number / 10;

    if (DigitToCheck == Remainder) {
      Freq++;
    }
  }
  return Freq;
}
void PrintAllDigitsFrequencey(int Number) {
  for (int i = 0; i < 10; i++) {
    short DigitFrequency = 0;
    DigitFrequency = CountDigitFrequency(i, Number);

    if (DigitFrequency > 0) {
      cout << "Digit " << i << " Frequencey is " << DigitFrequency
           << " Time(s).\n";
    }
  }
}

/*  [10]
    GetReversedNumber => Reverse Number, then print it's digits
*/
int GetReversedNumber(int Number) {
  int Reminder = 0;
  int ReversedNumber = 0;
  while (Number > 0) {
    Reminder = Number % 10;
    Number = Number / 10;
    ReversedNumber = ReversedNumber * 10 + Reminder;
  }
  return ReversedNumber;
}
void PrintDigits(int ReversedNumber) {
  while (ReversedNumber > 0) {
    int Reminder = 0;
    Reminder = ReversedNumber % 10;
    ReversedNumber = ReversedNumber / 10;
    cout << Reminder << endl;
  }
}
/*  [11]
    IsPalindrome => Check if Number is Palindrome Number
*/
void IsPalindrome(int Number) {
  if (Number == GetReversedNumber(Number))
    cout << "Yes, It`s a Palindrome Number.";
  else
    cout << "No, It`s Not a Palindrome Number.";
}
/*  [12]
    PrintInvertedNumberPattern => Prints an inverted number pattern where each
   line prints a sequence of digits
*/
void PrintInvertedNumberPattern(short num) {
  for (int i = num; i > 0; i--) {
    for (int j = 1; j < i; j++) {
      cout << i;
    }
    cout << i << endl;
  }
}
/*  [13]
    getMax => Prints a number pattern where each line prints the line number
   repeated as many times as the line number
*/
void PrintNumberPattern(short num) {
  for (int i = 1; i <= num; i++) {
    for (int j = 1; j < i; j++) {
      cout << i;
    }
    cout << i << endl;
  }
}
/*  [14]
    SwapTwoNums => Prints an inverted letter pattern using uppercase letters.
                  The pattern starts with the letter corresponding to ASCII code
   (65 + Number - 1) and decrements down to 'A' (ASCII 65). In each row, the
   letter is printed a decreasing number of times, starting from 'Number' times
   on the first row, down to 1 time on the last row.
*/
void PrintInvertedLetterPattern(int num) {
  for (int i = 65 + num - 1; i >= 65; i--) {
    for (int j = 1; j <= num - (65 + num - 1 - i); j++) {
      cout << char(i);
    }
    cout << endl;
  }
}
/*  [15]
    PrintLetterPattern => Prints a letter pattern using uppercase letters.
                          The pattern starts with the letter corresponding to
   ASCII code (65 + Number - 1) and decrements down to 'A' (ASCII 65). In each
   row, the letter is printed a decreasing number of times, starting from
   'Number' times on the first row, down to 1 time on the last row.
*/
void PrintLetterPattern(int num) {
  for (int i = 65; i <= 65 + num - 1; i++) {
    for (int j = 1; j <= num - (65 + num - 1 - i); j++) {
      cout << char(i);
    }
    cout << endl;
  }
}
/*  [16]
    PrintWordsFromAAAtoZZZ => print (AAA, AAB, .. ZZZ)
*/
void PrintWordsFromAAAtoZZZ() {
  string words = "";
  for (int i = 65; i <= 90; i++) {
    for (int j = 65; j <= 90; j++) {
      for (int l = 65; l <= 90; l++) {
        words = words + char(i) + char(j) + char(l);
        cout << words << endl;
        words = "";
      }
    }
    cout << "\t";
  }
}

/*  [17]
    GuessPassword => Attempts to guess the original 3-letter password by
brute-forcing through all
//                      combinations of three uppercase letters (from "AAA" to
"ZZZ")
*/
string ReadPassword(string message) {
  string Password = "";
  while (Password.length() != 3) {
    cout << message << endl;
    cin >> Password;
  }
  return Password;
}
void GuessPassword(string Password) {
  string pass = "";
  int counter = 0;
  for (int i = 65; i <= 90; i++) {
    for (int j = 65; j <= 90; j++) {
      for (int l = 65; l <= 90; l++) {
        counter++;
        if (pass + char(i) + char(j) + char(l) == Password) {
          cout << "Found after " << counter << " trials.";
          break;
        }
      }
    }
  }
}

/*  [18]
    Encription, Decription => Encript and Decript a text using a given key
*/
void Encript(string text, short EncriptionKey) {
  string Encrypted_Text = "";
  for (int i = 0; i < text.length(); i++) {
    for (int j = 65; j <= 122; j++) {
      if (char(j) == text[i])
        Encrypted_Text = Encrypted_Text + char(j + EncriptionKey);
    }
  }
  cout << Encrypted_Text << endl;
}
void Decript(string text, short EncriptionKey) {
  string Decrypted_Text = "";
  for (int i = 0; i < text.length(); i++) {
    for (int j = 65; j <= 122; j++) {
      if (char(j) == text[i])
        Decrypted_Text = Decrypted_Text + char(j - EncriptionKey);
    }
  }
  cout << Decrypted_Text << endl;
}

/*  [19]
    RandomNumber => Generate random number in range you specified
*/
int RandomNumber(int From, int To) {
  // function to generate a random number
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}
/*  [20]
    GetRandomCharacter => Returns a random character based on the specified
   character type.
*/
enum enCharType {
  SmallLetter = 1,
  CapitalLetter = 2,
  SpacialCharacter = 3,
  Digit = 4
};
char GetRandomCharacter(enCharType CharType) {
  switch (CharType) {
    case enCharType::SmallLetter:
      return char(RandomNumber(97, 122));
      break;
    case enCharType::CapitalLetter:
      return char(RandomNumber(65, 90));
      break;
    case enCharType::SpacialCharacter:
      return char(RandomNumber(33, 47));
      break;
    case enCharType::Digit:
      return char(RandomNumber(48, 57));
      break;
    default:
      break;
  }
}
/*  [21]
    Generate Keys => Generates and prints a specified number of keys.
*/
string GetKeyPart() {
  string Part = "";
  return Part + char(RandomNumber(65, 90)) + char(RandomNumber(65, 90)) +
         char(RandomNumber(65, 90)) + char(RandomNumber(65, 90));
}
void GetCompleteKey() {
  cout << GetKeyPart() << "-" << GetKeyPart() << "-" << GetKeyPart() << "-"
       << GetKeyPart() << endl;
}

/*  [22]
    Create => Array and Check Repeating Number in it
*/
void ReadArray(int arr[100], int &Length) {
  int ElementsNumber = ReadPozitifNumber("Enter array elements length?");
  Length = ElementsNumber + 1;
  for (int i = 0; i < ElementsNumber; i++) {
    arr[i] = ReadPozitifNumber("Enter array's Element " + to_string(i + 1));
  }
}
int CheckRepeating(int arr[100], int Length, int &Num) {
  int counter = 0;
  Num = ReadPozitifNumber("Enter the number you want to check:");
  for (int i = 0; i < Length; i++) {
    if (arr[i] == Num) counter++;
  }
  return counter;
}
void PrintArray(int arr[100], int Length) {
  cout << "\nArray: [";
  for (int i = 0; i < Length - 1; i++) {
    cout << arr[i];
    if (i != Length - 2) cout << ", ";
  }
  cout << "]" << endl;
}

/*  [23]
    FillArrayWithRandomNums => automatic filling an array with random numbers
*/
void FillArrayWithRandomNumbers(int arr[100], int &Length) {
  cout << "How number do you want?\n";
  cin >> Length;
  for (int i = 0; i < Length; i++) {
    arr[i] = RandomNumber(1, 100);
  }
}
void PrintArray2(int arr[100], int Length) {
  cout << "\n Array: [\n";
  for (int i = 0; i < Length; i++) {
    cout << i + 1 << " => " << arr[i];
    if (i != Length - 1) cout << endl;
  }
  cout << "\n]\n";
}

/*  [24]
    GetMaxNum => Get maximum number of random filled array
*/
void GetMaxNum(int arr[100], int Length) {
  int MaxNum = 0;
  for (int i = 0; i < Length; i++) {
    if (MaxNum < arr[i]) {
      MaxNum = arr[i];
    }
  }
  cout << "Max Number is: " << MaxNum;
}

/*  [25]
    GetMinNum => Get minimum number of random filled array
*/
void GetMinNum(int arr[100], int Length) {
  int MinNum = arr[0];
  for (int i = 0; i < Length; i++) {
    if (MinNum > arr[i]) {
      MinNum = arr[i];
    }
  }
  cout << "Min Number is: " << MinNum;
}

/*  [26]
    SumArrayNumbers => Get sum of numbers in random filled array
*/
int SumArrayNumbers(int arr[100], int Length) {
  int Sum = 0;
  for (int i = 0; i < Length; i++) {
    Sum += arr[i];
  }
  return Sum;
}

/*  [27]
    AverageOfArrayNumbers => Get average of numbers in random filled array
*/
float AverageOfArrayNumbers(int arr[100], int Length) {
  int Sum = 0;
  float Average;
  for (int i = 0; i < Length; i++) {
    Sum += arr[i];
  }
  Average = (float)Sum / Length;
  return Average;
}
/*  [28]
    CopyArr1ToArr2 => Copy autotomatic random filled array to another array
*/
void PrintSecondArray(int arr[100], int Length) {
  cout << "\nSecond array: [\n";
  for (int i = 0; i < Length; i++) {
    cout << i + 1 << " => " << arr[i];
    if (i != Length - 1) cout << endl;
  }
  cout << "\n]";
}
void CopyArr1ToArr2(int arr1[100], int Length, int arr2[100]) {
  for (int i = 0; i < Length; i++) {
    arr2[i] = arr1[i];
  }
  PrintSecondArray(arr2, Length);
}

/*  [29]
    CopyPrimeNumbersInArr1ToArr2 => Copy Prime Numbers In Arr1 To Arr2
*/
bool IsNumberPrime(int Number) {
  if (Number <= 1) return false;

  int M = round(Number / 2);
  for (int i = 2; i <= M; i++) {
    if (Number % i == 0) return false;
  }
  return true;
}
void CopyPrimeNumbersInArr1ToArr2(int arr1[100], int Length, int arr2[100], int &Length2) {
  short indexOfNum = 0;
  for (int i = 0; i < Length; i++) {
    if (IsNumberPrime(arr1[i])) {
      arr2[indexOfNum] = arr1[i];
      indexOfNum++;
    }
  }
  Length2 = indexOfNum;
}

/*  [30]
    Sum2Arrays => Sum 2 Arrays elements
*/
void Sum2Arrays(int arr[100], int Length, int arr2[100], int Length2,
                int arr3[100], int &Length3) {
  if (Length > Length2)
    Length3 = Length;
  else
    Length3 = Length2;
  for (int i = 0; i < Length3; i++) {
    arr3[i] = arr[i] + arr2[i];
  }
}

/*  [31]
    Swap Arrays => Swap two arrays elements
*/
void Swap(int &A, int &B) {
  int Temp;

  Temp = A;
  A = B;
  B = Temp;
}
void FillArrayWith1ToN(int arr[100], int &Length) {
  for (int i = 0; i < Length; i++) {
    arr[i] = i + 1;
  }
}
void ShuffleArray(int arr[100], int Length) {
  for (int i = 0; i < Length; i++) {
    Swap(arr[RandomNumber(1, Length) - 1], arr[RandomNumber(1, Length) - 1]);
  }
}

/*  [32]
    CopyArrayInReverseOrder => Copy Array In Reversed Order
*/
void CopyArrayInReverseOrder(int arr[100], int arr2[100], int Length) {
  for (int i = 0; i < Length; i++) {
    arr2[i] = arr[Length - 1 - i];
  }
}
/*  [33]
    FillArrayWithKeys => Fill Array With Random Generated Keys
*/
void PrintKeysInArray(string arr[100], int Length) {
  cout << "array of keys: [\n";
  for (int i = 0; i < Length; i++) {
    if (i != Length - 1)
      cout << "Key " << i << " => " << arr[i] << ",\n";
    else
      cout << arr[i];
  }
  cout << "\n]\n";
}
string GetAllKey() {
  return GetKeyPart() + "-" + GetKeyPart() + "-" + GetKeyPart() + "-" +
         GetKeyPart();
}
void FillArrayWithKeys(string arr[100], int Length) {
  for (int i = 0; i < Length; i++) {
    arr[i] = GetAllKey();
  }
}
/*  [34]
    SearchNumber => Search Number in Array
*/
void SearchNumber(int arr[100], int Length, int Number) {
  bool checker = 0;
  for (int i = 0; i < Length; i++) {
    if (arr[i] == Number) {
      cout << "Number " << Number << " || in index " << i << " || in position "
           << i + 1 << endl;
      checker = 1;
    } else if (i == Length - 1 && checker == 0) {
      cout << "Number " << Number << " number is not found!";
    }
  }
}

/*  [35]
    SearchNumber_boolean => Search is if number exists in array (returns boolean value)
*/
bool SearchNumber_boolean(int arr[100], int Length, int Number) {
  bool checker = 0;
  for (int i = 0; i < Length; i++) {
    if (arr[i] == Number) {
      return true;
    } else if (i == Length - 1) {
      return false;
    }
  }
}
void PrintResultOf_SearchNumber_boolean(bool Result) {
  if (Result)
    cout << "The Number is found :-)";
  else
    cout << "The Number is Not Found :-(";
}
/*  [36]
    AddNumToArray => Add Numbers as you want to array
*/
bool WantAddMoreNumbers(bool &TakeNumber) {
  cout << "Do you want to add more numbers? (yes: 1, No: 0)\n";
  cin >> TakeNumber;
  return TakeNumber;
}
void AddNumToArray(int arr[100], int NewNumber, int &CurrentLength) {
  arr[CurrentLength] = NewNumber;
  CurrentLength++;
}

/*  [37]
    CopyElementsToArr2 => Copy Elements To Arr2
*/
void AddArrayElement(int Number, int arr[100], int &Length2) {
  arr[Length2] = Number;
  Length2++;
}
void CopyElementsToArr2(int arr[100], int arr2[100], int Length, int &Length2) {
  for (int i = 0; i < Length; i++) {
    AddArrayElement(arr[i], arr2, Length2);
  }
}
/*  [38]
    CopyOddNumsToArr2 => copy odd numbers to a new array
*/
void CopyOddNumsToArr2(int arr[100], int arr2[100], int Length, int &Length2) {
  for (int i = 0; i < Length; i++) {
    if (arr[i] % 2 != 0) AddArrayElement(arr[i], arr2, Length2);
  }
}

/*  [39]
    CopyPrimeNums => Copy only Prime Nums to the second array
*/
enPrimeNotPrime CheckIfPrime(int Number) {
  int M = round(Number / 2);
  for (int i = 2; i <= M; i++) {
    if (Number % i == 0) return enPrimeNotPrime::NotPrime;
  }
  return enPrimeNotPrime::Prime;
}
void CopyPrimeNums(int arr[100], int arr2[100], int Length, int &Length2) {
  for (int i = 0; i < Length; i++) {
    if (CheckIfPrime(arr[i]) == enPrimeNotPrime::Prime)
      AddArrayElement(arr[i], arr2, Length2);
  }
}

/*  [40]
    CopyDestinctNums => Copy only Destinct Numbers
*/
void InputUserNumbersInArray(int arr[100], int &Length) {
  bool more = true;
  do {
    AddArrayElement(ReadNumber(), arr, Length);
    cout << "Want to add more numbers? (yes: 1, No: 0)\n";
    cin >> more;
  } while (more);
}
void CopyDestinctNums(int arr[100], int arr2[100], int Length, int &Length2) {
  for (int i = 0; i < Length; i++) {
    if (CheckRepeating(arr2, Length, arr[i]) == 0)
      AddArrayElement(arr[i], arr2, Length2);
  }
}
/*  [41]
    IsArrayPalindrome => Check if given array is palindrome
*/
void FillArray(int arr[100], int &Length) {
  Length = 5;

  arr[0] = 10;
  arr[1] = 10;
  arr[2] = 50;
  arr[3] = 10;
  arr[4] = 10;
}
bool IsArrayPalindrome(int arr[100], int Length) {
  for (int i = 0; i < Length; i++) {
    if (arr[i] != arr[Length - i - 1]) return false;
  }
  return true;
}

/*  [42]
    HowManyOddNumsInArray => Counts odd numbers existing in the array
*/
void FillArray2(int arr[100], int &Length) {
  Length = 5;

  arr[0] = 10;
  arr[1] = 10;
  arr[2] = 50;
  arr[3] = 3;
  arr[4] = 10;
}
int HowManyOddNumsInArray(int arr[100], int Length) {
  int counter = 0;
  for (int i = 0; i < Length; i++) {
    if (arr[i] % 2 != 0) counter++;
  }
  return counter;
}

/*  [43]
    HowManyEvenNumsInArray => Counts even numbers existing in the array
*/
int HowManyEvenNumsInArray(int arr[100], int Length) {
  int counter = 0;
  for (int i = 0; i < Length; i++) {
    if (arr[i] % 2 == 0) counter++;
  }
  return counter;
}

/*  [44]
    PozitifNumCount => Counts positive numbers existing in the array
*/
int PozitifNumCount(int arr[100], int Length) {
  int counter = 0;
  for (int i = 0; i < Length; i++) {
    if (arr[i] >= 0) counter++;
  }
  return counter;
}

/*  [45]
    NegatifNumCount => Counts negative numbers existing in the array
*/
int NegatifNumCount(int arr[100], int Length) {
  int counter = 0;
  for (int i = 0; i < Length; i++) {
    if (arr[i] < 0) counter++;
  }
  return counter;
}

/*  [46]
    MyAbs => absolute value of a user-input number
*/
float MyAbs(float num) {
  if (num < 0) {
    return -num;
  }
  return num;
}

/*  [47]
    Rounding (not built-in) => Rounding (not built-in)
*/
float GetFractionPart(float num) { return num - int(num); }
int MyRound(float num) {
  if (abs(GetFractionPart(num)) >= .5) {
    if (num > 0)
      return ++num;
    else
      return --num;
  } else
    return num;
}

/*  [48]
    MyFloor (not built-in) => MyFloor (not built-in)
*/
int MyFloor(float num) {
  if (num > 0)
    return int(num);
  else
    return int(--num);
}

/*  [49]
    MyCeil (not built-in) => MyCeil (not built-in)
*/
int MyCeil(float num) {
  if (abs(GetFractionPart(num) > 0)) {
    if (num > 0)
      return int(++num);
    else
      return int(num);
  } else
    return int(num);
}

/*  [50]
    MySqrt (not built-in) => MySqrt (not built-in)
*/
float MySqrt(float num) { return pow(num, 0.5); }
}  // namespace Solutions