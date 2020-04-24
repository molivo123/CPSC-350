#include <iostream>
#include <fstream>
#include <stack>
#include <string>
#include <vector>
#include "DubLinkedLists.h"

using namespace std;

template <typename T>

class GenQueue
{
public:
  GenQueue();//default constructor
  ~GenQueue(); //deconstructor

  //core functions
  void insert(T data);//enqueue
  char remove();//dequeue

  //aiux functionas
  char peek();
  bool isFull();
  bool isEmpty();
  int getSize();


  //vars
  int front;//head
  int rear;//tail
  int mSize;
  int numElements;

  T *myQueue; // array
  typedef DoublyLinkedList<T> LinkList;
  LinkList DubLL;



};

template <typename T>
//default constructor
GenQueue<T>::GenQueue(){
  typedef DoublyLinkedList<T> DubLL;
  DubLL linkList;
  numElements=0;
}

template <typename T>

GenQueue<T>::~GenQueue(){

  delete myQueue;

}

template <typename T>
void GenQueue<T>::insert(T data){
  DubLL.insertBack(data);
  // inserts to back of LL
}

template <typename T>
char GenQueue<T>::remove(){
  if(isEmpty() == false){
    char c = '\0';
    // moving the front over
    c = myQueue[front];
    ++front;
    --numElements;
    return c;
  }
}

template <typename T>
char GenQueue<T>::peek(){
  return myQueue[front];
  //returns top of queue
}

template <typename T>
bool GenQueue<T>::isFull(){
  return(numElements == mSize);
  
}

template <typename T>
bool GenQueue<T>::isEmpty(){
  return(numElements==0);
}

template <typename T>
int GenQueue<T>::getSize(){
  return numElements;
}
