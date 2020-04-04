#include "Checker.h"

using namespace std;

int main(int argc, char **argv) {
    Checker check;
    string fileName = argv[1];//store 2nd command line arg as file name
    
    check.numOfDelims(fileName);
  return 0;
}
