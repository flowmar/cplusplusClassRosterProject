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
    static int const INITIAL_NUMBER_OF_STUDENTS = 5;
    static Student studentArray[INITIAL_NUMBER_OF_STUDENTS];
    static Student* classRosterArray1;
    static Student* classRosterArray[];
    static int currentNumberOfStudents;
    
//    static const std::string studentDataStrings[INITIAL_NUMBER_OF_STUDENTS];
    
    void add(string newId, string newFirstName, string newLastName, string newEmail, int newAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram newProgram);
    void remove(string removeId);
    void printAll() const;
    void printAverageDaysInCourse(string studentIdQuery) const;
    void printInvalidEmails() const;
    void printByDegreeProgram(DegreeProgram degreeProgram) const;
    
    // Constructor and Destructor
    Roster();
    ~Roster();
};

#endif /* roster_h */
