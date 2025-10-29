#pragma once
#include <queue>
#include <stack>

#include "clsDate.h"
#include "clsTime.h"

class clsQueueLine {
  struct stTicket {
    string Number;
    string Date;
    string Time;
    int ServeTime;
  };

  queue<stTicket> _MyQueue;
  queue<stTicket> _TempQueue;
  string _Prefix;
  int _TicketsCount;
  int _ServedClients;
  int _MinutesForEachClient;

  void _PrintOneTicket(stTicket Ticket) {
    cout << "\n\t\t-----------------------------" << endl;

    cout << "\n\t\t" << Ticket.Number << endl << endl;

    cout << "\t\t" << Ticket.Date << " - " << Ticket.Time << endl;
    cout << "\t\tWating Clients: " << (_TicketsCount - _ServedClients) << endl;
    cout << "\t\tServe Time In: " << Ticket.ServeTime << " Minutes." << endl;

    cout << "\n\t\t-----------------------------" << endl;
  }

 public:
  clsQueueLine(string Prefix, int MinutesForEachClient) {
    _Prefix = Prefix;
    _TicketsCount = 0;
    _ServedClients = 0;
    _MinutesForEachClient = MinutesForEachClient;
  }

  void IssueTicket() {
    stTicket Ticket;
    clsTime Time;
    clsDate Date = Date.GetSystemDate();
    Ticket.Number = _Prefix + to_string(_TicketsCount);
    Ticket.Date = clsDate::DateToString(Date);
    Ticket.Time = Time.GetTime();
    Ticket.ServeTime = (_TicketsCount * _MinutesForEachClient);

    _TicketsCount++;
    _MyQueue.push(Ticket);
  }

  void PrintInfo() {
    cout << "\n\t\t-----------------------------" << endl;
    cout << "\n\t\t\tQueue Info" << endl;
    cout << "\n\t\t-----------------------------" << endl;

    cout << "\t\tPrefix          = " << _Prefix << endl;
    cout << "\t\tTotal Tickets   = " << _TicketsCount << endl;
    cout << "\t\tServed Clients  = " << _ServedClients << endl;
    cout << "\t\tWaiting Clients = " << (_TicketsCount - _ServedClients)
         << endl;

    cout << "\n\t\t-----------------------------" << endl;
  }

  void PrintTicketsLineLTR() {
    _TempQueue = _MyQueue;

    cout << endl << "\t\t";
    while (!_TempQueue.empty()) {
      cout << _TempQueue.front().Number << " ==> ";
      _TempQueue.pop();
    }
  }

  void PrintTicketsLineRTL() {
    _TempQueue = _MyQueue;
    stack<stTicket> TempStack;

    cout << endl << "\t\t";

    while (!_TempQueue.empty()) {
      TempStack.push(_TempQueue.front());
      _TempQueue.pop();
    }

    while (!TempStack.empty()) {
      cout << TempStack.top().Number << " <== ";
      TempStack.pop();
    }
  }

  void PrintAllTickets() {
    _TempQueue = _MyQueue;

    cout << "\n\n\t\t\t---Tickets---" << endl;
    while (!_TempQueue.empty()) {
      _PrintOneTicket(_TempQueue.front());
      _TempQueue.pop();
    }
  }

  void ServeNextClient() {
    _ServedClients++;
    _TicketsCount;
    _MyQueue.pop();
  }
};