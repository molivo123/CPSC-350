#include "Assignment2350.h"

GameOfLife::GameOfLife(){
  myArrayRow = new char(200);
  myArrayCol = new char(200);
  maxSize = 200;

}

GameOfLife::GameOfLife(int mSize){

  myArrayRow = new char(mSize);
  myArrayCol = new char(mSize);
  maxSize = mSize;
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
      getRandomInput();
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

int GameOfLife::getRandomInput(){
  while(true){

    cout << "You have selected a random gameboard. " << endl;
    cout << "Give me the width of the gameboard: " << endl;

    while (!safeInt(randomWidth)){
      cout << "You have an error. " << endl;
      cout << "Give me the width of the gameboard: " << endl;

    }

    cout << "The width is: " << randomWidth << endl;

    cout << "Give me the length of the gameboard: " << endl;

    while (!safeInt(randomLength)){
      cout << "You have an error. " << endl;
      cout << "Give me the length of the gameboard: " << endl;

    }

    cout << "The length is : " << randomLength << endl;

    cout << "What percent of the board do you want your population density to be?" << endl;
    while (!safeInt(populationDen)){
      cout << "You have an error. " << endl;
      cout << "Give me the population density: " << endl;

    }
    populationDenCalc = populationDen * .01;

    cout << "The population density is: " << populationDenCalc << endl;
    break;
  }

}

int GameOfLife::GetFileInfo(){

  cout << "Please enter your file name: " << endl;
  cin >> fileName;
  userFile(fileName);

  if(userFile.is_open()){
    while(userFile.good()){
      getline(userFile, intLine);
      

    }

  }





  if(userFile)

}
