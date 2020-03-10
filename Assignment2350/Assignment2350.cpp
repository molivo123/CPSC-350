#include "Assignment2350.h"

GameOfLife::GameOfLife(){
  width = 0;
  length = 0;
  popDen = 0;
  char RandTable[200][200];
  probOfX = 0;

}

GameOfLife::GameOfLife(int width, int length, int popDen){
  GameOfLife *myGame = new GameOfLife();
  width = randomWidth;
  length = randomLength;
  popDen = populationDenCalc;
  char RandTable[width][length];
  probOfX = popDen /100;
  srand(time(NULL));

  double X = ((double)rand()/(double)RAND_MAX);
  double RandVar = X;


  for (int i = 0; i < width; ++i){
    for(int j = 0; j < length; ++j){
      if(RandVar < probOfX){
        RandTable[i][j] = 'X';
      }
      else{
        RandTable[i][j] = '-';
      }
    }
  }
}

void GameOfLife::disp(){
  cout << width << endl;
}

GameOfLife::GameOfLife(string fileInput){
  GameOfLife *myGame = new GameOfLife();

  //fileInput = myGame->



}
GameOfLife::~GameOfLife(){
  delete myArrayRow;
  delete myArrayCol;

}

char GameOfLife::userInput(){
  bool validResponse = false;

  while(validResponse == false){
    cout << "Press ['r'] for a random gameboard, press ['f'] if you have a file: " << endl;
    cin >> userResponse1;

    if(tolower(userResponse1) == 'r'){
      getWidth();
      getLength();
      getPopDen();
      validResponse = true;
      break;
    }
    else if(tolower(userResponse1) == 'f'){
      GetFileInfo();
      validResponse = true;
      break;
    }
  }

  return userResponse1;
}

bool GameOfLife::safeInt(int &output){
  int temp;
  cin>>temp;
  if (cin.fail()) {
    cin.clear();
    cin.ignore();
    return false;
  }
  output = temp;
  return true;

}

char GameOfLife::gameBoundary(){
  bool validResponse = false;
  while(validResponse == false){
    cout << "Which game mode would you like?" << endl;
    cout << "Enter 'C' for Classic" << endl;
    cout << "Enter 'M' for Mirror" << endl;
    cout << "Enter 'D' for Doughnut" << endl;
    cin >> userResponse;
    if(tolower(userResponse) == 'c'){
      validResponse = true;
      Classic();
      break;
    }
    else if(tolower(userResponse) == 'm'){
      validResponse = true;
      Mirror();
      break;
    }
    else if(tolower(userResponse) == 'd'){
      validResponse = true;
      Doughnut();
      break;
    }
  }
  return userResponse;
}


void GameOfLife::Classic(){

  for (int i = -1; i < intLineRow; ++i ){
    for (int j = 0; j <  intLineCol; ++j){



    }
  }
  outputSelection();
}

void GameOfLife::Mirror(){
    cout << "mirror" << endl;
    for (int i = -1; i < intLineRow; ++i ){
      for (int j = 0; j <  intLineCol; ++j){



      }
    }
    outputSelection();
}

void GameOfLife::Doughnut(){
    cout << "doughnut" << endl;
    for (int i = -1; i < intLineRow; ++i ){
      for (int j = 0; j <  intLineCol; ++j){
        //stuff



      }
    }
    outputSelection();
}

char GameOfLife::outputSelection(){
  bool validResponse1 = false;
  while(validResponse1 == false){
    cout << "Do you want to output to a file (press ['f']) or the console (press ['c'])? " << endl;
    cin >> outputDecision;
    if(tolower(outputDecision) == 'f') {
      validResponse1 = true;
      outputToFile();
      break;
    }
    else if(tolower(outputDecision) == 'c') {
      validResponse1 = true;
      outputToConsole();
      break;
    }
  }
}

void GameOfLife::outputToFile(){
  ofstream outputFile;
  outputFile.open("outputFile.txt");

  //outputFile << "Matthew O" << endl;

}

void GameOfLife::outputToConsole(){
  bool validResponse2 = false;
  while(validResponse2 == false){
    cout << "Do you want to press enter bewtween simulations or do you want a brief automatic pause? " << endl;
    cout << "Press 'E' for enter. " << endl;
    cout << "Press 'P' for pauses " << endl;
    cin >> pausesOrEnter;

    if(tolower(pausesOrEnter) == 'e'){
      validResponse2 = true;
      enter();
      break;

    }
    else if(tolower(pausesOrEnter) == 'p'){
      validResponse2 = true;
      pause();
      break;
    }

  }
}

void GameOfLife::pause(){
  cout << "Pause" << endl;
}

void GameOfLife::enter(){
  cout << "Enter" << endl;
}
