#include <iostream>

#include "Solutions.h"
using namespace Solutions;

int main() {
  // =============================
  //        Solutions Usage
  // =============================

  /* ========== (1) ========== */
  // PrintMultiplicationTable();

  /* ========== (2) ========== */
  // PrintPrimeNumbers(ReadPozitifNumber("Enter a Number to find Prime Numbers
  // less then your Number!\n"));

  /* ========== (3) ========== */
  // PrintResult(CheckPerfect(ReadPozitifNumber("Enter num\n")));

  /* ========== (4) ========== */
  // FindPerfectNumbers(ReadPozitifNumber("Enter Num!"));

  /* ========== (5) ========== */
  // AccessDigits(ReadPozitifNumber("enter num"));

  /* ========== (6) ========== */
  // cout << "\nSum Of Digits = "
  //      << SumOfDigits(ReadPozitifNumber("Please enter a positive number?"))
  //      << endl;

  /* ========== (7) ========== */
  // ReverseNumber(ReadPozitifNumber("enter num"));

  /* ========== (8) ========== */
  // int Number = ReadPozitifNumber("enter num");
  // short Digit = ReadPozitifNumber("enter digit to see frequency");
  // DigitFrequency(Number, Digit);

  /* ========== (9) ========== */
  // int Number = ReadPozitifNumber("Please enter the a number?");
  // PrintAllDigitsFrequencey(Number);

  /* ========== (10) ========== */
  // PrintDigits(GetReversedNumber(ReadPozitifNumber("enter num")));

  /* ========== (11) ========== */
  // IsPalindrome(ReadPozitifNumber("Enter Num"));

  /* ========== (12) ========== */
  // PrintInvertedNumberPattern(ReadPozitifNumber("Enter Num"));

  /* ========== (13) ========== */
  // PrintNumberPattern(ReadPozitifNumber("Enter Num"));

  /* ========== (14) ========== */
  // PrintInvertedLetterPattern(ReadPozitifNumber("Enter Num"));

  /* ========== (15) ========== */
  // PrintLetterPattern(ReadPozitifNumber("Enter Num"));

  /* ========== (16) ========== */
  // PrintWordsFromAAAtoZZZ();

  /* ========== (17) ========== */
  // GuessPassword(ReadPassword("enter the true password (A-Z) (only 3
  // charecters)"));

  /* ========== (18) ========== */
  // const short EncriptionKey = 2;
  // Encript(ReadText("enter a text to encrypt!"), EncriptionKey);
  // Decript(ReadText("enter a text to encrypt!"), EncriptionKey);

  /* ========== (19) ========== */
  // seeds the random number generate in c++, called only once (and in the main
  // function)
  // srand((unsigned)time(NULL));
  // cout << RandomNumber(1, 5) << endl;
  // cout << RandomNumber(1, 5) << endl;
  // cout << RandomNumber(1, 5) << endl;

  /* ========== (20) ========== */
  // srand((unsigned)time(NULL));
  // cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
  // cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
  // cout << GetRandomCharacter(enCharType::SpacialCharacter) << endl;
  // cout << GetRandomCharacter(enCharType::Digit) << endl;

  /* ========== (21) ========== */
  // srand((unsigned)time(NULL));
  // GetCompleteKey();
  // GetCompleteKey();
  // GetCompleteKey();
  // GetCompleteKey();

  /* ========== (22) ========== */
  // int arr[100], Length, Num;
  // ReadArray(arr, Length);
  // PrintArray(arr, Length);
  // int Times = CheckRepeating(arr, Length, Num);
  // cout << Num << " Is Repeated " << Times << " Times";

  /* ========== (23) ========== */
  // srand((unsigned)time(NULL));
  // int arr[100], Length = 100;
  // FillArrayWithRandomNumbers(arr, Length);
  // PrintArray2(arr, Length);

  /* ========== (24) ========== */
  // srand((unsigned)time(NULL));
  // int arr[100], Length;
  // FillArrayWithRandomNumbers(arr, Length);
  // PrintArray2(arr, Length);
  // GetMaxNum(arr, Length);

  /* ========== (25) ========== */
  // srand((unsigned)time(NULL));
  // int arr[100], Length = 10;
  // FillArrayWithRandomNumbers(arr, Length);
  // PrintArray2(arr, Length);
  // GetMinNum(arr, Length);

  /* ========== (26) ========== */
  // srand((unsigned)time(NULL));
  // int arr[100], Length = 10;
  // FillArrayWithRandomNumbers(arr, Length);
  // PrintArray2(arr, Length);
  // cout << "Sum Of Array Numbers is => " << SumArrayNumbers(arr, Length);

  /* ========== (27) ========== */
  // srand((unsigned)time(NULL));
  // int arr[100], Length;
  // FillArrayWithRandomNumbers(arr, Length);
  // PrintArray2(arr, Length);
  // cout << "Average Of Array Numbers is => " << AverageOfArrayNumbers(arr,
  // Length);

  /* ========== (28) ========== */
  // srand((unsigned)time(NULL));
  // int arr[100], Length, arr2[100];
  // FillArrayWithRandomNumbers(arr, Length);
  // PrintArray2(arr, Length);
  // CopyArr1ToArr2(arr, Length, arr2);

  /* ========== (29) ========== */
  // srand((unsigned)time(NULL));
  // int arr[100], Length, arr2[100], Length2;
  // FillArrayWithRandomNumbers(arr, Length);
  // PrintArray2(arr, Length);
  // CopyPrimeNumbersInArr1ToArr2(arr, Length, arr2, Length2);
  // PrintSecondArray(arr2, Length2);

  /* ========== (30) ========== */
  // srand((unsigned)time(NULL));
  // int arr[100], Length, arr2[100], Length2, arr3[100], Length3;
  // FillArrayWithRandomNumbers(arr, Length);
  // FillArrayWithRandomNumbers(arr2, Length2);
  // Sum2Arrays(arr, Length, arr2, Length2, arr3, Length3);
  // cout << "1 => ";
  // PrintArray2(arr, Length);
  // cout << "2 => ";
  // PrintArray2(arr2, Length2);
  // cout << "3 => ";
  // PrintArray2(arr3, Length3);

  /* ========== (31) ========== */
  // srand((unsigned)time(NULL));
  // int arr[100];
  // int arrLength = ReadPozitifNumber("Enter number of elements: \n");
  // FillArrayWith1ToN(arr, arrLength);
  // cout << "\nArray elements before shuffle:\n";
  // PrintArray2(arr, arrLength);
  // ShuffleArray(arr, arrLength);
  // cout << "\nArray elements after shuffle:\n";
  // PrintArray2(arr, arrLength);

  /* ========== (32) ========== */
  // srand((unsigned)time(NULL));
  // int arr[100], arr2[100];
  // int arrLength;

  // FillArrayWithRandomNumbers(arr, arrLength);
  // PrintArray2(arr, arrLength);
  // CopyArrayInReverseOrder(arr, arr2, arrLength);
  // PrintArray2(arr2, arrLength);

  /* ========== (33) ========== */
  // srand((unsigned)time(NULL));
  // string arr[100];
  // int arrLength = ReadPozitifNumber("Enter number of keys: \n");
  // FillArrayWithKeys(arr, arrLength);
  // PrintKeysInArray(arr, arrLength);

  /* ========== (34) ========== */
  //srand((unsigned)time(NULL));
  //int arr[100];
  //int arrLength;
  //FillArrayWithRandomNumbers(arr, arrLength);
  //PrintArray2(arr, arrLength);
  //int NumberToSearch = ReadPozitifNumber("Enter number to search: \n");
  //SearchNumber(arr, arrLength, NumberToSearch);

  /* ========== (35) ========== */
  //srand((unsigned)time(NULL));
  //int arr[100];
  //int arrLength;
  //FillArrayWithRandomNumbers(arr, arrLength);
  //PrintArray2(arr, arrLength);
  //int NumberToSearch = ReadPozitifNumber("Enter number to search: \n");
  //PrintResultOf_SearchNumber_boolean(
  //    SearchNumber_boolean(arr, arrLength, NumberToSearch));

  /* ========== (36) ========== */
  //int arr[100], CurrentLength = 0;
  //bool TakeNumber = true;
  //do {
  //  AddNumToArray(arr, ReadNumber(), CurrentLength);
  //} while (WantAddMoreNumbers(TakeNumber));
  //cout << "Array Length: " << CurrentLength << endl;
  //PrintArray2(arr, CurrentLength);

  /* ========== (37) ========== */
  //srand((unsigned)time(NULL));
  //int arr[100], arr2[100], Length = 0, Length2 = 0;
  //FillArrayWithRandomNumbers(arr, Length);
  //CopyElementsToArr2(arr, arr2, Length, Length2);
  //cout << "Array 1 Length: " << Length << endl;
  //PrintArray2(arr, Length);
  //cout << "Array 2 Length: " << Length2 << endl;
  //PrintArray2(arr2, Length2);
  /* ========== (38) ========== */
  //srand((unsigned)time(NULL));
  //int arr[100], arr2[100], Length = 0, Length2 = 0;
  //FillArrayWithRandomNumbers(arr, Length);
  //CopyOddNumsToArr2(arr, arr2, Length, Length2);
  //cout << "Array 1 Length: " << Length << endl;
  //PrintArray2(arr, Length);
  //cout << "Array 2 Length: " << Length2 << endl;
  //PrintArray2(arr2, Length2);

  /* ========== (39) ========== */
  //srand((unsigned)time(NULL));
  //int arr[100], arr2[100], Length = 0, Length2 = 0;
  //FillArrayWithRandomNumbers(arr, Length);
  //CopyPrimeNums(arr, arr2, Length, Length2);
  //cout << "Array 1 Length: " << Length << endl;
  //PrintArray2(arr, Length);
  //cout << "Array of Prime Numbers Length: " << Length2 << endl;
  //PrintArray2(arr2, Length2);

  /* ========== (40) ========== */
  //int arr[100], arr2[100], Length = 0, Length2 = 0;
  //InputUserNumbersInArray(arr, Length);
  //CopyDestinctNums(arr, arr2, Length, Length2);
  //cout << "Array 1 Length: " << Length << endl;
  //PrintArray2(arr, Length);
  //cout << "Distinct Numbers array Length: " << Length2 << endl;
  //PrintArray2(arr2, Length2);

  /* ========== (41) ========== */
  //int arr[100], Length = 0;
  //FillArray(arr, Length);
  //PrintArray2(arr, Length);
  //if (IsArrayPalindrome(arr, Length))
  //  cout << "This array is palindrome!";
  //else
  //  cout << "This array is not palindrome!";

  /* ========== (42) ========== */
  //int arr[100], Length = 0;
  //FillArray2(arr, Length);
  //PrintArray2(arr, Length);
  //cout << "Odd Numbers in array is: " << HowManyOddNumsInArray(arr, Length);
  
  /* ========== (43) ========== */
  //int arr[100], Length = 0;
  //FillArray2(arr, Length);
  //PrintArray2(arr, Length);
  //cout << "Odd Numbers in array is: " << HowManyEvenNumsInArray(arr, Length);
  
  /* ========== (44) ========== */
  //srand((unsigned)time(NULL));
  //int arr[100], Length = 0;
  //FillArrayWithRandomNumbers(arr, Length);
  //PrintArray2(arr, Length);
  //cout << "Pozitif Numbers in array is: " << PozitifNumCount(arr, Length);

  /* ========== (45) ========== */
  //srand((unsigned)time(NULL));
  //int arr[100], Length = 0;
  //FillArrayWithRandomNumbers(arr, Length);
  //PrintArray2(arr, Length);
  //cout << "Negative Numbers in array is: " << NegatifNumCount(arr, Length);

  /* ========== (46) ========== */
  //float num = ReadNumber();
  //cout << "my abs function: " << MyAbs(num) << endl;
  //cout << "c++ abs function: " << abs(num) << endl;

  /* ========== (47) ========== */
  //float num = ReadFloatNumber();
  //cout << "my Round function: " << MyRound(num) << endl;
  //cout << "c++ Round function: " << round(num) << endl;

  /* ========== (48) ========== */
  //float num = ReadFloatNumber();
  //cout << "my floor function: " << MyFloor(num) << endl;
  //cout << "c++ floor function: " << floor(num) << endl;

  /* ========== (49) ========== */
  //float num = ReadFloatNumber();
  //cout << "my ceil function: " << MyCeil(num) << endl;
  //cout << "c++ ceil function: " << ceil(num) << endl;

  /* ========== (50) ========== */
  //float num = ReadFloatNumber();
  //cout << "my sqrt function: " << MySqrt(num) << endl;
  //cout << "c++ sqrt function: " << sqrt(num) << endl;

  system("pause>0");
}
