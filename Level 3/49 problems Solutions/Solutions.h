#pragma once
#include <iostream> // For standard input/output (cin, cout)
#include <fstream>  // For file stream operations (ifstream, ofstream)
#include <cctype>   // For character handling functions (isalpha, toupper, etc.)
#include <string>   // For string class and string operations
#include <vector>   // For dynamic array implementation (vector container)
#include <cstdlib>  // For general utilities (rand(), srand(), exit(), etc.)
#include <iomanip>  // For output formatting (setw, setprecision, etc.)

using namespace std;
namespace Solutions {

/*  [0]
        ========================
            Shared Functions
        ========================
*/
int RandomNumber(int From, int To) { return rand() % (To - From + 1) + From; }
string ReadString(string Message) {
  string S1;
  cout << Message << endl;
  getline(cin, S1);
  return S1;
}
char ReadChar(string Message = "Enter a Character") {
  char Letter;
  cout << Message << endl;
  cin >> Letter;
  return Letter;
}

/*  [1]
    PrintMatrix => Print a Matrix (Two dimentional array)
*/
void FillMatrixWithRandomNumbers(int x[3][3], int Rows, int Cols) {
  for (int i = 0; i < Rows; i++) {
    for (int j = 0; j < Cols; j++) {
      x[i][j] = RandomNumber(1, 100);
    }
  }
}
void PrintMatrix(int x[3][3], int Rows, int Cols) {
  cout << "\t>>  RANDOM 2 DIMENTIONAL ARRAY 3*3  <<" << endl;
  for (int i = 0; i < Rows; i++) {
    for (int j = 0; j < Cols; j++) {
      cout << setw(3) << x[i][j] << "\t";
    }
    cout << endl;
  }
}

/*  [2]
    SumEachRow => Sum Each Row in the Matrix
*/
void PrintRowSum(int Sum, int Row) {
  cout << "Row " << Row + 1 << " Sum => " << Sum << endl;
}
void SumEachRow(int x[3][3], int Rows, int Cols) {
  int Sum = 0;
  for (int i = 0; i < Rows; i++) {
    for (int j = 0; j < Cols; j++) {
      Sum += x[i][j];
    }
    PrintRowSum(Sum, i);
  }
}
/*  [3]
    SumEachRow 2 => Sum each row and store it in an one dimentional array
*/
int PrintRowSum(int x[3][3], int Cols, int Row, int y[3]) {
  for (short i = 0; i < Cols; i++) {
    y[Row] += x[Row][i];
  }
  return y[Row];
}
void SumEachRow(int x[3][3], int Rows, int Cols, int y[3]) {
  for (int i = 0; i < Rows; i++) {
    cout << "Row " << i + 1 << " Sum => " << PrintRowSum(x, Cols, i, y) << endl;
  }
}

/*  [4]
    ColumnsSum => Sum Each Column and store it in an one dimentional array
*/
int ColSum(int arr[3][3], short Rows, short ColNumber) {
  int Sum = 0;
  for (short i = 0; i <= Rows - 1; i++) {
    Sum += arr[i][ColNumber];
  }
  return Sum;
}
void PrintEachColSum(int arr[3][3], short Rows, short Cols) {
  cout << "\nThe the following are the sum of each col in the matrix :\n"
      ;
  for (short j = 0; j < Cols; j++) {
    cout << "Col " << j + 1 << " Sum = " << ColSum(arr, Rows, j) << endl;
  }
}

/*  [5]
    FillMatrixWithOrderedNumbers => Fill Matrix with Ordered Numbers
*/
int ColSum(int x[3][3], int ColNumber, int Rows, int y[3]) {
  int Sum = 0;
  for (short i = 0; i < Rows; i++) {
    Sum += x[i][ColNumber];
  }
  return Sum;
}
void SumEachCol(int x[3][3], int Rows, int Cols, int y[3]) {
  for (int i = 0; i < Cols; i++) {
    y[i] = ColSum(x, i, Rows, y);
  }
}
void PrintEachColSum(int Cols, int y[3]) {
  for (int i = 0; i < Cols; i++) {
    cout << "Col " << i + 1 << " Sum => " << y[i] << endl;
  }
}

/*  [6]
    PrintTransposedMatrix => Print Previos Matrix Transposed
*/
void FillMatrixWithOrderedNumbers(int x[3][3], int Rows, int Cols) {
  int Counter = 0;
  for (int i = 0; i < Rows; i++) {
    for (int j = 0; j < Cols; j++) {
      Counter++;
      x[i][j] = Counter;
    }
  }
}

/*  [7]
    PrintTransposedMatrix => Print Previos Matrix Transposed
*/
void PrintTransposedMatrix(int x[3][3], int Rows, int Cols) {
  cout << "\t>>  Transposed Martix 3*3  <<" << endl;
  for (int i = 0; i < Rows; i++) {
    for (int j = 0; j < Cols; j++) {
      cout << setw(3) << x[j][i] << "\t";
    }
    cout << endl;
  }
}

/*  [8]
    SumTwoMatrixes => Sum Two Matrixes
*/
void PrintMatrix(int x[3][3], int Rows, int Cols, string Title) {
  cout << "\t>>   " << Title << "  <<" << endl;
  for (int i = 0; i < Rows; i++) {
    for (int j = 0; j < Cols; j++) {
      cout << setw(3) << x[i][j] << "\t";
    }
    cout << endl;
  }
}
void SumTwoMatrixes(int Matrix3[3][3], int x[3][3], int y[3][3], int Rows,
                    int Cols) {
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      Matrix3[i][j] = x[i][j] + y[i][j];
    }
  }
}

