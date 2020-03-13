#include <iostream>
#include <typeinfo>
#include <fstream>
#include <random>
#include <string>
#include <cmath>
#include <unistd.h>
//all of my includes

using namespace std;
//all of my namespaces

//GoL class
class GameOfLife{
public:
  GameOfLife();//default constructor
  ~GameOfLife();//deconstructor

};

//class that is supposed to take in the parameters from either the user or the input to create an array
class GameBoard{
public:
  GameBoard();//constructor
  ~GameBoard();//deconstructor

  //functions/methods
  void getRandomValues();
  void getFileValues();
  bool safeInt(int &output);
  void outputToFile();
  void getInputInfo();

  //vars
  int lengthK;
  int widthK;
  int width6;
  int length6;
  int probOfX;
  int i;
  int userRand6;
  string fileName;
  string textLine;
  ifstream userFile;
  int neighborCounter;
  double randNumUser;
  int RandVar;
  char pausesOrEnter;
  int j;
  int userRand;


  char ** RandBoard2 = NULL;
  char ** RandBoard = NULL;


};
//created new class for each of the gamemodes
//idea provided to me by the tutoring center
class Classic{
public:
  Classic();//constructor
  ~Classic();//deconstructor

  //functions/methods
  void startClassic();

  //vars
  int width;
  int length;
  int neighborCounter;

  char ** tempArr = NULL;


};
class Mirror{
public:
  Mirror();//constructor
  ~Mirror();//deconstructor

  //functions/methods
  void startMirror();

  //vars
  int neighborCount;

  char ** tempArr = NULL;


};
class Doughnut{
public:
  Doughnut();//constructor
  ~Doughnut();//deconstructor

  //functions/methods
  void startDoughnut();

  //vars
  int neighborCount;

  char ** tempArr = NULL;


};
