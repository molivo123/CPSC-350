#include <iostream>
#include "Registrar.h"
#include <fstream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
Registrar::Registrar(){

}
Registrar::~Registrar(){

}

void Registrar::ToLine(){

  cout<<"Enter file name: "<<endl;
  string filename;
  cin>>filename;
  ifstream userFile (filename);


  //goes thropugh file to get length and reads though again to add to array
  // array would be for checking for metrics if assignment was completed
  int counter = 0;
  int i=0;
  int j=0;
  int length=0;
  int reset =0;
  int time;
  int clock;
  int ticks=0;
  string textLine;
  int studentCounter=0;
  int students=0;

  //read through file first time
  while(getline(userFile,textLine)){
    length++;
  }

  //open second file
  ifstream userFile2 (filename);
  int arr[length];
  //create array
  while(getline(userFile2,textLine)){
    arr[i]=std::stoi(textLine);
    i++;
  }
  //go through array for stats ticks and windows
  while(ticks<1000){
    students=0;
    studentCounter=0;
    while(counter<length){
      counter++;
      if(reset==0&&ticks==0){
        windows = arr[j];
        j++;
      }
     if(reset ==1){
        clock=arr[j];
        //counting down clock
        if (ticks!=clock){
          clock=-1;
        }
        else{
          j++;
        }
      }
     if(reset==2&&ticks==clock){
        students= arr[j];
        j++;
        studentCounter=0;
      }
      if(studentCounter<students&& reset>2){
        time=arr[j];
        StudentStats student(time,ticks);
        genQueue.insert(student);
        studentCounter++;
        j++;
      }
      reset++;
    }
    //continuing to count ticks, setting reset to 1 and resetting counter
    counter=0;
    reset=1;
    ticks++;
  }

}


//couldn't figure out 
//void Registrar::ToWindow(){

//}
