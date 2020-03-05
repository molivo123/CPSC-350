#include <iostream>
#include <typeinfo>

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
  float populationDensity();
  bool safeInt(int &output);
  int GetFileInfo();

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
  ifstream userFile;

  char *myArrayRow;
  char *myArrayCol;






};