/*  [9]
    MiddleRow, Middle Column => Print middle row and middle column of the matrix
*/
void PrintMiddleRow(int x[3][3], int Rows, int Cols) {
  cout << "Middle Row:\n";
  int MiddleRow = Rows / 2;
  for (int i = 0; i < Cols; i++) {
    cout << x[MiddleRow][i] << "\t";
  }
  cout << endl;
}
void PrintMiddleCol(int x[3][3], int Rows, int Cols) {
  cout << "Middle Col:\n";
  int MiddleCol = Cols / 2;
  for (int i = 0; i < Rows; i++) {
    cout << x[i][MiddleCol] << "\t";
  }
  cout << endl;
}

/*  [10]
    SumMatrixNumbers => Sum numbers of the matrix
*/
int SumMatrixNumbers(int x[3][3], int Rows, int Cols) {
  int Counter = 0;
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      Counter += x[i][j];
    }
  }
  return Counter;
}

/*  [11]
    CompareMatrixes => Compare Sum of the Matrixes if Equal or Not
*/
bool CompareMatrixes(int x[3][3], int y[3][3], int Rows, int Cols) {
  int g1 = SumMatrixNumbers(x, Rows, Cols);
  int g2 = SumMatrixNumbers(y, Rows, Cols);
  cout << g1 << " ||| " << g2 << endl;
  return (g1 == g2);
}

/*  [12]
    IsArraysTypical => Checks if arrays completly different
*/
bool IsArraysTypical(int x[3][3], int y[3][3], int Rows, int Cols) {
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      if (x[i][j] == y[i][j]) return 0;
    }
  }
  return 1;
}

/*  [13]
    IsMatrixesIdentity => Checks if a matrix is an identity matrix

*/
bool IsMatrixesIdentity(int x[3][3], int Rows, int Cols) {
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      if (i == j) {
        if (x[i][j] != 1) return 0;
      }
      if (i != j) {
        if (x[i][j] != 0) return 0;
      }
    }
  }
  return 1;
}

/*  [14]
    IsMatrixesScalar => Checks if a matrix is a scalar matrix
*/
bool IsMatrixesScalar(int x[3][3], int Rows, int Cols) {
  int FirstDialElement = x[0][0];
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      if (i == j && x[i][j] != FirstDialElement) {
        return 0;
      }
      if (i != j && x[i][j] != 0) {
        return 0;
      }
    }
  }
  return 1;
}

