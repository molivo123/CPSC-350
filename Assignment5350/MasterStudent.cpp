#include "MasterStudent.h"

MasterStudent::MasterStudent(){
  studentTree = new BST<Student*>;

}

MasterStudent::~MasterStudent(){

}

void MasterStudent::addStudent(Student* student){
  studentTree->insert(student);
  cout << "Student Added" << endl;
}

void MasterStudent::printStudents(TreeNode<Student*>* node){
  if(node==NULL){
    return;
  }
  studentTree->printTree(node->left);
  cout << node->key << endl;
  studentTree->printTree(node->right);
}

void MasterStudent::deleteStudent(Student* student){
  studentTree->deleteNode(student);
  cout << "Student Deleted" << endl;
}
