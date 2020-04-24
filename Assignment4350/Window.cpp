#include <iostream>
#include "Window.h"
using namespace std;
Window::Window(){

}
Window::Window(StudentStats student){
  wait=student.getWait();
  occupancy++;
}
Window::~Window(){

}


int Window::getWait(){
  return wait;
}
bool Window::isNotEmpty(){
  if(occupancy>0){
    return true;
  }
  else{
    return false;
  }
}
bool Window::isFull(){
  if(occupancy==6){
    return true;
  }
  else{
    return false;
  }
}