/*  [15]
    CountNumInMatrix => Checks how many times a number appears in the matrix
*/
int CountNumInMatrix(int x[3][3], int Num, int Rows, int Cols) {
  int Counter = 0;
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      if (x[i][j] == Num) Counter++;
    }
  }
  return Counter;
}

/*  [16]
    IsSparseMatrix => Checks if Matrix is Sparse Matrix
*/
bool IsSparseMatrix(int x[3][3], int Rows, int Cols) {
  int Counter = 0;
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      if (x[i][j] == 0) Counter++;
    }
  }
  return (Counter > Rows * Cols - Counter);
}
/*  [17]
    SearchNumInMatrix => Search Number in Matrix if Exists
*/
bool SearchNumInMatrix(int x[3][3], int Num, int Rows, int Cols) {
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      if (x[i][j] == Num) return 1;
    }
  }
  return 0;
}

/*  [18]
    IntersectedNumbersInMatrixes => Find Intersected Numbers In Matrixes
*/
void IntersectedNumbersInMatrixes(int x[3][3], int y[3][3], int Rows,
                                  int Cols) {
  cout << "Intersected Numbers in Matrixes are:\n";
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      if (SearchNumInMatrix(y, x[i][j], Rows, Cols)) cout << x[i][j] << "\t";
    }
  }
}

/*  [19]
    MinMaxInMatrix => Find Min Number and Maximum number in matrix
*/
int MinInMatrix(int x[3][3], int Rows, int Cols) {
  int MinNum = x[0][0];
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      if (MinNum > x[i][j]) MinNum = x[i][j];
    }
  }
  return MinNum;
}
int MaxInMatrix(int x[3][3], int Rows, int Cols) {
  int MaxNum = x[0][0];
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols; j++) {
      if (MaxNum < x[i][j]) MaxNum = x[i][j];
    }
  }
  return MaxNum;
}
/*  [20]
    IsPalindromeMatrix => Checks if Matrix is Palindrome Matrix
*/
bool IsPalindromeMatrix(int x[3][3], int Rows, int Cols) {
  for (short i = 0; i < Rows; i++) {
    for (short j = 0; j < Cols / 2; j++) {
      if (x[i][j] != x[i][Cols - j - 1]) {
        return 0;
      }
    }
  }
  return 1;
}

/*  [21]
    PrintFibonacciUsingLoop => Print Fibonacci Series using Loop
*/
void PrintFibonacciUsingLoop(int Numbers) {
  int Prev1 = 1;
  int Prev2 = 0;
  int FebNumber = 1;
  for (short i = 0; i < Numbers; i++) {
    cout << FebNumber << endl;
    FebNumber = Prev1 + Prev2;
    Prev2 = Prev1;
    Prev1 = FebNumber;
  }
}

/*  [22]
    PrintFibonacciUsingRecursion => Print Fibonacci Series using Recursion
*/
void PrintFibonacciUsingRecursion(int Times = 0, int Prev1 = 0, int Prev2 = 0) {
  if (Times < 10) {
    int ThisNum = (Prev1 == 0 ? 1 : Prev1) + Prev2;
    cout << ThisNum << endl;
    Prev2 = Prev1;
    Prev1 = ThisNum;
    PrintFibonacciUsingRecursion(Times + 1, Prev1, Prev2);
  }
}

/*  [23]
    PrintFirstLetterOfEachWord => Print First Letter Of Each Word
*/
void PrintFirstLetterOfEachWord() {
  string Text;
  cout << "Write a String\n";
  getline(cin, Text);
  for (int i = 0; i < Text.size(); i++) {
    if (i == 0) cout << Text[0] << endl;
    if (Text[i] == ' ') cout << Text[i + 1] << endl;
  }
}

