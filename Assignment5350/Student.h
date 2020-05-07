#include <iostream>
using namespace std;

class Student{
  public:
    Student();
    Student(int studentID, string studentName, string studentGrade, string studentMajor, double studentGPA, int studentAdvisorID);
    ~Student();

    //Get Functions
    int getID(); //Returns Student ID
    string getName(); //Returns Student Name
    string getGrade(); //Returns Student's Grade
    string getMajor(); //Returns Student Major
    double getGPA(); //Returns Student's GPA
    int getAdvisorID(); //Returns ID of Student's advisor

    //Set Functions
    void setID(int id); //Set Student ID
    void setName(string name); //Set Student Name
    void setGrade(string grade); //Set Student Grade
    void setMajor(string major); //Set Student Major
    void setGPA(double gpa); //Set Student's GPA
    void setAdvisorID(int advisorID); //Set ID for Student's Advisor


    //Student Variables
    int id;
    string name;
    string grade; //Freshman, Sophomore, Junior, Senior
    string major;
    double gpa;
    int advisorID;

};
