#include <iostream>
#include <fstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

template <typename T>

class GenStack
{
private:
  int mSize; // maxSize of Genstack
  int top; // var to keep track of indices representing top of stack

public:
  T *mData;
  T *mData2;
  GenStack(); // default constructor
  GenStack(T maxSize);// overloaded constructor
  ~GenStack();//destructor
  //functions
  void push(T);// insert
  T pop();//remove
  T peek(); // see top
  int StackSize();
  void DoubleSize();

  // helper functions
  bool isFull();
  bool isEmpty();

};


template <typename T>
GenStack<T>::GenStack()
{
  mData = new char[128];
  mSize = 128;
  top = -1;

}
//overloaded constructor
template <typename T>
GenStack<T>::GenStack(T maxSize)
{
  mData = new T[maxSize];
  mSize = maxSize;
  top = -1;

}

template <typename T>
GenStack<T>::~GenStack()
{
  delete[] mData;

}

template <typename T>
void GenStack<T>::push (T data)
{
  if(isFull() == false){
  //check if full before insterting
    mData[++top] = data;
  }
}

template <typename T>
T GenStack<T>::pop()
{
  if(isEmpty() == false){
    //check if isEmpty before proceeding to remove
    return mData[top--];
  }
}

template <typename T>
T GenStack<T>::peek()
{
  if(isEmpty() == false){
  //check if isEmpty
    return mData[top];
  }
}

template <typename T>
int GenStack<T>::StackSize(){
  return top + 1;
}

template <typename T>
bool GenStack<T>::isFull()
{
  return (top == mSize - 1);
}

template <typename T>
bool GenStack<T>::isEmpty()
{
  return (top == - 1);
}

template <typename T>
void GenStack<T>::DoubleSize(){
  mData2 = new T[mSize*2];
  mSize=mSize*2;
  for(int i=0; i < mSize; i++){
    mData2[i] = mData[i];
  }
  mData = mData2;
}
