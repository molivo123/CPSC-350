#include "Assignment2350.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  GameOfLife *myGame = new GameOfLife(200);
  //cout << myGame->userInput() <<endl;
  myGame->userInput();

  delete myGame;


  return 0;
}
