#include <iostream>
#include "StudentStats.h"
using namespace std;

class Window{
public:
  Window();
  Window(StudentStats student);
  ~Window();


  int wait;
  int occupancy = 0;
  int getWait();
  bool isNotEmpty();
  bool isFull();

};
