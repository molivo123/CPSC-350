#include "Checker.h"

using namespace std;

int main(int argc, char **argv) {
    Checker check;
    
    string fileName = argv[1];
    //check.getFileName(fileName);

    check.numOfDelims(fileName);
  return 0;
}
