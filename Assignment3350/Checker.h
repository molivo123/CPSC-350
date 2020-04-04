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
  char poppedChar;
  char poppedChar2;
  string fileName;
  string checkFile;

};
