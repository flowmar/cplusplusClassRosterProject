//
//  roster.h
//  omarImamC867
//
//  Created by Omar Imam on 2/10/21.
//

#ifndef roster_h
#define roster_h

#include <stdio.h>
#include "student.cpp"





class Roster {
private:
    const static int INITIAL_NUMBER_OF_STUDENTS = 5;
    
public:
    
    const string studentDataStrings[INITIAL_NUMBER_OF_STUDENTS] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Omar,Imam,oimam@my.wgu.edu,31,23,14,35,SOFTWARE" };
    
    Student *classRosterArray[INITIAL_NUMBER_OF_STUDENTS];
    int currentNumberOfStudents = INITIAL_NUMBER_OF_STUDENTS;
    
    void add(string newId, string newFirstName, string newLastName, string newEmail, int newAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram newProgram);
    void remove(string removeId);
    void printAll();
    void printAverageDaysInCourse(string studentIdQuery);
    void printInvalidEmails();
    
    // Constructor and Destructor
    Roster();
    Roster(std::string studentData[]);
    ~Roster();
};

#endif /* roster_h */