/*  [24]
    ValidateNumberInRange => VALIDATE NUMBER IN RANGE (18 - 45)
*/
void UppercaseFirstLetterOfEachWord(string S1) {
  bool IsFirstLetter = true;
  cout << "\nUppercase First Charecters of each word..\n";
  for (short i = 0; i < S1.length(); i++) {
    if (S1[i] != ' ' && IsFirstLetter) {
      S1[i] = toupper(S1[i]);
    }
    IsFirstLetter = (S1[i] == ' ' ? true : false);
  }
  cout << S1 << endl;
}

/*  [25]
    LowercaseFirstLetterOfEachWord => Lowercase First Letter Of Each Word
*/
void LowercaseFirstLetterOfEachWord(string S1) {
  bool IsFirstLetter = true;
  cout << "\n Lowercase First Charecters of each word..\n";
  for (short i = 0; i < S1.length(); i++) {
    if (S1[i] != ' ' && IsFirstLetter) {
      S1[i] = tolower(S1[i]);
    }
    IsFirstLetter = (S1[i] == ' ' ? true : false);
  }
  cout << S1 << endl;
}

/*  [26]
    UppercaseAllLetters, LowercaseAllLetters => Uppercase All Letters, Lowercase All Letters
*/
string UppercaseAllLetters(string &S1) {
  for (short i = 0; i < S1.length(); i++) {
    S1[i] = toupper(S1[i]);
  }
  return S1;
}
string LowercaseAllLetters(string &S1) {
  for (short i = 0; i < S1.length(); i++) {
    S1[i] = tolower(S1[i]);
  }
  return S1;
}

/*  [27]
    invertLetter => Toggle uppeer or lower case letter
*/
char invertLetter(char &Letter) {
  if (Letter >= 65 && Letter <= 90) return tolower(Letter);
  if (Letter >= 97 && Letter <= 122) return toupper(Letter);
}


/*  [28]
    invertAllLetters => invert All Letters
*/
string invertAllLetters(string S1) {
  for (short i = 0; i < S1.length(); i++) {
    S1[i] = invertLetter(S1[i]);
  }
  return S1;
}

/*  [29]
    AnlayzString => Anlayz String (Length, upper and lower case letters count)
*/
void AnlayzString(string S) {
  int UpLetter = 0, LwLetter = 0;
  for (short i = 0; i < S.length(); i++) {
    if ((S[i] >= 65 && S[i] <= 90) || (S[i] >= 97 && S[i] <= 122))
      isupper(S[i]) ? UpLetter++ : LwLetter++;
  }
  cout << "String Length is: " << S.length() << endl;
  cout << "Uppercase letters count: " << UpLetter << endl;
  cout << "Lowercase letters count: " << LwLetter << endl;
}

/*  [30]
    CountLetterInText => Count Letter In Text (How many times repeated)
*/
int CountLetterInText(string S, char Letter) {
  int Counter = 0;
  for (short i = 0; i < S.length(); i++) {
    if (S[i] == Letter) Counter++;
  }
  return Counter;
}

/*  [31]
    CountLetterInTextMatchCase => Count Letter In Text Match Case
*/
int CountLetterInTextMatchCase(string S, char Letter, bool MatchCase = true) {
  int Counter = 0;
  for (short i = 0; i < S.length(); i++) {
    if (MatchCase) {
      if (S[i] == Letter) Counter++;
    } else {
      if (tolower(S[i]) == tolower(Letter)) Counter++;
    }
  }
  return Counter;
}
/*  [32]
    isVowel => Check if letter is vowel
*/
bool isVowel(char Letter) {
  Letter = tolower(Letter);
  return ((Letter == 'a') || (Letter == 'u') || (Letter == 'o') ||
          (Letter == 'e') || (Letter == 'i'));
}

/*  [33]
    CountVowel => Count Vowel Letters in the string
*/
int CountVowel(string S) {
  int Counter = 0;
  for (int i = 0; i < S.length(); i++) {
    if (isVowel(S[i])) Counter++;
  }
  return Counter;
}

