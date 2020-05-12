#include "Faculty.h"
#include "MasterStudent.h"

int main(int argc, char** argv){

  MasterStudent *masterStu = new MasterStudent();

  bool running = true;
  int userOption = 0;

  while(running){
    cout << "Welcome To Database: " << endl;
    cout << "Enter Number Of Option You Would Like To Select" << endl;
    cout << "1. Print Students" << endl;
    cout << "2. Print Faculty" << endl;
    cout << "7. Enter New Student" << endl;
    cout << "8. Delete A Student" << endl;
    cout  << "9. Enter New Faculty" << endl;

    cin >> userOption;

    if(userOption == 1){
      masterStu->printStudents(masterStu->studentTree->root);
    }

    if(userOption == 7){
      int id = 0;
      string name = "";
      string grade = "";
      string major = "";
      double gpa = 0.0;
      int advisorID = 0;

      cout << "Enter Student's ID: " << endl;
      cin >> id;

      cout << "Enter Student's Name: " << endl;
      cin >> name;

      cout << "Enter Student's Grade: " << endl;
      cin >> grade;

      cout << "Enter Student's Major: " << endl;
      cin >> major;

      cout << "Enter Student's GPA: " << endl;
      cin >> gpa;

      cout << "Enter Student's Advisor's ID: " << endl;
      cin >> advisorID;

      Student *newStudent = new Student(id, name, grade, major, gpa, advisorID);
      masterStu->addStudent(newStudent);

    }

    else if(userOption == 8){
      int id = 0;
      cout << "Enter ID Of Student To Be Deleted: " << endl;
      cin >> id;
      Student *newStudent = new Student();
      newStudent->setID(id);
      masterStu->deleteStudent(newStudent);

    }
  }
}
