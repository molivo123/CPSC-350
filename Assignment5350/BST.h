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
  TreeNode<T>* getMin();
  TreeNode<T>* getMax();

  TreeNode<T>* getSuccessor(TreeNode<T> *d);

  void printTree(TreeNode<T> *node);

  TreeNode<T> *root;

};

template <typename T>

BST<T>::BST(){
  root = NULL;

}

template <typename T>

BST<T>::~BST(){
  //makin us do this ourselves
}

template <typename T>

void BST<T>::printTree(TreeNode<T> *node){
  if(node==NULL){
    return;
  }
  printTree(node->left);
  cout << node->key << endl;
  printTree(node->right);
}


template <typename T>

TreeNode<T>* BST<T>::getMax(){
  TreeNode<T> *curr = root;//start at root

  if(root == NULL){
    return NULL; // tree is empty
  }
  while(curr->right != NULL){
    curr = curr->right;
  }
  return curr; // curr->key
}


template <typename T>
TreeNode<T>* BST<T>::getMin(){
  TreeNode<T> *curr = root;//start at root

  if(root == NULL){
    return NULL; // tree is empty
  }
  while(curr->left != NULL){
    curr = curr->left;
  }
  return curr; // curr->key
}

template <typename T>

bool BST<T>::isEmpty(){
  return (root == NULL);
}

template <typename T>

void BST<T>::insert(T value){

  TreeNode<T> *node = new TreeNode<T>(value); // value is also the key

  if(root == NULL){
    // we have an empty Tree
    root = node;
  }
  else{
    //tree is not empty, need to find location
    TreeNode<T> *curr = root;
    TreeNode<T> *parent; //empty node

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

bool BST<T>::search(T value){
  if(isEmpty()){
    return false;
  }
  else{
    // tree is not empty
    TreeNode<T> *current = root;

    while(current->key != value){
      if(value < current->key){
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

bool BST<T>::deleteNode(T value){
  if(root==NULL){
    return false;
  }
  TreeNode<T> *current = root;
  TreeNode<T> *parent=root;
  bool isLeft=true;
  //if we make it here, the tree is not empty and now we need to find the node
  while(current->key != value){
    parent=current;
    if(value < current->key){
      isLeft=true;
      current=current->left;
    }
    else{
      isLeft=false;
      current=current->right;
    }
    if(current==NULL){
      return false;
    }
  }
  //now we found it, now what
  if(current->left==NULL && current->right == NULL){
    if(current==root){
      root=NULL;
    //  cout<<"Deleted"<<endl;
    }
    else if(isLeft){
      parent->left=NULL;
    }
    else{
      parent->right=NULL;
    }
  }
  else if(current->right==NULL){
    if(current==root){
      root=current->left;
    }
    else if(isLeft){
      parent->left=current->left;
    }
    else{
      parent->right=current->left;
    }
  }
  else if(current->left==NULL){
    if(current==root){
      root=current->right;
    }
    else if(isLeft){
      parent->left=current->right;
    }
    else{
      parent->right=current->right;
    }
  }
  else{
    //node to be deleted has 2 children
    TreeNode<T> *successor=getSuccessor(current);
    if(current==root){
      root=successor;
    }
    else if(isLeft){
      parent->left=successor;
    }
    else{
      parent->right=successor;
    }
    successor->left=current->left;
  }
  return true;

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
