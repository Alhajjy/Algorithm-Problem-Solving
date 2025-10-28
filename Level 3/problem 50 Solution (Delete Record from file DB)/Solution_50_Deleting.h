#pragma once
#include <cstdlib>   // For general utilities (rand(), srand(), exit(), etc.)
#include <fstream>   // For file stream operations (ifstream, ofstream)
#include <iomanip>   // For output formatting (setw, setprecision, etc.)
#include <iostream>  // For standard input/output (cin, cout)
#include <string>    // For string class and string operations
#include <vector>    // For dynamic array implementation (vector container)

using namespace std;
namespace Solution_50_Deleting {

const string ClientsFileName = "Records_DB.txt";
string Seperator = "#//#";

void PauseProgram() {
  cout << "\nPress Enter to exit...";
  cin.ignore();
  cin.get();
}
struct sClient {
  string AccountNumber;
  string PinCode;
  string Name;
  string Phone;
  double AccountBalance;
};

string ReadString(string Message) {
  string S1;
  cout << Message << endl;
  getline(cin, S1);
  return S1;
}

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

string PrintRecordInLine(sClient Account) {
  string ClientRecord;
  ClientRecord += Account.AccountNumber + Seperator;
  ClientRecord += Account.PinCode + Seperator;
  ClientRecord += Account.Name + Seperator;
  ClientRecord += Account.Phone + Seperator;
  ClientRecord += to_string(Account.AccountBalance) + "\n";
  return ClientRecord;
}

void AddNewClient(string Payload) {
  fstream MyFile;
  MyFile.open(ClientsFileName, ios::out | ios::app);
  if (MyFile.is_open()) {
    MyFile << Payload;
  }
  MyFile.close();
}
void ClearAllClientsFromFile() {
  fstream MyFile;
  MyFile.open(ClientsFileName, ios::out);
  if (MyFile.is_open()) {
    MyFile << "";
  }
  MyFile.close();
}

void PushNewVersionOfClients(vector<sClient> vClients) {
  ClearAllClientsFromFile();
  for (sClient Client : vClients) {
    AddNewClient(PrintRecordInLine(Client));
  }
  cout << "___________________________________________________________\n";
}

void PrintRecord(sClient Account) {
  cout << "\n\nThe following is the extracted client record:\n";
  cout << "\nAccout Number: " << Account.AccountNumber;
  cout << "\nPin Code : " << Account.PinCode;
  cout << "\nName : " << Account.Name;
  cout << "\nPhone : " << Account.Phone;
  cout << "\nAccount Balance: " << Account.AccountBalance;
}

vector<sClient> DeleteClientByAccountNumber(vector<sClient> vClients) {
  string EnteredNumber = "";
  cout << "Enter an Account Number to Delete.. ";
  cin >> EnteredNumber;
  vector<sClient> NewVClients;
  for (sClient Client : vClients) {
    if (Client.AccountNumber != EnteredNumber) {
      NewVClients.push_back(Client);
    } else {
      cout << "\n========== Deleted Client: ===========:\n";
      PrintRecord(Client);
      cout << "\n======================================:\n";
    }
  }
  return NewVClients;
}

void PrintAllClients(vector<sClient> vClients) {
  for (sClient Client : vClients) {
    PrintRecord(Client);
  }
}
}  // namespace Solution_50_Deleting