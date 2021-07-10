//
//  student.h
//  omarImamC867
//
//  Created by Omar Imam on 2/10/21.
//

#ifndef student_h
#define student_h

#include <string>
#include <stdio.h>
#include "degree.h"

using namespace std;

class Student {
    // Private class members
private:
    string studentId;
    string firstName;
    string lastName;
    string email;
    DegreeProgram degreeProgram;
    int age;
    int numDaysToCompleteCourses[3];
    int* numDaysPtr = nullptr;

public:
    static const int NUMBER_OF_COURSES = 3;
    
    // Print function
    void print();
    
    // Accessors
    string getStudentId() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmail() const;
    string getDegreeProgram() const;
    int getAge() const;
    string getNumDaysToCompleteCourse();
    

    // Mutators
    void setStudentId(string stuId);
    void setFirstName(string fName);
    void setLastName(string lName);
    void setEmailAddress(string emailAddress);
    void setDegreeProgram(DegreeProgram program);
    void setAge(int studentAge);
    void setNumDaysToCompleteCourse(int* numberOfDaysPointer);
    
    // Constructors and Destructor
    Student();
    ~Student();
    Student(string studentId, string firstName, string lastName, string email, DegreeProgram degreeProgram, int age, int numDaysToCompleteCourse[NUMBER_OF_COURSES], int* numDaysPtr);
    
    
};



#endif /* student_h */
