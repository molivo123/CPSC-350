#include "Student.h"

Student::Student(){

}

Student::Student(int studentID, string studentName, string studentGrade, string studentMajor, double studentGPA, int studentAdvisorID){
  id = studentID;
  name = studentName;
  grade = studentGrade;
  major = studentMajor;
  gpa = studentGPA;
  advisorID = studentAdvisorID;
}

Student::~Student(){

}

//ID Functions
int Student::getID(){
  return id;
}
void Student::setID(int studentID){
  id = studentID;
}
//Name Functions
string Student::getName(){
  return name;
}

void Student::setName(string studentName){
  name = studentName;
}
//Grade Functions
string Student::getGrade(){
  return grade;
}
void Student::setGrade(string studentGrade){
  grade = studentGrade;
}
//Major Functions
string Student::getMajor(){
  return major;
}
void Student::setMajor(string studentMajor){
  major = studentMajor;
}
//GPA Functions
double Student::getGPA(){
  return gpa;
}

void Student::setGPA(double studentGPA){
  gpa = studentGPA;
}
//Advisor ID Functions
int Student::getAdvisorID(){
  return advisorID;
}
void Student::setAdvisorID(int studentAdvisorID){
  advisorID = studentAdvisorID;
}
