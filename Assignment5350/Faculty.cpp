#include "Faculty.h"

Faculty::Faculty(){

}

Faculty::Faculty(int facultyID, string facultyName, string facultyLevel, string facultyDptmnt){
  id = facultyID;
  name = facultyName;
  level = facultyLevel;
  department = facultyDptmnt;
}

Faculty::~Faculty(){

}

//ID Functions
int Faculty::getID(){
  return id;
}
void Faculty::setID(int facultyID){
  id = facultyID;
}
//Name Functions
string Faculty::getName(){
  return name;
}
void Faculty::setName(string facultyName){
  name = facultyName;
}
//Level Functions
string Faculty::getLevel(){
  return level;
}
void Faculty::setLevel(string facultyLevel){
  level = facultyLevel;
}
//Department Functions
string Faculty::getDepartment(){
  return department;
}
void Faculty::setDepartment(string facultyDptmnt){
  department = facultyDptmnt;
}
