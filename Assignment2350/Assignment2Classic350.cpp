#include "Assignment2350.h"
#include <iostream>

using namespace std;
Classic::Classic(){
  int neighborCounter = 0;
  int width = 0;
  int length = 0;

}
Classic::~Classic(){

}

//making gameboard
void Classic::startClassic(int &length6, int &width6){
  GameBoard gameboard;
  length = length6;
  width = width6;

  char ** arr = gameboard.RandBoard;

  cout << length << endl;
  cout << width << endl;


  cout << "This is the classic mode" << endl;
  // have to write game bounds
  for(int i=-1; i<length; i++){
      for(int j=0; j<width; j++){
        if(1<2){
          cout<<arr[i][j] << endl;
        }
        else{
          //myfile<<arr[i][j];
        }
      }
    }
}
