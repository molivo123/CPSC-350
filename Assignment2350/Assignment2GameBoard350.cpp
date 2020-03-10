#include "Assignment2350.h"

gameBoard::gameBoard(){
  char response;

  cout << "Would you like to read from a file ['f'] or have a random gameboard ['r']? " << endl;
  cin>>response;

  if(tolower(response) == 'r'){
    randomBoard();
  }
  else{
    GetFileInfo();
  }

}


gameBoard::~gameBoard(){

}


void gameBoard::getRandomValues(){
  int width = 0;
  int length = 0;
  int popDen = 0;
  double randNum = 0;
  double randNum = ((double)rand()/(double)RAND_MAX);


  cout << "Enter the width of the Game board: " << endl;
  cin >> width;
  while (!safeInt(width)){
    cout << "You have an error. " << endl;
    cout << "Give me the width of the gameboard: " << endl;

  }

  cout << "Enter the legnth of the Game board: " << endl;
  cin >> length;

  while (!safeInt(length)){
    cout << "You have an error. " << endl;
    cout << "Give me the length of the gameboard: " << endl;

  }
  cout << "Enter a random number between 1 and 100: " << endl;
  cin >> PopDen;

  while (!safeInt(popDen)){
    cout << "You have an error. " << endl;
    cout << "Give me the Population Density (as a percent) of the gameboard: " << endl;

  }


  RandBoard = new char* [length];
  for(int i = 0; i < length; ++i){
    RandBoard[i] = new char [width];
  }

  for (int i = 0; i < width; ++i){
    for(int j = 0; j < length; ++j){
      if(RandVar < probOfX){
        RandBoard[i][j] = 'X';
      }
      else{
        RandBoard[i][j] = '-';
      }
    }
  }


}

int gameBoard::getFileValues(){
  int c = 0;
  counter = 0;
  int LineRow = 0;
  int LineCol = 0;
  cout << "Please enter your file name: " << endl;
  cin >> fileName;
  userFile.open(fileName);

  if(userFile.is_open()){
    while( getline ( userFile, textLine ) ){
      int lineLen = textLine.length();
      if (lineLen == 0) continue;
      for (int i = 0; i < lineLen; ++i){
        for(int j= 0; j < ){

        }
      }
      cout << textLine << endl;
    }
    cout << "Num of X's: "<< xCounter << endl;

    cout << "Rows: "<< intLineRow << endl;
    cout << "Lines: "<< intLineCol << endl;
    gameBoundary();
  }

  else{
    cout << "File could not be opened " << endl;
  }
  return 0;

}
