#include <iostream>
#include <fstream>
#include <stack>
#include <string>
#include <vector>
#include "ListNode.h"

using namespace std;

template <typename T>

class DoublyLinkedList{
public:
  DoublyLinkedList();
  ~DoublyLinkedList();

  void insertFront(T data);
  void insertBack(T data);
  T removeFront();
  T removeBack();
  unsigned int getSize();
  bool isEmpty();
  void printList();
  int search(T val);//can return value or postition of node
  T removeAtPos(T pos);

private:
  ListNode<T> *front;
  ListNode<T> *back;
  unsigned int size;

};


template <typename T>

DoublyLinkedList<T>::DoublyLinkedList(){
  size = 0;
  front = NULL;
  back = NULL;
}

template <typename T>

DoublyLinkedList<T>::~DoublyLinkedList(){
  //build character
}

template <typename T>

unsigned int DoublyLinkedList<T>::getSize(){
  return size;
}

template <typename T>

bool DoublyLinkedList<T>::isEmpty(){
  return (size==0);
}

template <typename T>

void DoublyLinkedList<T>::printList(){

  ListNode<T> *curr = front;

  while(curr != NULL){
    cout << curr->data << endl;
    curr = curr->next;
  }

}


template <typename T>
void DoublyLinkedList<T>::insertFront(T d){
  ListNode<T> *node = new ListNode<T>(d);
  //check if isEmpty
  if(isEmpty()){
    back = node;
  }
  else{
    //not empty
    front->prev = node;
    node->next = front;
  }
  front = node;
  size++;
}

template <typename T>

void DoublyLinkedList<T>::insertBack(T d){
  ListNode<T> *node = new ListNode<T>(d);
  //check if isEmpty
  if(isEmpty()){
    front = node;
  }
  else{
    //not empty
    back->next = node;
    node->prev = back;
  }
  back = node;
  size++;
}


template <typename T>

T DoublyLinkedList<T>::removeFront(){
  ListNode<T> *node = front;
  if(front->next == NULL){
    //we have one node in the ListNode
    back = NULL;
  }
  else{
    //more than one node in ListNode
    front->next->prev = NULL;
  }
  front = front->next;
  T temp = node->data;
  temp->next = NULL;
  size--;
  delete node;
  return temp;
}
// need to find the value in the list before we canc delete
//does not takein a position as parameter

template <typename T>

T DoublyLinkedList<T>::removeAtPos(T val){
  ListNode<T> *curr = front;

  while(curr->data != val){
    //keep iterating until we find our value
    curr = curr->next;

    if(curr == NULL){
      return NULL; // might need to return -1
    }
  }
  //we found the value, now lets delete
  if(curr == front){
    //check if node to be deleted is the front
    front = curr->next;
  }
  else{
    //node to be deleted is not the front or back
    curr->prev->next = curr->next;
  }
  if(curr == back){
    back = curr->prev;
  }
  else{
    //not front or back again
    curr->next->prev = curr->prev;
  }
  curr->next = NULL;
  curr->prev = NULL;
  int temp = curr->data;
  size--;

  return temp;
}

template <typename T>

int DoublyLinkedList<T>::search(T val){

}
