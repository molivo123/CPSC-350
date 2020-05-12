#include <iostream>
#include "BST.h"
#include "Faculty.h"
using namespace std;

class MasterFaculty{
  public:
    MasterFaculty();
    ~MasterFaculty();
    BST<Faculty*> *facultyTree;
    void addFaculty(Faculty* faculty);
    void printFaculty(TreeNode<Faculty*>* node);
    void deleteFaculty(Faculty* faculty);
  private:
    Faculty* faculty;
};
