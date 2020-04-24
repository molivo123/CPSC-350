#include <iostream>
#include "StudentStats.h"

using namespace std;

StudentStats::StudentStats(){

}
//overloaded constructor to take in student stats like wait time and num of ticks
StudentStats::StudentStats(int waitTime, int numOfTicks){
  wait = waitTime;
  ticks = numOfTicks;
  totalWaitTime = wait + ticks;

}

StudentStats::~StudentStats(){

}

//gets wait from file
int StudentStats::getWait(){
  return wait;
}

//gets ticks from file
int StudentStats::getTicks(){
  return ticks;
}

//returns total wait
int StudentStats::getTotalWait(){
  return totalWaitTime;
}
