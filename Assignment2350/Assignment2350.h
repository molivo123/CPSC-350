#include <iostream>
#include <typeinfo>
#include <fstream>
#include <random>
#include <string>

using namespace std;

class GameOfLife{
public:
  GameOfLife();//default constructor
  GameOfLife(int width, int length, int popDen); // overloaded constructor
  GameOfLife(string fileInput);
  ~GameOfLife();//deconstructor


  //aux functions
  char userInput(); // ask user random or file
  string inputFile(); // ask for name of inputFile
  int getLength();
  int getWidth();
  int getPopDen();
  bool safeInt(int &output);
  int GetFileInfo();
  char gameBoundary();
  void Classic();
  void Mirror();
  void Doughnut();
  char outputSelection();
  void outputToFile();
  void outputToConsole();
  void pause();
  void enter();
  void disp();

  //vars
  int output;
  int width;
  int length;
  int popDen;
  int maxSize;
  char userResponse1;
  char userResponse;
  int randomWidth;
  int randomLength;
  int populationDen;
  double populationDenCalc;
  string fileName;
  string textLine;
  int intLine;
  int intLineRow;
  int intLineCol;
  ifstream userFile;
  int counter;
  char tempChar;
  string userBoundary;
  int xCounter;
  char outputDecision;
  ofstream outputFile;
  char pausesOrEnter;
  double probOfX;


  GameOfLife* gamePtr;
  int mSize;
  void (*foo)(int);

  //foo = &getRandomValues;


  char *myArrayRow;
  char *myArrayCol;

};
