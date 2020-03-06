#include <iostream>
#include <typeinfo>
#include <fstream>
#include <random>
#include <string>

using namespace std;

class GameOfLife{
public:
  GameOfLife();//default constructor
  GameOfLife(int mSize); // overloaded constructor
  ~GameOfLife();//deconstructor


  //aux functions
  char userInput(); // ask user random or file
  string inputFile(); // ask for name of inputFile
  int getRandomInput(); //prompt fopr when a random game board is chosen
  bool safeInt(int &output);
  int GetFileInfo();
  char gameBoundary();
  void Classic();
  void Mirror();
  void Doughnut();
  bool safeStr(string &outputS);

  //vars
  int output;
  int maxSize;
  char userResponse1;
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
  int Xcounter;


  char *myArrayRow;
  char *myArrayCol;


};
