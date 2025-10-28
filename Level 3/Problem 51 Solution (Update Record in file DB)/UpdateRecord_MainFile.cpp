#include <iostream>
#include <fstream>  // For file stream operations (ifstream, ofstream)
#include <string>  // For string class and string operations
#include <vector>  // For dynamic array implementation (vector container)

using namespace std;

const string ClientsFileName = "file.txt";
const string Seperator = "__||__";
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
  bool MarkForUpdate = false;
};

string ReadString(string Message) {
  string Input;
  cout << Message;
  getline(cin, Input);
  return Input;
}

vector<string> SplitString(string Text) {
  vector<string> vWords;
  int pos = 0;
  string sWord;
  while ((pos = Text.find(Seperator)) != std::string::npos) {
    sWord = Text.substr(0, pos);
    if (sWord != "") vWords.push_back(sWord);
    Text.erase(0, pos + Seperator.length());
  }
  if (Text != "") vWords.push_back(Text);
  return vWords;
}

sClient ConverLineToRecord(string Line) {
  sClient Account;
  vector<string> vAccount;
  vAccount = SplitString(Line);
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
  ClientRecord += to_string(Account.AccountBalance);
  return ClientRecord;
}

bool FindClientByAccountNumber(vector<sClient> vClients, string EnteredNumber,
                               sClient &Client) {
  for (sClient C : vClients) {
    if (C.AccountNumber == EnteredNumber) {
      Client = C;
      return 1;
    }
  }
  cout << "Client with account number \"" << EnteredNumber << "\" Not Found!\n";
  return 0;
}

bool MarkClientForUpdateByNumber(vector<sClient> &vClients,
                                 string AccountNumber) {
  for (sClient &Client : vClients) {
    if (Client.AccountNumber == AccountNumber) {
      Client.MarkForUpdate = true;
      return 1;
    }
  }
  return 0;
}

sClient UpdateClientData(string ClientNumber) {
  sClient Account;
  Account.AccountNumber = ClientNumber;
  cout << "Pin Code?  ";
  getline(cin >> ws, Account.PinCode);
  cout << "Name?  ";
  getline(cin, Account.Name);
  cout << "phone?  ";
  getline(cin, Account.Phone);
  cout << "Account Balance?  ";
  cin >> Account.AccountBalance;
  cout << "----------\n";
  return Account;
};

void UpdateAndSaveClientsDataToFile(vector<sClient> vClients) {
  fstream MyFile;
  MyFile.open(ClientsFileName, ios::out);
  if (MyFile.is_open()) {
    string DataLine;
    for (sClient Client : vClients) {
      if (Client.MarkForUpdate == false) {
        DataLine = PrintRecordInLine(Client);
        MyFile << DataLine << endl;
      } else {
        Client.MarkForUpdate = false;
        DataLine = PrintRecordInLine(UpdateClientData(Client.AccountNumber));
        MyFile << DataLine << endl;
      }
    }
  }
}

void PrintRecord(sClient Account) {
  cout << "\n\nThe following is the extracted client record:\n";
  cout << "\nAccout Number: " << Account.AccountNumber;
  cout << "\nPin Code : " << Account.PinCode;
  cout << "\nName : " << Account.Name;
  cout << "\nPhone : " << Account.Phone;
  cout << "\nAccount Balance: " << Account.AccountBalance;
}

bool UpdateClientByAccountNumber(vector<sClient> &vClients,
                                 string AccountNumber) {
  sClient Client;
  bool answer = false;
  if (FindClientByAccountNumber(vClients, AccountNumber, Client)) {
    PrintRecord(Client);
    cout << "\nAre you sure you want to Update this client? (0, 1): ";
    cin >> answer;
    if (answer) {
      MarkClientForUpdateByNumber(vClients, AccountNumber);
      UpdateAndSaveClientsDataToFile(vClients);
      // Refresh Clients
      vClients = LoadClientsDataFromFile(ClientsFileName);
      cout << "Client Updated Successfully";
      return true;
    } else {
      cout << "Ok man :)";
    }
  }
  return false;
}

int main() {
  vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
  string AccountNumber = ReadString("Enter an Account Number to Update.. ");
  UpdateClientByAccountNumber(vClients, AccountNumber);
  PauseProgram();
  return 0;
}