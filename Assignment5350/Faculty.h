#include <iostream>
using namespace std;

class Faculty{
  public:
    Faculty();
    Faculty(int facultyID, string facultytName, string facultyLevel, string facultyDptmnt);
    ~Faculty();

    //Get Functions
    int getID(); //Returns Faculty ID
    string getName(); //Returns Faculty Name
    string getLevel(); //Returns Faculty Level
    string getDepartment(); //Returns Faculty Department
    int getAdviseeIDs(); //Returns Advisee IDs

    //Set Functions
    void setID(int facultyID); //Sets Faculty ID
    void setName(string facultyName); //Sets Faculty ID
    void setLevel(string facultyLevel); //Sets Faculty level
    void setDepartment(string facultyDptmnt); //Sets Faculty Department

    //Student Variables
    int id;
    string name;
    string level;
    string department;
};
