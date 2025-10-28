#include <iostream>

#include "Solution_50_Deleting.h"
using namespace Solution_50_Deleting;
using namespace std;

int main()
{
  /* ========== (50) ========== */
   vector<sClient> vClients = LoadClientsDataFromFile("Records_DB.txt");
   vClients = DeleteClientByAccountNumber(vClients);
   PushNewVersionOfClients(vClients);
   PrintAllClients(vClients);
   PauseProgram();

  system("pause>0");
  return 0;
}
