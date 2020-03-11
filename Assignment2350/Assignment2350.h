#include <iostream>
#include <typeinfo>
#include <fstream>
#include <random>
#include <string>
#include <cmath>

using namespace std;

class GameOfLife{
public:
  GameOfLife();//default constructor
  ~GameOfLife();//deconstructor

  int *randomBoard();
  int *chooseFile();
  void classic();
  //aux functions
  char userInput(); // ask user random or file
  string inputFile(); // ask for name of inputFile
  int getLength();
  int getWidth();
  int getPopDen();
  char gameBoundary();
  char outputSelection();
  void outputToConsole();
  void pause();
  void enter();
  void disp();

  //vars
  int output;
  int width=0;
  int length=0;
  int popDen;
  int maxSize;
  char userResponse1;
  char userResponse;
  int randomWidth;
  int randomLength;
  int populationDen;
  double populationDenCalc;
  int intLine;
  int intLineRow;
  int intLineCol;
  int counter;
  char tempChar;
  string userBoundary;
  int xCounter;
  char outputDecision;
  ofstream outputFile;
  double probOfX;
  char pausesOrEnter;


  char *myArrayRow;
  char *myArrayCol;

};
class GameBoard{
public:
  GameBoard();
  ~GameBoard();

  void getRandomValues();
  void getFileValues();
  bool safeInt(int &output);
  void outputToFile();
  void getInputInfo();
  int width;
  int probOfX;
  int length;
  int width6;
  int length6;
  int userRand6;
  string fileName;
  string textLine;
  ifstream userFile;
  ifstream userFile2;
  int neighborCounter;

  int RandVar;
  char pausesOrEnter;
  int width1;
  int length1;
  int j;
  int userRand;
  int widthTemp;
  int lengthTemp;

  char ** arr1 = NULL;
  char ** arr2 = NULL;
  char ** RandBoard = NULL;


};
//created new class for each of the gamemodes
//idea provided to me by the tutoring center
class Classic{
public:
  Classic();
  ~Classic();

  void startClassic(int &length6, int &width6);
  char ** nextArr = NULL;
  int length6;
  int width6;
  int length;
  int width;

  int neighborCounter;

};
class Mirror{
public:
  Mirror();
  ~Mirror();

  void startMirror();
  char ** nextArr = NULL;

  int widthTemp;
  int lengthTemp;
  int neighborCount;

};
class Doughnut{
public:
  Doughnut();
  ~Doughnut();

  void startDoughnut();
  char ** nextArr = NULL;

  int widthTemp;
  int lengthTemp;
  int neighborCount;

};
