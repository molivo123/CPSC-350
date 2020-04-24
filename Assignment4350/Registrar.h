#include <iostream>
#include "GenQueue.h"
#include "Window.h"
#include <fstream>
using namespace std;
class Registrar{
public:
  Registrar();
  ~Registrar();
  //num of windows used
  int windows;

  //stores wait time of each student
  Window * arr = NULL;
  int occupied=0;

  void ToLine();

  void sendToWindow();
  typedef GenQueue<StudentStats> StudentQueue;
  //calling genQueue classes to it can be used in the ToLine func
  StudentQueue genQueue;
};
