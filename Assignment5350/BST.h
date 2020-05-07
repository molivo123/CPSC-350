#include <iostream>
using namespace std;
#include "TreeNode.h"

template <typename T>


class BST{
public:
  BST();
  ~BST();

  T* values;
  //virtual ~BST(); - for working with template classes
  void insert(T value); // which in this example is the same as key
  bool search(T value); // which in this example is the same as key
  bool deleteNode(T value);

  bool isEmpty();
  TreeNode* getMin();
  TreeNode* getMax();

  TreeNode* getSuccessor(TreeNode<T> *d);

  void printTree(TreeNode *node);


private:
  TreeNode *root;

};

template <typename T>

BST::BST(){
  root = NULL:

}

template <typename T>

BST::~BST(){
  //makin us do this ourselves
}

template <typename T>

void BST::printTree(TreeNode *node){
  if(node==NULL){
    return;
  }
  printTree(node->left);
  cout << node->key << endl;
  printTree(node->right);
}


template <typename T>

TreeNode* BST::getMax(){
  TreeNode *curr = root//start at root

  if(root == NULL){
    return NULL; // tree is empty
  }
  while(curr->right != NULL){
    curr = curr->right;
  }
  return curr; // curr->key
}


template <typename T>
TreeNode* BST::getMin(){
  TreeNode *curr = root//start at root

  if(root == NULL){
    return NULL; // tree is empty
  }
  while(curr->left != NULL){
    curr = curr->left;
  }
  return curr; // curr->key
}

template <typename T>

bool BST::isEmpty(){
  return (root == NULL);
}

template <typename T>

void BST::insert(int value){

  TreeNode *node = new TreeNode(value); // value is also the key

  if(root == NULL){
    // we have an empty Tree
    root = node;
  }
  else{
    //tree is not empty, need to find location
    TreeNode *curr = root;
    TreeNode *parent; //empty node

    while(true){
      //let's find the insertion point
      parent = curr;

      if(value < curr->key){
        //go left
        curr = curr->left;
        if(curr == NULL){
          parent->left = node;
          break;
        }
      }
      //go left
      curr = curr->right;
      if(curr==NULL){
        parent->right = node;
        break;
      }
    }
  }
}


template <typename T>

bool BST::searchNode(int value){
  if(isEmpty()){
    return false;
  }
  else{
    // tree is not empty
    TreeNode *current = root;

    while(current->key != value){
      if(value < current->){
        current = current->left;
      }
      else{
        current = current->right;
      }
      if(current == NULL){
        return false;
      }
    }
    return true;
  }
}


template <typename T>

bool BST:: deleteNode(int value){
  if(isEmpty()){
    return false;
  }
  else if(!search(k)){
    return false;
  }

  //tree is not empty and value exists, so look for it
  TreeNode *current = root;
  TreeNode *parnet = root;
  bool isLeft = true;
  //usual code to find TreeNode
  //we will also update pointers
  while(current->key != k){
    parent = current;
    if(k < current->key){
      isLeft = true;
      current = current->left;
    }
    else{
      isLeft = false;
      current = current->right;
    }
    if(current == NULL){
      return false;
    }

    //if we made it here, we found the node, now we proceed to deleteNode

    //no children. leaft node
    if(current->left == NULL && current->right == NULL){
      if(current == root){
        root = NULL;
      }
      else if(isLeft){
        parent->left = NULL;
      }
      else{
        parent->right = NULL;
      }
    }
    //one child and the child is left
    else if(current->righr == NULL){
      //does not have a right child
      if(current == root){
        root = current->left;
      }
      else if(isLeft){
        parent->left = current->left;
      }
      else{
        parent->right = current->left;
      }

    }
    else if(current->left == NULL){
      //does not have a right child
      if(current == root){
        root = current->right;
      }
      else if(isLeft){
        parent->left = current->right;
      }
      else{
        parent->right = current->right;
      }

    }
    else{
      //the node has 2 children
      TreeNode *successor = getSuccessor(current);

      if(current == root){
        root = successor;
      }
      else if(isLeft){
        parent->left = successor;
      }
      else{
        parent->right = successor;
      }

      successor->left = current->left;

      return true;
    }

  }

  template <typename T>
  TreeNode<T>* BST<T>::getSuccessor(TreeNode<T> *d){
    //d is the node to be deleted

    TreeNode<T> *sp = d;
    TreeNode<T> *successor = d;
    TreeNode<T> *current = d->right;

    while(current != NULL){
      sp = successor;
      successor = current;
      current = current->left;
    }

    if(successor != d->right){
      sp->left = successor->right;
      successor->right = d->right;
    }

    return successor;
  }
};
