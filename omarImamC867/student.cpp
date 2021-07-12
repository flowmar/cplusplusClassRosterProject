//
//  student.cpp
//  omarImamC867
//
//  Created by Omar Imam on 2/10/21.
//
#include<iostream>
#include "student.h"

using namespace std;


//// Default Constructor
Student::Student(){
//    cout << "Default Constructor called!" << endl;
    string studentId = "";
    string firstName = "";
    string lastName = "";
    string email = "";
    DegreeProgram program = DegreeProgram::NONE;
    int age = 0;
    int numDaysToCompleteCourses[Student::NUMBER_OF_COURSES];
//    int* numDaysPtr = &numDays[0];
    for(int i = 0; i < Student::NUMBER_OF_COURSES; i++)
    {
        numDaysToCompleteCourses[i] = 0;
    }
    return;
};

// Student Constructor with parameters
Student::Student(string stuId, string fname, string lname, string emailAddress, DegreeProgram program, int studentAge, int numDaysToCompleteCourse[Student::NUMBER_OF_COURSES], int* numDaysPtr)
{
    studentId = stuId;
    firstName = fname;
    lastName = lname;
    email = emailAddress;
    degreeProgram = program;
    age = studentAge;
    numDaysToCompleteCourses[0] = numDaysToCompleteCourse[0];
    numDaysToCompleteCourses[1] = numDaysToCompleteCourse[1];
    numDaysToCompleteCourses[2] = numDaysToCompleteCourse[2];
    numDaysPtr = &numDaysToCompleteCourse[0];
    
    this->print();
    return;
};

// Student Destructor
Student::~Student(){
//    cout << "Student Deleted!" << endl;
};

// Definitions for mutators (setters)
void Student::setStudentId(string stuId){
    studentId = stuId;
    return;
};
void Student::setFirstName(string fName){
    firstName = fName;
    return;
};
void Student::setLastName(string lName){
    lastName = lName;
    return;
};

void Student::setEmailAddress(string emailAddress){
    email = emailAddress;
    return;
}
void Student::setDegreeProgram(DegreeProgram program){
    degreeProgram = program;
    return;
};
void Student::setAge(int studentAge){
    age = studentAge;
    return;
};
void Student::setNumDaysToCompleteCourse(int* numberOfDaysPointer){
    // Loop through the numberOfDays array by using the dereferenced numberOfDaysPointer and set the numDaysToComplete
    // courses values
    for(int l = 0; l < 3; l++)
    {
        numDaysToCompleteCourses[l] = *(numberOfDaysPointer + l);
    }
    
    return;
};


// Definitions for accessors (getters)
string Student::getStudentId() const {
    return studentId;
};

string Student::getFirstName() const {
    return firstName;
};

string Student::getLastName() const {
    return lastName;
};

string Student::getEmail() const {
    return email;
};

DegreeProgram Student::getDegreeProgram() const {
    return degreeProgram;
};

string Student::getDegreeProgramString() const {
    if(degreeProgram == DegreeProgram::SOFTWARE){
        return "SOFTWARE";
    } else if (degreeProgram == DegreeProgram::NETWORK) {
        return "NETWORK";
    } else if (degreeProgram == DegreeProgram::SECURITY) {
        return "SECURITY";
    } else {
        return "NONE";
    }
};

int Student::getAge() const {
    return age;
};

string Student::getNumDaysToCompleteCourseString()
{
    string values = std::to_string(numDaysToCompleteCourses[0]) + ", " + std::to_string(numDaysToCompleteCourses[1]) + ", " + std::to_string(numDaysToCompleteCourses[2]);
    return values;
};

// Print Function Definition - Prints an individual student's information
void Student::print(){
//    cout << "Student Information: " << endl;
//    cout << "Student ID: " << this->getStudentId() << endl;
//    cout << "First Name: " << this->getFirstName() << endl;
//    cout << "Last Name: " << this->getLastName() << endl;
//    cout << "Email Address: " << this->getEmail() << endl;
//    cout << "Age: " << this->getAge() << endl;
//    cout << "Number of Days to Complete First Three Courses: " << this->getNumDaysToCompleteCourseString() << endl;
//    cout << "Degree Program: " << this->getDegreeProgramString() << endl;
//    cout << endl;
    
    cout << this->getStudentId() << "\tFirst Name: " << this->getFirstName() << "\tLast Name: " << this->getLastName() << "\tAge: " << this->getAge() << "\tEmail: " << this->getEmail() << "\tdaysInCourse: {" << this->getNumDaysToCompleteCourseString() << "}" << "\tDegree Program: " << this->getDegreeProgramString() << endl;
    
    
}

