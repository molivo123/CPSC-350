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



    cout << "Give me the length of the gameboard: " << endl;

    while (!safeInt(randomLength)){
      cout << "You have an error. " << endl;
      cout << "Give me the length of the gameboard: " << endl;

    }



    cout << "What percent of the board do you want your population density to be?" << endl;
    while (!safeInt(populationDen)){
      cout << "You have an error. " << endl;
      cout << "Give me the population density: " << endl;

    }
    populationDenCalc = populationDen * .01;

    cout << "The width is: " << randomWidth << endl;
    cout << "The lenth is : " << randomLength << endl;
    cout << "The population density is: " << populationDenCalc << endl;
    break;
  }
  gameBoundary();
}

int GameOfLife::GetFileInfo(){
  int c = 0;
  counter = 0;
  int LineRow = 0;
  int LineCol = 0;
  cout << "Please enter your file name: " << endl;
  cin >> fileName;
  userFile.open(fileName);

  if(userFile.is_open()){
    while(counter < 2){
      if(counter == 0){
        userFile >> intLineRow;
        ++counter;

      }
      else if (counter == 1){
        userFile >> intLineCol;
        ++counter;
      }
    }
    while( getline ( userFile, textLine ) ){
      int lineLen = textLine.length();
      if (lineLen == 0) continue;
      for (int i = 0; i < lineLen; ++i){


        if(textLine.at(i) == 'X'){
          ++Xcounter;
        }

      }
      cout << textLine << endl;
    }
    cout << "Num of X's: "<< Xcounter << endl;

    cout << "Rows: "<< intLineRow << endl;
    cout << "Lines: "<< intLineCol << endl;
    gameBoundary();
  }

  else{
    cout << "File could not be opened " << endl;
  }
  return 0;
}

char GameOfLife::gameBoundary(){
  bool validResponse = false;
  while(validResponse == false){
    cout << "Which game mode would you like?" << endl;
    cout << "Enter 'C' for Classic" << endl;
    cout << "Enter 'M' for Mirror" << endl;
    cout << "Enter 'D' for Doughnut" << endl;
    cin >> userResponse1;
    if(tolower(userResponse1) == 'c'){
      validResponse = true;
      Classic();
      break;
    }
    else if(tolower(userResponse1) == 'm'){
      validResponse = true;
      Mirror();
      break;
    }
    else if(tolower(userResponse1) == 'd'){
      validResponse = true;
      Doughnut();
      break;
    }
  }
  return userResponse1;
}

void GameOfLife::Classic(){
  cout << "classic" << endl;
}

void GameOfLife::Mirror(){
    cout << "mirror" << endl;
}

void GameOfLife::Doughnut(){
    cout << "doughnut" << endl;
}
