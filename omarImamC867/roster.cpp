//
//  roster.cpp
//  omarImamC867
//
//  Created by Omar Imam on 2/10/21.
//

#include "roster.h"

using namespace std;

// Default Constructor
//Roster::Roster(){};
//    Student classRosterArray[Roster::NUMBER_OF_STUDENTS] = {};

Roster::Roster(){
    Student *classRosterArray[INITIAL_NUMBER_OF_STUDENTS];

//    // Create an array of 5 Student objects
//    Student classRosterArray[INITIAL_NUMBER_OF_STUDENTS];
//
    for (int e = 0; e < INITIAL_NUMBER_OF_STUDENTS; e++){
        
//        cout << "Student array: "  << &studentArray[e] << endl;
        
    }
    // Create an array of 5 pointers to the array of student objects
    
   
   
    // Point the array of pointers to the members of the studentArray
    for(int u = 0; u < INITIAL_NUMBER_OF_STUDENTS; u++){
        classRosterArray[u] = new Student();
        cout << "Student array &: " << classRosterArray[u] << endl;
        cout << "Pointer array value: " << &classRosterArray[u] << endl;
    }


// For each entry in the studentData Array
for(int k = 0; k < INITIAL_NUMBER_OF_STUDENTS; k++){
    //cout << "\nStudent " << k << endl;
    // Take the studentData String and put it into a variable
    string dataString = studentDataStrings[k];
    // Place the index of the first comma into a variable
    size_t delimiter = dataString.find(",");
    // Set the studentId to the characters at index 0 to the delimiter
    string tempStringStudentId = dataString.substr(0, delimiter);
    // Set the current student's ID to the found string
    classRosterArray[k]->setStudentId(tempStringStudentId);
    
    //cout << "Student ID:" << classRosterArray[k].getStudentId() << endl;
    
    // Add 1 to the index of the delimiter, this is where we begin the search
    size_t begin = delimiter + 1;
    // Find the index of the next comma and put it into the variable, begin the search at index "begin"
    delimiter = dataString.find(",", begin);
    string tempStringFirstName = dataString.substr(begin, delimiter - begin);
    // Set the current student's firstName to the found string
    classRosterArray[k]->setFirstName(tempStringFirstName);
    
        //// cout << "First Name: " << classRosterArray[k].getStudentId() << endl;
    
    // Repeat the process with lastName
    begin = delimiter + 1;
    delimiter = dataString.find(",", begin);
    string tempStringLastName = dataString.substr(begin, delimiter - begin);
    classRosterArray[k]->setLastName(tempStringLastName);
    
        // cout << "Last Name: " << classRosterArray[k].getLastName() << endl;
    
    // Repeat the process with email address
    begin = delimiter + 1;
    delimiter = dataString.find(",", begin);
    string tempStringEmail = dataString.substr(begin, delimiter - begin);
    classRosterArray[k]->setEmailAddress(tempStringEmail);
    
        // cout << "Email: " << classRosterArray[k].getEmail() << endl;
    
    // Repeat with age, parsing the string as an int
    begin = delimiter + 1;
    delimiter = dataString.find(",", begin);
    string tempStringAge = dataString.substr(begin, delimiter - begin);
    // Convert the string into an integer to use the setAge function
    classRosterArray[k]->setAge(std::stoi(tempStringAge));
    
        // cout << "Age: " << classRosterArray[k].getAge() << endl;
    
    // Then, take the next 3 values and put them into an array for numberOfDays
    // Create an array to hold the number of days
    int numberOfDays[NUMBER_OF_PROGRAMS];
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
    classRosterArray[k]->setNumDaysToCompleteCourse(numberOfDays);
    
//        int* numOfDays = classRosterArray[k]->getNumDaysToCompleteCourse();
//        for(int n = 0; n < Student::NUMBER_OF_COURSES; n++){
//             cout << "COURSE " << n+1 << " " << numOfDays[n] << endl;
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
    
    
    classRosterArray[k]->setDegreeProgram(newProgram);
//        cout << "DEGREE: " << classRosterArray[k].getDegreeProgram() << endl;
    classRosterArray[k]->print();
};
    return;
}

// Add a new student to the roster
void Roster::add(string newId, string newFirstName, string newLastName, string newEmail, int newAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram newProgram){
    
    // Create a new student object
    Student newStudent;
    
    // Create an array out of the number of days that were passed to the function
    int courseDays[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    
    // Create an array of pointers to the courseDays array elements
    int* coursePtrArray[Student::NUMBER_OF_COURSES];
    for(int c = 0; c < Student::NUMBER_OF_COURSES; c++){
        coursePtrArray[c] = &courseDays[c];
    };
    
    // Set the properties of the new student
    newStudent.setStudentId(newId);
    newStudent.setFirstName(newFirstName);
    newStudent.setLastName(newLastName);
    newStudent.setEmailAddress(newEmail);
    newStudent.setAge(newAge);
    newStudent.setDegreeProgram(newProgram);
    newStudent.setNumDaysToCompleteCourse(*coursePtrArray);
    
    // Create a bigger array, copy everything from the old array to the new one, and add this new entry
    // Since we are adding 1 to the number of students in the roster, place that value into a variable
    currentNumberOfStudents = currentNumberOfStudents + 1;
    
    // Create a new array for the updated class roster, the size of which is initialized with the variable above
    Student* newClassRosterArray[currentNumberOfStudents];
    
    // Copy the students that are already in the roster over to the new roster, when the loop reaches the last student, add the new student that was created above to the roster
    for(int f = 0; f < currentNumberOfStudents; f++){
        if(f == currentNumberOfStudents - 1){
            newClassRosterArray[f] = &newStudent;
        } else {
        newClassRosterArray[f] = classRosterArray[f];
        }
    };
    cout << "NewclassRosterArray" << newClassRosterArray << endl;
};

// Destructor
Roster::~Roster(){};

// Remove a student from the roster by Id
void Roster::remove(string removeId){
    cout << "REMOVE: " << removeId << endl;
    return;
};

// Print all students in the roster
void Roster::printAll(){
    
    for(int h = 0; h < currentNumberOfStudents; h++){
        
        classRosterArray[h]->print();
        cout << "YESSSS" << endl;
    }
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