/*  [34]
    PrintVowelinString => Print Vowel letters excists in String
*/
void PrintVowelinString(string S) {
  for (int i = 0; i < S.length(); i++) {
    if (isVowel(S[i])) {
      cout << S[i] << endl;
    }
  }
}

/*  [35]
    PrintEachWordInString => Seperate words in the string
*/
// method 1
void SeperatateWords(string S) {
  for (int i = 0; i < S.length(); i++) {
    if (S[i] == ' ') {
      cout << endl;
    } else {
      cout << S[i];
    }
  }
}
// method 2
void SeperatateWords2(string S) {
  string word = "";
  for (int i = 0; i < S.length(); i++) {
    if (S[i] == ' ') {
      cout << word << endl;
      word = "";
    } else if (i + 1 == S.length()) {
      word = word + S[i];
      cout << word << endl;
    } else {
      word = word + S[i];
    }
  }
}
// method 3
void PrintEachWordInString(string S) {
  string delim = " ";
  short pos = 0;
  string sWord;
  while ((pos = S.find(delim)) != std::string::npos) {
    sWord = S.substr(0, pos);
    if (sWord != "") cout << sWord << endl;
    S.erase(0, pos + delim.length());
  }
  if (S != "") cout << S << endl;
}
/*  [36]
    CountWordsInString => Count Words In String
*/
int CountWordsInString(string S) {
  string delim = " ", sWord;
  int pos = 0, counter = 0;
  while ((pos = S.find(delim)) != std::string::npos) {
    sWord = S.substr(0, pos);
    if (sWord != "") counter++;
    S.erase(0, pos + delim.length());
  }
  if (S != "") counter++;
  return counter;
}

/*  [37]
    SplitString => Split String into vector of strings
*/
vector<string> SplitString(string Text, string delim) {
  vector<string> vWords;
  int pos = 0;
  string sWord;
  while ((pos = Text.find(delim)) != std::string::npos) {
    sWord = Text.substr(0, pos);
    if (sWord != "") vWords.push_back(sWord);
    Text.erase(0, pos + delim.length());
  }
  if (Text != "") vWords.push_back(Text);
  return vWords;
}
void PrintVectorOfStrings(vector<string> vWords) {
  cout << "The following are the splitted words:\n";
  for (short i = 0; i < vWords.size(); i++) {
    cout << vWords[i] << endl;
  }
}

/*  [38]
    CheckPrime => check if number is prime
*/
string TrimLeft(string s) {
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != ' ') return s.substr(i, s.length() - 1);
  }
  return "";
}
string TrimRight(string s) {
  for (int i = s.length() - 1; i >= 0; i--) {
    if (s[i] != ' ') return s.substr(0, i + 1);
  }
  return "";
}
string TrimString(string s) { return TrimRight(TrimLeft(s)); }

/*  [39]
    JoinVectorElementsInOneString => Join Vector Elements In One String
*/
vector <string> FillVectorWithStrings(vector<string> vTexts) {
  bool again = 0;
  do {
    vTexts.push_back(ReadString("Add Text"));
    cout << "Want to add more Texts? (0, 1)" << endl;
    cin >> again;
    cin.ignore();
  } while (again == 1);
  return vTexts;
}
string JoinVectorElementsInOneString(vector<string> vTexts, string Seperator) {
  string Text = "";
  for (string e : vTexts) {
    if (Text != "")
      Text = Text + Seperator + e;
    else
      Text = e;
  }
  return "Joined strings => |" + Text + "|";
}

/*  [40]
    JoinString => Join String
*/
string JoinString(vector<string> vTexts, string Seperator) {
  string Text = "";
  for (string e : vTexts) {
    Text = Text + e + Seperator;
  }
  return "Joined strings => |" +
         Text.substr(0, Text.length() - Seperator.length()) + "|";
}
string JoinString2(string aTexts[5], short Length, string Seperator) {
  string Text = "";
  for (short i = 0; i < Length; i++) {
    Text = Text + aTexts[i] + Seperator;
  }
  return "Joined strings => |" +
         Text.substr(0, Text.length() - Seperator.length()) + "|";
}

