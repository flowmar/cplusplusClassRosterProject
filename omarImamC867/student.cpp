//
//  student.cpp
//  omarImamC867
//
//  Created by Omar Imam on 2/10/21.
//
#include<iostream>
#include "student.h"

using namespace std;


// Default Constructor
Student::Student(){
    cout << "Default Constructor called!" << endl;
    studentId = "";
    firstName = "";
    lastName = "";
    email = "";
    degreeProgram = DegreeProgram::NONE;
    age = 0;
    for(int i = 0; i < Student::NUMBER_OF_COURSES; i++){
        numDaysToCompleteCourse[i] = 0;
    }
    return;
}

// Student Constructor with parameters
Student::Student(string stuId, string fname, string lname, string emailAddress, DegreeProgram program, int studentAge, int* numDays[Student::NUMBER_OF_COURSES]){
    studentId = stuId;
    firstName = fname;
    lastName = lname;
    email = emailAddress;
    degreeProgram = program;
    age = studentAge;
    for(int j = 0; j < Student::NUMBER_OF_COURSES; j++){
        numDaysToCompleteCourse[j] = *numDays[j];
    }
    return;
};

// Student Destructor
Student::~Student(){};

// Definitions for mutators (setters)
void Student::setStudentId(string stuId){
    studentId = stuId;
};
void Student::setFirstName(string fName){
    firstName = fName;
};
void Student::setLastName(string lName){
    lastName = lName;
};

void Student::setEmailAddress(string emailAddress){
    email = emailAddress;
}
void Student::setDegreeProgram(DegreeProgram program){
    degreeProgram = program;
};
void Student::setAge(int studentAge){
    age = studentAge;
};
void Student::setNumDaysToCompleteCourse(int* numDays){
    for(int m = 0; m < NUMBER_OF_COURSES; m++){
        numDaysToCompleteCourse[m] = numDays[m];
    }
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

string Student::getDegreeProgram() const {
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

int* Student::getNumDaysToCompleteCourse() {
    return numDaysToCompleteCourse;
};

// Print Function Definition - Prints an individual student's information
void Student::print(){
    cout << "Student Information: " << endl;
    cout << "Student ID: " << this->getStudentId() << endl;
    cout << "First Name: " << Student::getFirstName() << endl;
    cout << "Last Name: " << this->getLastName() << endl;
    cout << "Email Address: " << getEmail() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Number of Days to Complete First Three Courses: " << endl;
    int tempArray[] = {0, 0, 0};
    int* numOfDays = this->getNumDaysToCompleteCourse();
    for(int w = 0; w < Student::NUMBER_OF_COURSES; w++){
        tempArray[w] = numOfDays[w];
        cout << "Course " << w+1 << " " << numOfDays[w] << endl;
    };
    cout << "Degree Program: " << Student::getDegreeProgram() << endl;
    
    
}
