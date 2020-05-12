#include "MasterFaculty.h"

MasterFaculty::MasterFaculty(){
  facultyTree = new BST<Faculty*>;

}

MasterFaculty::~MasterFaculty(){

}

void MasterFaculty::addFaculty(Faculty* faculty){
  facultyTree->insert(faculty);
  cout << "Faculty Added" << endl;
}

void MasterFaculty::printFaculty(TreeNode<Faculty*>* node){
  if(node==NULL){
    return;
  }
  facultyTree->printTree(node->left);
  cout << node->key << endl;
  facultyTree->printTree(node->right);
}

void MasterFaculty::deleteFaculty(Faculty* faculty){
  facultyTree->deleteNode(faculty);
  cout << "Faculty Deleted" << endl;
}
