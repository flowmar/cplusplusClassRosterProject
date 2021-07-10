//
//  main.cpp
//  omarImamC867
//
//  Created by Omar Imam on 2/10/21.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <array>
#include "roster.cpp"


using namespace std;

int main() {
    
    // Print Author Info - course title, programming language, WGUstudent ID, name
    
    cout << "Course Title: Scripting and Programming Applications"<< endl;
    cout << "Programming Language: C++" << endl;
    cout << "StudentID: 001298971" << endl;
    cout << "Name: Omar Imam" << endl;
    cout << endl;
    
    // Create an instance of the Roster class
    // Add each student to the roster
    Roster classRoster;
    
//    classRoster.add("A8", "Person", "Person", "person@gmailcom", 5, 10, 45, 11, DegreeProgram::NETWORK);
    
    // Print entire roster
    classRoster.printAll();
    
    // Print invalid email addresses
    classRoster.printInvalidEmails();
    cout << endl;
    
    // Loop through classRosterArray and for each element:
    for(int g = 0; g < Roster::currentNumberOfStudents; g++)
    {
        classRoster.Roster::printAverageDaysInCourse(classRosterArray1[g].getStudentId());
    }
    
    // Print out all students who are enrolled in the SOFTWARE degree program
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    
    // Remove Student with ID A4
    classRoster.remove("A4");
    
    // Print the whole roster
    classRoster.printAll();
    
    // Display an error message
    classRoster.remove("A4");
    
    
    
   
    
    // Create an instance of the Roster class
//    Roster myRoster = new Roster(studentData);
    
//    myRoster.remove("A1");
    
    
    // Add each student to the class Roster
    
    // classRoster.printAll()
    
    // classRoster.printInvalidEmails()
    
    // classRoster.printByDegreeProgram
    
    // classRoster.remove("A3") -- implement Destructor function
    
    // classRoster.printAll()
    
    // classRoster.remove("A3") (should give an error)
    
    
    return 0;
}
