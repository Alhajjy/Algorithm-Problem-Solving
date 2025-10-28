#include <iostream>
#include <cstdlib>  // For general utilities (rand(), srand(), exit(), etc.)

#include "Solutions.h"

using namespace Solutions;
using namespace std;

int main() {
  // =============================
  //        Solutions Usage
  // =============================

  /* ========== (1) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3);

  /* ========== (2) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3);
  //SumEachRow(x, 3, 3);

  /* ========== (3) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3];
  //int y[3] = {0, 0, 0};
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3);
  //SumEachRow(x, 3, 3, y);

  /* ========== (4) ========== */
  //srand((unsigned)time(NULL));
  //int arr[3][3];
  //FillMatrixWithRandomNumbers(arr, 3, 3);
  //cout << "\nThe following is a 3x3 random matrix :\n ";
  //PrintMatrix(arr, 3, 3);
  //PrintEachColSum(arr, 3, 3);

  /* ========== (5) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3];
  //int y[3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3);
  //SumEachCol(x, 3, 3, y);
  //PrintEachColSum(3, y);

  /* ========== (6) ========== */
  //int x[3][3];
  //FillMatrixWithOrderedNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3);

  /* ========== (7) ========== */
  //int x[3][3];
  //FillMatrixWithOrderedNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3);
  //PrintTransposedMatrix(x, 3, 3);

  /* ========== (8) ========== */
  //int x[3][3], y[3][3], Matrix3[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //FillMatrixWithRandomNumbers(y, 3, 3);
  //SumTwoMatrixes(Matrix3, x, y, 3, 3);
  //PrintMatrix(x, 3, 3, "First Matrix");
  //PrintMatrix(y, 3, 3, "Second Matrix");
  //PrintMatrix(Matrix3, 3, 3, "Summed Matrix");


  /* ========== (9) ========== */
  //int x[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3, "Matrix");
  //PrintMiddleRow(x, 3, 3);
  //PrintMiddleCol(x, 3, 3);

  /* ========== (10) ========== */
  //int x[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3, "Matrix");
  //cout << "Sum of Matrix is: " << SumMatrixNumbers(x, 3, 3);

  /* ========== (11) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3], y[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //FillMatrixWithRandomNumbers(y, 3, 3);
  //PrintMatrix(x, 3, 3, "Matrix 1");
  //PrintMatrix(y, 3, 3, "Matrix 2");
  //if (CompareMatrixes(x, y, 3, 3))
  //  cout << "Matrixes are Equal";
  //else
  //  cout << "Matrixes are Not Equal";

  /* ========== (12) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3], y[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //FillMatrixWithRandomNumbers(y, 3, 3);
  //PrintMatrix(x, 3, 3, "Matrix 1");
  //PrintMatrix(y, 3, 3, "Matrix 2");
  //if (IsArraysTypical(x, y, 3, 3))
  //  cout << "Matrixes are Typical";
  //else
  //  cout << "Matrixes are Not Typical";

  /* ========== (13) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3, "Matrix 1");
  //if (IsMatrixesIdentity(x, 3, 3))
  //  cout << "Matrixes are Identity";
  //else
  //  cout << "Matrixes are Not Identity";

  /* ========== (14) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3, "Matrix 1");
  //if (IsMatrixesScalar(x, 3, 3))
  //  cout << "Matrixes are Scalar";
  //else
  //  cout << "Matrixes are Not Scalar";

  /* ========== (15) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3], Num;
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3, "Matrix 1");
  //cout << "Enter Number to Count?";
  //cin >> Num;
  //cout << "The Number Repeated " << CountNumInMatrix(x, Num, 3, 3) << " Times" << endl;

  /* ========== (16) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3, "Matrix 1");
  //if (IsSparseMatrix(x, 3, 3))
  //  cout << "Matrix is sparse";
  //else
  //  cout << "Matrix is not sparse";

  /* ========== (17) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3], Num;
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3, "Matrix 1");
  //cout << "Enter Number to search in matrix?";
  //cin >> Num;
  //if (SearchNumInMatrix(x, Num, 3, 3))
  //  cout << "Number is exist";
  //else
  //  cout << "Number is not exist";

  /* ========== (18) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3], y[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //FillMatrixWithRandomNumbers(y, 3, 3);
  //PrintMatrix(x, 3, 3, "Matrix 1");
  //PrintMatrix(y, 3, 3, "Matrix 2");
  //IntersectedNumbersInMatrixes(x, y, 3, 3);

  /* ========== (19) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3];
  //FillMatrixWithRandomNumbers(x, 3, 3);
  //PrintMatrix(x, 3, 3, "Matrix 1");
  //cout << MinInMatrix(x, 3, 3) << endl;
  //cout << MaxInMatrix(x, 3, 3) << endl;

  /* ========== (20) ========== */
  //srand((unsigned)time(NULL));
  //int x[3][3] = {{1, 0, 1}, {1, 5, 1}, {2, 7, 2}};
  //PrintMatrix(x, 3, 3, "Matrix 1");
  //if (IsPalindromeMatrix(x, 3, 3))
  //  cout << "Matrix is Palindrome";
  //else
  //  cout << "Matrix is not Palindrome";

  /* ========== (21) ========== */
  //PrintFibonacciUsingLoop(10);

  /* ========== (22) ========== */
  //PrintFibonacciUsingRecursion();

  /* ========== (23) ========== */
  //PrintFirstLetterOfEachWord();

  /* ========== (24) ========== */
  //UppercaseFirstLetterOfEachWord(ReadString("Enter a Text!"));

  /* ========== (25) ========== */
  //LowercaseFirstLetterOfEachWord(ReadString("Enter a Text!"));

  /* ========== (26) ========== */
  //string Text = ReadString("Enter a Text");
  //cout << "\nUpper:\n";
  //cout << UppercaseAllLetters(Text);
  //cout << "\nLower:\n";
  //cout << LowercaseAllLetters(Text);

  /* ========== (27) ========== */
  //char Letter = ReadChar("Enter a charecter");
  //cout << "\ninverted letter:\n";
  //cout << invertLetter(Letter);

  /* ========== (28) ========== */
  //cout << invertAllLetters(ReadString("Enter a text"));

  /* ========== (29) ========== */
  //AnlayzString(ReadString("Enter a text"));

  /* ========== (30) ========== */
  //string Text = ReadString("Enter a text");
  //char Letter = ReadChar("Enter a Character");
  //cout << "'" << Letter << "' Count is => " << CountLetterInText(Text, Letter) << endl;

  /* ========== (31) ========== */
  //string Text = ReadString("Enter a text");
  //char Letter = ReadChar("Enter a Character");
  //cout << "'" << Letter << "' Count is => " << CountLetterInText(Text, Letter)
  //     << endl;
  //cout << "'" << Letter << "' or '" << invertLetter(Letter) << "' Count is => "
  //     << CountLetterInTextMatchCase(Text, Letter, false) << endl;

  /* ========== (32) ========== */
  //char Letter = ReadChar();
  //if (isVowel(Letter))
  //  cout << "Yes, Letter '" << Letter << "' is Vowel";
  //else
  //  cout << "No, Letter '" << Letter << "' is Not Vowel";

  /* ========== (33) ========== */
  //string Text = ReadString("Enter a text");
  //cout << "Vowel Letters Count is: " << CountVowel(Text);

  /* ========== (34) ========== */
  //string Text = ReadString("Enter a text");
  //PrintVowelinString(Text);

  /* ========== (35) ========== */
  // // method 1
  //SeperatateWords(ReadString("Enter a text"));
  // // method 2
  //SeperatateWords2(ReadString("Enter a text"));
  // // method 3
  //PrintEachWordInString(ReadString("Enter a text"));

  /* ========== (36) ========== */
  //CountWordsInString(ReadString("Enter a text"));

  /* ========== (37) ========== */
  //string delimer = " ";
  //PrintVectorOfStrings(SplitString(ReadString("Enter a text"), delimer));

  /* ========== (38) ========== */
  //string Text = ReadString("Enter a text");
  //cout << "Trim Left =>   |" << TrimLeft(Text) << "|" << endl;
  //cout << "Trim Right =>   |" << TrimRight(Text) << "|" << endl;
  //cout << "Trim Left & Right =>   |" << TrimString(Text) << "|" << endl;

  /* ========== (39) ========== */
  //vector<string> vTexts;
  //cout << JoinVectorElementsInOneString(FillVectorWithStrings(vTexts), " ----- ");

  /* ========== (40) ========== */
  //vector<string> vTexts = {"v one", "v two", "v three", "v four", "v five"};
  //string aTexts[5] = {"a one", "a two", "a three", "a four", "a five"};
  //cout << JoinString(vTexts, " ----- ") << endl;
  //cout << JoinString2(aTexts, 5, " ----- ") << endl;

  /* ========== (41) ========== */
  //cout << "Reversed String:\n"
  //     << ReverseStringWords({"one", "two", "three", "four", "Five"});

  ///* ========== (42) ========== */
  //string Text = "Welcome to Jordan, Jordan is nice Place!",
  //       StringToReplace = "Jordan", ReplaceTo = "USA";
  //cout << "String with replaced words:\n"
  //     << ReplaceWordInStringUsingBuiltInFunction(Text, StringToReplace, ReplaceTo);

  /* ========== (43) ========== */
  //string Text = "Welcome to Jordan, jordan is nice Place!",
  //       StringToReplace = "Jordan", ReplaceTo = "USA";
  //cout << "String with replaced words (Case Sensitive):\n"
  //     << ReplaceWordInStringUsingCustomFunction(Text, StringToReplace,
  //                                               ReplaceTo)
  //     << endl;
  //cout << "String with replaced words:\n"
  //     << ReplaceWordInStringUsingCustomFunction(Text, StringToReplace,
  //                                               ReplaceTo, false)
  //     << endl;

  /* ========== (44) ========== */
  //string Text = "Welcome to Jordan, jordan is nice Place!",
  //       StringToReplace = "Jordan", ReplaceTo = "USA";
  //cout << RemovePunctuationsFromString(Text);

  /* ========== (45) ========== */
  //cout << "Client Record for Saving is:\n"
  //     << PrintRecordInLine(ReadAccountData(), "#//#");

  /* ========== (46) ========== */
  //string Record = "A345#//#HB88HOHvg87`#//#Ahmad Sami#//#+534932#//#5780";
  //string Seperator = "#//#";
  //cout << "Client Record for Saving is:\n"
  //     << PrintRecordInLine(LineToStructOfRecords(Record, Seperator),
  //                          Seperator);

  /* ========== (47) ========== */
  //AddClients();

  /* ========== (48) ========== */
  //ShowClients();

  /* ========== (49) ========== */
  //string EnteredNumber = "";
  //cout << "Enter an Account Number to Search.. ";
  //cin >> EnteredNumber;
  //vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
  //FindClientByAccountNumber(vClients, EnteredNumber);
  

  /* ========== (END) ========== */
  system("pause>0");
  return 0;
}
