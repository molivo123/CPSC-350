#include "Checker.h"


Checker::Checker(){


}

Checker::~Checker(){

}

string Checker::getFileName(){ // passes file name to the function numOfDelims
  numOfDelims(fileName);
}

void Checker::numOfDelims(string fileName){
  checkFile = fileName;
  char tempChar;
  //counters for each type of delimeter
  int parenthesis1=0;
  int parenthesis2=0;
  int bracket1=0;
  int bracket2=0;
  int brace1=0;
  int brace2=0;
  int docLine=0;

  typedef GenStack<char> CharStack;
  CharStack stack;
  ifstream userFile(checkFile.c_str()); // opening file, not 100% sure why I needed c_str but I kept having errors and this fixed it

  int lineLen=0;
  if(userFile.is_open()){
    while(getline(userFile, textLine)){

      lineLen = textLine.length();

      if(textLine[0] != '/' && textLine[1] != '/'){ // checking to make sure not a comment line

        for (int i = 0; i < lineLen; ++i){
          tempChar = textLine[i];

          if(tempChar == '{' || tempChar == '[' ||tempChar == '('||tempChar == '}'||tempChar == ')'||tempChar == ']'){
            if (stack.isFull()==true){
              stack.DoubleSize();
              //doubles stack size if it gets too big
            }
            //pushing each found char to stack
            stack.push(tempChar);


            if(tempChar == '{'){
              brace1++;
            }
            else if(tempChar == '}'){
              brace2++;
            }
            else if(tempChar == '['){
              bracket1++;
            }
            else if(tempChar == ']'){
              bracket2++;
            }
            else if(tempChar == '('){
              parenthesis1++;
            }
            else if(tempChar == ')'){
              parenthesis2++;
            }
          }
        }
      }
    }

    //counting occurance of each delimeter
    cout << bracket1 << ' ' <<'[' << endl;
    cout << bracket2 << ' ' << ']' << endl;
    cout << brace1 << ' ' << '{' << endl;
    cout << brace2 << ' ' << '}' << endl;
    cout << parenthesis1 << ' ' << '(' << endl;
    cout << parenthesis2 << ' ' << ')' << endl;


    //checking if the ommitted an ending delimeter
    if(bracket1 > bracket2){
      cout << "Missing a ']', reached end of code " << endl;
    }
    else if (brace1 > brace2  ){
      cout << "Missing a '}', reached end of code " << endl;
    }
    else if(parenthesis1 > parenthesis2){
      cout << "Missing a ')', reached end of code " << endl;;
    }

    //found pseudo code of these lines in the book that very much helped after rene told me about them in office hours pg:204-208
    //checking for delimeter inequality
    else if(brace1 < brace2){
      int j = 0;
      ifstream readFileAgain(checkFile); // need to reopen file
      if(readFileAgain.is_open()){
        while(getline(readFileAgain, textLine)){
          ++j; // counting the line number error occurs
          lineLen = textLine.length();
          for (int i = 0; i < lineLen; ++i){
            tempChar = textLine[i];
            if(docLine == 0){
              if(tempChar == '}'){
                docLine = j;
              }
            }
          }
        }
        readFileAgain.close();
      }
      cout << "Line: " << docLine << " Need a '{' before a '}'" << endl;
    }
    //checking for delimeter inequality
    else if(bracket1 < bracket2){
      int j = 0;
      ifstream readFileAgain(checkFile);
      if(readFileAgain.is_open()){
        while(getline(readFileAgain, textLine)){
          ++j; // counting the line number error occurs
          lineLen = textLine.length();
          for (int i = 0; i < lineLen; ++i){
            tempChar = textLine[i];
            if(docLine == 0){
              if(tempChar == ']'){
                docLine = j;
              }
            }
          }
        }
        readFileAgain.close();
      }
      cout << "Line: " << docLine << " Need a '[' before a ']'" << endl;
    }

    //checking for delimeter inequality
    else if(parenthesis1 < parenthesis2){
      int j = 0; // counting the line number error occurs
      ifstream readFileAgain(checkFile);
      if(readFileAgain.is_open()){
        while(getline(readFileAgain, textLine)){
          ++j;
          lineLen = textLine.length();
          for (int i = 0; i < lineLen; ++i){
            tempChar = textLine[i];
            if(docLine == 0){
              if(tempChar == ')'){
                docLine = j;
              }
            }
          }
        }
        readFileAgain.close();
      }
      cout << "Line: " << docLine << " Need a '(' before a ')'" << endl;
    }
    else{
      cout << "No syntax errors involving '(','{', or '['" <<endl;
    }
  }
  else{
    cout << "Could not open the file" <<endl;
  }
  userFile.close();
}
