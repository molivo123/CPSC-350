#include "Assignment2350.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  GameOfLife *myGame = new GameOfLife();

  myGame->userInput();

  delete myGame;

  GameOfLife GL;
  GameOfLife GL2(2,3,4);
  GameOfLife GL3;
  GL2.disp();


  //cout << "Width is: " << ;



  return 0;
}