/*  [41]
    ReverseStringWords => join string words in reverse order
*/
string ReverseStringWords(vector<string> vStrings) {
  string Text = "";
  vector<string>::iterator iter = vStrings.end();
  while (iter != vStrings.begin()) {
    --iter;
    Text += *iter + " ";
  }
  Text.substr(0, Text.length() - 1);
  return Text;
}

/*  [42]
    ReplaceWordInStringUsingBuiltInFunction => Replace Word In String Using Built In Function
*/
string ReplaceWordInStringUsingBuiltInFunction(string Text,
                                               string StringToReplace,
                                               string ReplaceTo) {
  short pos = Text.find(StringToReplace);
  while (pos != std::string::npos) {
    Text = Text.replace(pos, StringToReplace.length(), ReplaceTo);
    pos = Text.find(StringToReplace);
  }
  return Text;
}

/*  [43]
    CalcDetails => Convert given seconds as [Days, Hours, Minutes, Seconds]
*/
string ReplaceWordInStringUsingCustomFunction(string Text,
                                              string StringToReplace,
                                              string ReplaceTo,
                                              bool MatchCase = true) {
  vector<string> vText = SplitString(Text, " ");
  for (string &s : vText) {
    if (!MatchCase) {
      if (s == StringToReplace) s = ReplaceTo;
    } else {
      if (LowercaseAllLetters(s) == LowercaseAllLetters(StringToReplace))
        s = ReplaceTo;
    }
  }
  return JoinString(vText, " ");
}

/*  [44]
    WhichDay => write day name getting its number
*/
string RemovePunctuationsFromString(string Text) {
  for (int i = 0; i < Text.length(); i++) {
    if (ispunct(Text[i])) Text.replace(i, 1, "");
  }
  return Text;
}
// without replace func
string RemovePunctuationsFromString2(string Text) {
  string CleanText;
  for (int i = 0; i < Text.length(); i++) {
    if (!ispunct(Text[i])) CleanText += Text[i];
  }
  return CleanText;
}

/*  [45]
    AccountRecordLine => Prepare info to save to file db by formatting it in a single line
*/
struct stAccount {
  string AccountNumber;
  string PinCode;
  string Name;
  string Phone;
  int AccountBalance;
};
stAccount ReadAccountData() {
  stAccount Account;
  cout << "Account Number?\n";
  cin >> Account.AccountNumber;
  cout << "Pin Code?\n";
  cin >> Account.PinCode;
  cout << "Name?\n";
  cin >> Account.Name;
  cout << "phone?\n";
  cin >> Account.Phone;
  cout << "Account Balance?\n";
  cin >> Account.AccountBalance;
  return Account;
};
string PrintRecordInLine(stAccount Account, string Seperator) {
  string ClientRecord;
  ClientRecord += Account.AccountNumber + Seperator;
  ClientRecord += Account.PinCode + Seperator;
  ClientRecord += Account.Name + Seperator;
  ClientRecord += Account.Phone + Seperator;
  ClientRecord += to_string(Account.AccountBalance);
  return ClientRecord;
}

/*  [46]
    LineToStructOfRecords => convert string line to structure and deal with it
*/
stAccount LineToStructOfRecords(string Line, string Seperator) {
  stAccount Account;
  int pos = 0, counter = 1;
  string part = "";
  while ((pos = Line.find("#//#")) != std::string::npos) {
    part = Line.substr(0, pos);
    switch (counter) {
      case 1:
        Account.AccountNumber = part;
        break;
      case 2:
        Account.PinCode = part;
        break;
      case 3:
        Account.Name = part;
        break;
      case 4:
        Account.Phone = part;
        break;
      default:
        true;
    }
    counter++;
    Line.erase(0, pos + Seperator.length());
  }
  part = Line;
  Account.AccountBalance = stod(part);
  return Account;
}

