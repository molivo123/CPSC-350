#include "GenStack.h"
#include <iostream>
#include <fstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;



class Checker{
public:
  Checker();
  ~Checker();
  void numOfDelims(string fileName);
  string getFileName();
  void goToStack();



  string textLine;
  //string fileName = "/Users/matthew/Documents/CPSC_Courses/CPSC-350/Assignment3350/testText.txt";
  char poppedChar;
  char poppedChar2;
  string fileName;
  string checkFile;

};
