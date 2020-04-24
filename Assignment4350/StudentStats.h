#include <iostream>
using namespace std;

class StudentStats{
public:
  StudentStats();
  StudentStats(int waitTime, int numOfTicks);
  ~StudentStats();
  int getWait();

  int totalWaitTime;
  int ticks;
  int wait;
  int getTicks();
  int getTotalWait();
};
