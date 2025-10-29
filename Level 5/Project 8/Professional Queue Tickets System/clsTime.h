#pragma warning(disable : 4996)
#pragma once
#include <ctime>
#include <iostream>
using namespace std;

class clsTime {
 public:
  struct stDateTime {
    int tm_sec;   // seconds of minutes from 0 to 61
    int tm_min;   // minutes of hour from 0 to 59
    int tm_hour;  // hours of day from 0 to 24
  };

  stDateTime DateTime;

  clsTime() {
    time_t t = time(0);  // get time now
    tm* now = localtime(&t);

    DateTime.tm_sec = now->tm_sec;
    DateTime.tm_min = now->tm_min;
    DateTime.tm_hour = now->tm_hour;
  }

  string GetTime() {
    return to_string(DateTime.tm_hour) + ":" + to_string(DateTime.tm_min) +
           ":" + to_string(DateTime.tm_sec);
  }
};