//  ============================
//      Deal With File DB
//  ============================

/*  [47]
    AddNewClient => Add New Client Record to File DB
*/
bool AddNewClient(string Payload, string Path) {
  fstream MyFile;
  MyFile.open(Path, ios::out | ios::app);

  if (MyFile.is_open()) {
    MyFile << Payload;
  }
  MyFile.close();
  return 1;
}
void AddClients() {
  bool again = 1;
  while (again) {
    system("cls");
    AddNewClient(PrintRecordInLine(ReadAccountData(), "__||__"), "Records_DB.txt");
    cout << "Client Record Saved Successfully\n";
    cout << "Do you want to add another client? (1, 0): ";
    cin >> again;
  }
  cout << "___________________________________________________________\n";
}

/*  [48]
    ShowClients => Show Clients from File DB
*/
string Seperator = "#//#";
string Path = "Records_DB.txt";
void HandleTableHeader() {
  cout << setw(30) << "Clients:\n";
  cout << "____________________________________________________________________"
          "___________________\n";
  cout << setw(15) << "Account Number" << " | " << setw(10) << "Pin Code"
       << " | " << setw(20) << "Name" << " | " << setw(13) << "Phone" << " | "
       << setw(5) << "Account Balance" << endl;
  cout << "____________________________________________________________________"
          "___________________\n";
}
void HandleLineContent(string Line) {
  vector<string> vWords = SplitString(Line, Seperator);
  cout << setw(15) << vWords[0] << " | " << setw(10) << vWords[1] << " | "
       << setw(20) << vWords[2] << " | " << setw(13) << vWords[3] << " | "
       << setw(5) << vWords[4] << endl;
}
void ShowClients() {
  fstream MyFile;
  MyFile.open(Path, ios::in);
  if (MyFile.is_open()) {
    string line;
    HandleTableHeader();
    while (getline(MyFile, line)) {
      HandleLineContent(line);
    }
  } else {
    cout << "Error opening file." << endl;
  }
  MyFile.close();
}

/*  [49]
    FindClientByAccountNumber => Find and Extract Record from File DB by Account Number
*/
const string ClientsFileName = "Records_DB.txt";
struct sClient {
  string AccountNumber;
  string PinCode;
  string Name;
  string Phone;
  double AccountBalance;
};
sClient ConverLineToRecord(string Line) {
  sClient Account;
  vector<string> vAccount;
  vAccount = SplitString(Line, Seperator);
  Account.AccountNumber = vAccount[0];
  Account.PinCode = vAccount[1];
  Account.Name = vAccount[2];
  Account.Phone = vAccount[3];
  Account.AccountBalance = stod(vAccount[4]);
  return Account;
}
vector<sClient> LoadClientsDataFromFile(string FileName) {
  vector<sClient> vClients;
  fstream MyFile;
  MyFile.open(FileName, ios::in);
  if (MyFile.is_open()) {
    string line;
    sClient Client;
    while (getline(MyFile, line)) {
      Client = ConverLineToRecord(line);
      vClients.push_back(Client);
    }
    MyFile.close();
  }
  return vClients;
}
void PrintRecord(sClient Account) {
  cout << "\n\nThe following is the extracted client record:\n";
  cout << "\nAccout Number: " << Account.AccountNumber;
  cout << "\nPin Code : " << Account.PinCode;
  cout << "\nName : " << Account.Name;
  cout << "\nPhone : " << Account.Phone;
  cout << "\nAccount Balance: " << Account.AccountBalance;
  cout << "\n___________________________________________________________\n";
}
bool FindClientByAccountNumber(vector<sClient> vClients, string EnteredNumber) {
  for (sClient Client : vClients) {
    if (Client.AccountNumber == EnteredNumber) {
      PrintRecord(Client);
      return 1;
    }
  }
  cout << "Client with account number \"" << EnteredNumber << "\" Not Found!\n";
  return 0;
}
};