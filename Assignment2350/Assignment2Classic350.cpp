#include "Assignment2350.h"
#include <iostream>

using namespace std;
//constructor
Classic::Classic(){

}
//deconstructor
Classic::~Classic(){

}

//creates gameboard with classic boundarys
void Classic::startClassic(){
  GameBoard gameboard;

  //not sure why this won't work, prevented further progress
  int length = gameboard.lengthK;
  int width = gameboard.widthK;



  cout << "Length is: "<< length << endl;
  cout << "Width is: "<< width << endl;


  char ** arr = gameboard.RandBoard;

  cout << "This is the classic mode" << endl;
  // have to write game bounds
  tempArr=new char*[length];
  for(int i = 0; i < length; ++i){
    tempArr[i] = new char[width];
  }

  //code that should've output array in the correct format to either the console or an output file

  for(int i=0; i<length; i++){
      for(int j=0; j<width; j++){
        if(1<2){
          cout<<arr[i][j];
        }
        else{
          //outputFile<<arr[i][j];
          cout << "Poopity scoop";
        }
      }
      if(1>2){
        cout << endl;
      }
      else{
        cout << endl;
      }
    }
}
