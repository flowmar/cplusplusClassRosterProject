//
//  roster.cpp
//  omarImamC867
//
//  Created by Omar Imam on 2/10/21.
//

#include "roster.h"

using namespace std;

// Constructor
Roster::Roster(){
    Student classRosterArray[] = {};
};

Roster::Roster(std::string studentData[]){
    Student classRosterArray[5];
    
    std::string studentDataStrings[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Omar,Imam,oimam@my.wgu.edu,31,23,14,35,SOFTWARE"};

    // Create an array of 5 Student objects
    Student studentArray[5];
    // Create an array of 5 pointers to the array of student objects
//    Student* classRosterArray[5];
    // Point the array of pointers to the members of the studentArray
    for(int u = 0; u < 5; u++){
        classRosterArray[u] = &studentArray[u];
    }


// For each entry in the studentData Array
for (int k = 0; k < 5; k++){
    cout << "\nStudent " << k << endl;
    // Take the studentData String and put it into a variable
    string dataString = studentData[k];
    // Place the index of the first comma into a variable
    size_t delimiter = dataString.find(",");
    // Set the studentId to the characters at index 0 to the delimiter
    string tempStringStudentId = dataString.substr(0, delimiter);
    // Set the current student's ID to the found string
    studentArray[k].setStudentId(tempStringStudentId);
    
//        cout << "Student ID:" << studentArray[k].getStudentId() << endl;
    
    // Add 1 to the index of the delimiter, this is where we begin the search
    size_t begin = delimiter + 1;
    // Find the index of the next comma and put it into the variable, begin the search at index "begin"
    delimiter = dataString.find(",", begin);
    string tempStringFirstName = dataString.substr(begin, delimiter - begin);
    // Set the current student's firstName to the found string
    studentArray[k].setFirstName(tempStringFirstName);
    
//        cout << "First Name: " << studentArray[k].getStudentId() << endl;
    
    // Repeat the process with lastName
    begin = delimiter + 1;
    delimiter = dataString.find(",", begin);
    string tempStringLastName = dataString.substr(begin, delimiter - begin);
    studentArray[k].setLastName(tempStringLastName);
    
//        cout << "Last Name: " << studentArray[k].getLastName() << endl;
    
    // Repeat the process with email address
    begin = delimiter + 1;
    delimiter = dataString.find(",", begin);
    string tempStringEmail = dataString.substr(begin, delimiter - begin);
    studentArray[k].setEmailAddress(tempStringEmail);
    
//        cout << "Email: " << studentArray[k].getEmail() << endl;
    
    // Repeat with age, parsing the string as an int
    begin = delimiter + 1;
    delimiter = dataString.find(",", begin);
    string tempStringAge = dataString.substr(begin, delimiter - begin);
    // Convert the string into an integer to use the setAge function
    studentArray[k].setAge(std::stoi(tempStringAge));
    
//        cout << "Age: " << studentArray[k].getAge() << endl;
    
    // Then, take the next 3 values and put them into an array for numberOfDays
    // Create an array to hold the number of days
    int numberOfDays[3];
    begin = delimiter + 1;
    delimiter = dataString.find(",", begin);
    string tempStringDays = dataString.substr(begin, delimiter - begin);
    // Place the first number of days into the array
    numberOfDays[0] = std::stoi(tempStringDays);
    
    begin = delimiter + 1;
    delimiter = dataString.find(",", begin);
    tempStringDays = dataString.substr(begin, delimiter - begin);
    // Place the second number of days into the array
    numberOfDays[1] = std::stoi(tempStringDays);
    
    begin = delimiter + 1;
    delimiter = dataString.find(",", begin);
    tempStringDays = dataString.substr(begin, delimiter - begin);
    // Place the third number of days into the array
    numberOfDays[2] = std::stoi(tempStringDays);
    
    // Set the number of days array for the current student
    studentArray[k].setNumDaysToCompleteCourse(numberOfDays);
    
//        int* numOfDays = studentArray[k].getNumDaysToCompleteCourse();
//        for(int n = 0; n < Student::NUMBER_OF_COURSES; n++){
////            cout << "COURSE " << n+1 << " " << numOfDays[n] << endl;
//            break;
//        }
    
    // Take the last value and put it into Degreeplan
    begin = delimiter + 1;
    delimiter = dataString.find(",", begin);
    string tempStringDegree = dataString.substr(begin, delimiter - begin);
    DegreeProgram newProgram;
    
    if(tempStringDegree == "SECURITY"){
        newProgram = DegreeProgram::SECURITY;
    }
    else if (tempStringDegree == "NETWORK"){
        newProgram = DegreeProgram::NETWORK;
    }
    else if (tempStringDegree == "SOFTWARE"){
        newProgram = DegreeProgram::SOFTWARE;
    }
    else {
        newProgram = DegreeProgram::NONE;
    }
    
    
    studentArray[k].setDegreeProgram(newProgram);
//        cout << "DEGREE: " << studentArray[k].getDegreeProgram() << endl;
    studentArray[k].print();
};
    return;
};

// Add a new student to the roster
void Roster::add(string newId, string newFirstName, string newLastName, string newEmail, int newAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram newProgram){
    
    Student newStudent;
    
    int courseDays[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    int* coursePtr[Student::NUMBER_OF_COURSES];
    for(int c = 0; c < Student::NUMBER_OF_COURSES; c++){
        coursePtr[c] = &courseDays[c];
    };
    
    
    newStudent.setStudentId(newId);
    newStudent.setFirstName(newFirstName);
    newStudent.setLastName(newLastName);
    newStudent.setEmailAddress(newEmail);
    newStudent.setAge(newAge);
    newStudent.setDegreeProgram(newProgram);
    newStudent.setNumDaysToCompleteCourse(*coursePtr);
    
    // Create a bigger array, copy everything from the old array to the new one, and add this new entry
};

// Destructor
Roster::~Roster(){};

// Remove a student from the roster by Id
void Roster::remove(string removeId){
    return;
};

// Print all students in the roster
void Roster::printAll(){
    return;
};

// Print the average number of days for a given student ID
void Roster::printAverageDaysInCourse(string studentIdQuery){
    return;
};

// Validate emails, print the ones that are not formatted correctly.
void Roster::printInvalidEmails(){
    return;
};

// Print out student information for a degree program specified by a a Degree Program Enum
void printByDegreeProgram(DegreeProgram programQuery){
    return;
};
