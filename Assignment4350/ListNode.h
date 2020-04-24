#include <iostream>
#include <fstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

template <typename T>

class ListNode{
public:
  T data;
  ListNode<T> *next;
  ListNode<T> *prev;


  ListNode(); //default constructor
  ListNode(T d);//overloaded constructor
  ~ListNode();//deconstructor
};

template <typename T>
ListNode<T>::ListNode(){
}

template <typename T>
ListNode<T>::ListNode(T d){
  data = d;
  next = NULL;
  prev = NULL;
}

template <typename T>
ListNode<T>::~ListNode(){
}
