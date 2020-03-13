#include "Assignment2350.h"
#include <iostream>

using namespace std;

//constructor
GameBoard::GameBoard(){

}

//deconstructor
GameBoard::~GameBoard(){

}


//prompts the user for an input file or give values for a random gameboard
void GameBoard::getInputInfo(){
  char response;
  bool userResponse = false;

  cout << "Would you like to read from a file ['f'] or have a random gameboard ['r']? " << endl;
  cin>>response;
  while(userResponse == false){

    if(tolower(response) == 'r'){
      //call to randomboard function
      getRandomValues();
      userResponse = true;
    }
    else if (tolower(response) == 'f'){
      //call to input file info function
      getFileValues();
      userResponse = true;
    }
    else{
      cout << "Invalid input" << endl;
    }
  }
}



// checks parameter to make sure it's an integer
bool GameBoard::safeInt(int &output){
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

//function for values of randomboard
void GameBoard::getRandomValues(){
  int i;
  int j;
  double randNum = ((double)rand()/(double)RAND_MAX);
  int length6 = 0;
  int width6 = 0;
  userRand6 = 0;

  cout << "Enter the width of the Game board: " << endl;
  while (!safeInt(width6)){
    cout << "You have an error. " << endl;
    cout << "Give me the width of the gameboard: " << endl;
  }
  cout << "Width: " << width6 <<endl;

  widthK = width6;
  cout << "Enter the legnth of the Game board: " << endl;

  while (!safeInt(length6)){
    cout << "You have an error. " << endl;
    cout << "Give me the length of the gameboard: " << endl;

  }
  cout << "Length: " << length6 << endl;
  lengthK = length6;

  cout << "Enter a random number between 1 and 100: " << endl;

  while (!safeInt(userRand6)){
    cout << "You have an error. " << endl;
    cout << "Enter a random number between 1 and 100: " << endl;
    cout << randNum;

  }
  randNumUser = (double)(userRand6 * .01);
  RandBoard = new char* [length6];
  for(int i = 0; i < length6; ++i){
    RandBoard[i] = new char [width6];
  }
  //cout << "Rand NUM: " << randNumUser << endl;


  //couldnt get array to properly output, but can still output x or - depending on randNumUser and randNum


  for (int i = 0; i < length6; ++i){
    for(int j = 0; j < width6; ++j){
      //cout << randNum << endl;
      //changes random number each iteration
      randNum = ((double)rand()/(double)RAND_MAX);
      if(randNum < randNumUser){
        RandBoard[i][j] = 'X';
        cout << RandBoard[i][j] << endl;
      }
      else{
        RandBoard[i][j] = '-';
        cout << RandBoard[i][j] << endl;
      }
    }
  }
}


//takes in and reads input file
void GameBoard::getFileValues(){
  int lc = 0;
  int userRand6 = 0;
  int width6 = 0;
  int length6 = 0;
  cout << "Please enter your file name: " << endl;
  cin >> fileName;
  userFile.open(fileName);

  if(userFile.is_open()){
    while(getline (userFile, textLine )){
      if(textLine.length() > 2){
        width6=textLine.length();
        lc++;
      }
      else{
        continue;
      }
    }
    length6=lc;
  }
  else{
    cout << "Cannot find file " << endl;
  }

  RandBoard2 = new char *[length6];
  for (int i = 0; i < length6; i++){
    RandBoard2[i] = new char [width6];
  }

  //tried to set len and width to another var to use in another class, but couldnt get it to work
  widthK=width6;
  lengthK=length6;

  cout << "Width file: "<< widthK << endl;
  cout << "Length file: "<< lengthK << endl;

  userFile.close();
}
