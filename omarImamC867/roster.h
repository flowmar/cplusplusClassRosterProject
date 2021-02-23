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
public:
    Student* classRosterArray[];
    

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
