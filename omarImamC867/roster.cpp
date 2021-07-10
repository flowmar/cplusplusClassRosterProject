//
//  roster.cpp
//  omarImamC867
//
//  Created by Omar Imam on 2/10/21.
//

#include "roster.h"
#include "student.h"
#include <vector>

// Default Constructor

// Array of students
Student Roster::studentArray[INITIAL_NUMBER_OF_STUDENTS];


// Array of pointers
Student* classRosterArray1 = new Student [Roster::INITIAL_NUMBER_OF_STUDENTS];
Student* Roster::classRosterArray[Roster::INITIAL_NUMBER_OF_STUDENTS];
//{new Student(), new Student(), new Student(), new Student(), new Student()};

int Roster::currentNumberOfStudents = Roster::INITIAL_NUMBER_OF_STUDENTS;

Roster::Roster()
{
const string studentDataStrings[INITIAL_NUMBER_OF_STUDENTS] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Omar,Imam,oimam@my.wgu.edu,31,23,14,35,SOFTWARE" };
    
    // Assign the addresses of the Students to the pointers in the classRosterArray1
    int daysNumber[] = {5, 6, 7};
    int *ppt = new int[3];
    
    // Parse the data in studentDataStrings
    for(int u = 0; u < INITIAL_NUMBER_OF_STUDENTS; u++ )
    {
        
        // Take the studentData String and put it into a variable
        string dataString = studentDataStrings[u];
        
        // Place the index of the first comma into a variable
        size_t delimiter = dataString.find(",");
        
        // Set the studentId to the characters at index 0 to the delimiter
        string tempStringStudentId = dataString.substr(0, delimiter);
        
        // Set the current student's ID to the found string
//        studentArray[u].setStudentId(tempStringStudentId);
        
        // Add 1 to the index of the delimiter, this is where we begin the search
        size_t begin = delimiter + 1;
        
        // Find the index of the next comma and put it into the variable, begin the search at index "begin"
        delimiter = dataString.find(",", begin);
        string tempStringFirstName = dataString.substr(begin, delimiter - begin);
        
        // Set the current student's firstName to the found string
//        studentArray[k].setFirstName(tempStringFirstName);

//        cout << "First Name: " << studentArray[k].getFirstName() << endl;

        // Repeat the process with lastName
        begin = delimiter + 1;
        delimiter = dataString.find(",", begin);
        string tempStringLastName = dataString.substr(begin, delimiter - begin);
//        studentArray[k].setLastName(tempStringLastName);

//        cout << "Last Name: " << studentArray[k].getLastName() << endl;

        // Repeat the process with email address
        begin = delimiter + 1;
        delimiter = dataString.find(",", begin);
        string tempStringEmail = dataString.substr(begin, delimiter - begin);
//        studentArray[k].setEmailAddress(tempStringEmail);

//        cout << "Email: " << studentArray[k].getEmail() << endl;

        // Repeat with age, parsing the string as an int
        begin = delimiter + 1;
        delimiter = dataString.find(",", begin);
        string tempStringAge = dataString.substr(begin, delimiter - begin);
        
        // Convert the string into an integer to use the setAge function
//        studentArray[k].setAge(std::stoi(tempStringAge));

//        cout << "Age: " << studentArray[k].getAge() << endl;

        // Then, take the next 3 values and put them into an array for numberOfDays
        // Create an array to hold the number of days
        int numberOfDays[3];
        
        begin = delimiter + 1;
        delimiter = dataString.find(",", begin);
        string tempStringDays = dataString.substr(begin, delimiter - begin);
        
        // Place the first number of days into the array
        numberOfDays[0] = std::stoi(tempStringDays);
//        cout << "Number of Days (1): " +std::to_string(numberOfDays[0]) << endl;

        begin = delimiter + 1;
        delimiter = dataString.find(",", begin);
        tempStringDays = dataString.substr(begin, delimiter - begin);
        
        // Place the second number of days into the array
        numberOfDays[1] = std::stoi(tempStringDays);
//        cout << "Number of Days (2): " + std::to_string(numberOfDays[1]) << endl;

        begin = delimiter + 1;
        delimiter = dataString.find(",", begin);
        tempStringDays = dataString.substr(begin, delimiter - begin);
        
        // Place the third number of days into the array
        numberOfDays[2] = std::stoi(tempStringDays);
//        cout << "Number of Days (3): " + std::to_string(numberOfDays[2]) << endl;
        
        // Create a pointer to the numberOfDays array
        int* numberOfDaysPointer = &numberOfDays[0];
        

        // Set the number of days array for the current student
//        studentArray[k].setNumDaysToCompleteCourse(numberOfDaysPointer);
        
//        string daysToComplete = studentArray[k].getNumDaysToCompleteCourse();
//        cout << "Number of Days to Complete Courses: " << daysToComplete << endl;

        // Take the last value and put it into Degreeplan
        begin = delimiter + 1;
        delimiter = dataString.find(",", begin);
        string tempStringDegree = dataString.substr(begin, delimiter - begin);
        DegreeProgram newProgram;

        if(tempStringDegree == "SECURITY")
        {
            newProgram = DegreeProgram::SECURITY;
        }
        else if (tempStringDegree == "NETWORK")
        {
            newProgram = DegreeProgram::NETWORK;
        }
        else if (tempStringDegree == "SOFTWARE")
        {
            newProgram = DegreeProgram::SOFTWARE;
        }
        else
        {
            newProgram = DegreeProgram::NONE;
        }


//        studentArray[k].setDegreeProgram(newProgram);
//        cout << "DEGREE: " << studentArray[k].getDegreeProgram() << endl;
//        studentArray[k].print();
        
        
        
        classRosterArray1[u] = Student(tempStringStudentId, tempStringFirstName, tempStringLastName, tempStringEmail, newProgram, std::stoi(tempStringAge), numberOfDays, numberOfDaysPointer);
//        cout << "classRosterArray1[u]: " << classRosterArray1[u] << endl;
//        classRosterArray1[u].print();
    }
    
//    int theDays[3];
//    theDays[0] = 1;
//    theDays[1] = 2;
//    theDays[2] = 5;
//
//    int* tptr = new int[3];
//    for (int l = 0; l < 3; l++){
//        tptr[l] = l;
//    }
//
//    cout << "tptr: " << tptr[2] << endl;
//
//    Student *ptr = new Student[3];
//
//    Student* student1[] = {new Student("A10", "Harol", "duder", "person@gmail.net", DegreeProgram::SOFTWARE, 64, theDays, tptr), new Student(), new Student()};
    
    
//    delete student1[0];
//    delete student1[1];
//    delete student1[2];
//    cout << "Student IDIDIDIDIDIDIDID:  " << student1[1]->getStudentId();
//    cout << "Student IDIDIDIDIDIDIDID:  " << student1[1]->getStudentId();
//    delete [] ptr;
    
    // Assign the address of the Students to the pointers in the classRosterArray
    for (int f = 0; f < INITIAL_NUMBER_OF_STUDENTS; f++)
    {
        classRosterArray[f] = &studentArray[f];
    }
    
    // Parse each set of data
    // For each entry in the studentData Array
    for (int k = 0; k < INITIAL_NUMBER_OF_STUDENTS; k++)
    {
//        cout << "\nStudent " << k + 1 << endl;
        
        // Take the studentData String and put it into a variable
        string dataString = studentDataStrings[k];
        
        // Place the index of the first comma into a variable
        size_t delimiter = dataString.find(",");
        
        // Set the studentId to the characters at index 0 to the delimiter
        string tempStringStudentId = dataString.substr(0, delimiter);
        
        // Set the current student's ID to the found string
        studentArray[k].setStudentId(tempStringStudentId);


//        cout << "Student ID: " << studentArray[k].getStudentId() << endl;

        // Add 1 to the index of the delimiter, this is where we begin the search
        size_t begin = delimiter + 1;
        
        // Find the index of the next comma and put it into the variable, begin the search at index "begin"
        delimiter = dataString.find(",", begin);
        string tempStringFirstName = dataString.substr(begin, delimiter - begin);
        
        // Set the current student's firstName to the found string
        studentArray[k].setFirstName(tempStringFirstName);

//        cout << "First Name: " << studentArray[k].getFirstName() << endl;

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
//        cout << "Number of Days (1): " +std::to_string(numberOfDays[0]) << endl;

        begin = delimiter + 1;
        delimiter = dataString.find(",", begin);
        tempStringDays = dataString.substr(begin, delimiter - begin);
        
        // Place the second number of days into the array
        numberOfDays[1] = std::stoi(tempStringDays);
//        cout << "Number of Days (2): " + std::to_string(numberOfDays[1]) << endl;

        begin = delimiter + 1;
        delimiter = dataString.find(",", begin);
        tempStringDays = dataString.substr(begin, delimiter - begin);
        
        // Place the third number of days into the array
        numberOfDays[2] = std::stoi(tempStringDays);
//        cout << "Number of Days (3): " + std::to_string(numberOfDays[2]) << endl;
        
        // Create a pointer to the numberOfDays array
        int* numberOfDaysPointer = &numberOfDays[0];
        

        // Set the number of days array for the current student
        studentArray[k].setNumDaysToCompleteCourse(numberOfDaysPointer);
        
        string daysToComplete = studentArray[k].getNumDaysToCompleteCourse();
//        cout << "Number of Days to Complete Courses: " << daysToComplete << endl;

        // Take the last value and put it into Degreeplan
        begin = delimiter + 1;
        delimiter = dataString.find(",", begin);
        string tempStringDegree = dataString.substr(begin, delimiter - begin);
        DegreeProgram newProgram;

        if(tempStringDegree == "SECURITY")
        {
            newProgram = DegreeProgram::SECURITY;
        }
        else if (tempStringDegree == "NETWORK")
        {
            newProgram = DegreeProgram::NETWORK;
        }
        else if (tempStringDegree == "SOFTWARE")
        {
            newProgram = DegreeProgram::SOFTWARE;
        }
        else
        {
            newProgram = DegreeProgram::NONE;
        }


        studentArray[k].setDegreeProgram(newProgram);
//        cout << "DEGREE: " << studentArray[k].getDegreeProgram() << endl;
//        studentArray[k].print();
    }

    return;
}

//// Add a new student to the roster
void Roster::add(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{

    // Create a new student object
    Student newStudent;
//
//
    // Create an array out of the number of days that were passed to the function
    int courseDays[] = {daysInCourse1, daysInCourse2, daysInCourse3};

    // Create a pointer to point to the memory location of the first courseDay
    int* coursePtr = &courseDays[0];


    // Set the properties of the new student
    newStudent.setStudentId(studentId);
    newStudent.setFirstName(firstName);
    newStudent.setLastName(lastName);
    newStudent.setEmailAddress(emailAddress);
    newStudent.setAge(age);
    newStudent.setDegreeProgram(degreeProgram);
    newStudent.setNumDaysToCompleteCourse(coursePtr);
    

    // Create a bigger array, copy everything from the old array to the new one, and add this new entry
    // Since we are adding 1 to the number of students in the roster, place that value into a variable
    currentNumberOfStudents += + 1;
    Student newStudentArray[currentNumberOfStudents];

    // Create a new array for the updated class roster, the size of which is initialized with the variable above
    Student *newClassRosterArray[currentNumberOfStudents];

    // Copy the students that are already in the roster over to the new roster, when the loop reaches the last student, add the new student that was created above to the roster
    for(int b = 0; b < currentNumberOfStudents; b++)
    {
        if(b == currentNumberOfStudents - 1){
//            cout << "&newStudent: " << &newStudent << endl;
            newStudentArray[b] = newStudent;
            newStudentArray[b].print();
        } else {
        newStudentArray[b] = studentArray[b];
            newStudentArray[b].print();
        }
    }
    
//    delete &classRosterArray1[0];
//    delete [] classRosterArray1;
    for(int v = 0; v < currentNumberOfStudents; v++)
    {
        delete &classRosterArray1[v];
    }
    delete [] &classRosterArray1;
    
    Student* classRosterArray1 = new Student[currentNumberOfStudents];
    
    for(int j = 0; j < currentNumberOfStudents -1; j++)
    {
        classRosterArray1[j] = newStudentArray[j];
        
        classRosterArray1[j].print();
    }
    classRosterArray1[5].print();
//    std::copy( studentArray, array+std::min((currentNumberOfStudents-1), currentNumberOfStudents, newArray));
//    for(int j = 0; j < currentNumberOfStudents -1; j++){
//        delete studentArray[j]
//    }
//    delete[] studentArray;
//    studentArray = newArray;
    
//    Student studentArray[] = {newStudentArray[0], newStudentArray[1], newStudentArray[2], newStudentArray[3], newStudentArray[4], newStudentArray[5], newStudentArray[6]};
    
       
};

// Destructor
Roster::~Roster(){};

// Remove a student from the roster by Id
void Roster::remove(string removeId){
    cout << "REMOVE: " << removeId << endl;
    // Find a student by ID number
    for(int p = 0; p < INITIAL_NUMBER_OF_STUDENTS; p++)
    {
        if(classRosterArray1[p].getStudentId() == removeId)
        {
            // Remove the student
//            classRosterArray1[p] = Student();
//            delete [] classRosterArray1;
//            delete &classRosterArray1[p];
            cout << "Student " << removeId << " deleted!" << endl;
            currentNumberOfStudents -= 1;
            cout << currentNumberOfStudents << endl;
        }
    }
    // Remove the student at the ID number location

    Roster::printAll();
    return;
};



// Print all students in the roster
void Roster::printAll(){
//    // Loop through the classRosterArray to print out the values from each student
    for(int h =0; h < currentNumberOfStudents; h++)
    {
        cout << classRosterArray1[h].getStudentId() << "\tFirst Name: " << classRosterArray1[h].getFirstName() << "\tLast Name: " <<  classRosterArray1[h].getLastName() << "\tAge: " << classRosterArray1[h].getAge() <<"\tEmail: " << classRosterArray1[h].getEmail() << "\tdaysInCourse: {" << classRosterArray1[h].getNumDaysToCompleteCourse() << "}" << "\tDegree Program: " << classRosterArray1[h].getDegreeProgram() << endl;
        cout << endl;
        cout << endl;
        
    }
    
    return;
};

// Print the average number of days for a given student ID
void Roster::printAverageDaysInCourse(string studentId){
    for(int c = 0; c < currentNumberOfStudents; c++){
        if(studentArray[c].getStudentId() == studentId)
        {
            string days = studentArray[c].getNumDaysToCompleteCourse();
//            cout << "days: " << days << endl;
            
            // Find the first comma
            size_t delimiter = days.find(",");
            
            // Place the first number into the variable intDay1
            string day1 = days.substr(0, delimiter);
            int intDay1 = std::stoi(day1);
            
            // Begin 1 character past the delimiter
            size_t begin = delimiter + 1;
            string day2 = days.substr(begin, delimiter);
            int intDay2 = std::stoi(day2);
            
            // Begin the search 1 character past the delimiter
            begin = delimiter + 1;
            string day3 = days.substr(begin, begin+2);
            int intDay3 = std::stoi(day3);
            
            double sum = intDay1 + intDay2 + intDay3;
            double average = sum/3.0;
            
            cout << "Average number of days in courses: " << average << endl;
            cout << endl;
        }
    }
    return;
};

// Validate emails, print the ones that are not formatted correctly.
void Roster::printInvalidEmails()
{
    
    vector<string> invalidEmails;
    for (int w = 0; w < currentNumberOfStudents; w++)
    {
         static bool isValid = true;
        // Check for '@'
        string email = studentArray[w].getEmail();
//        cout << "email: " << email << endl;

            if(email.find('@') == -1)
            {
                isValid = false;
//                cout << "invalid: " << email << endl;
                invalidEmails.push_back(email);
            }

            if(email.find('.') == -1)
            {
                isValid = false;
//                cout << "invalid: " << email << endl;
                invalidEmails.push_back(email);
            }
        
           if(email.find(' ') != -1)
           {
               isValid = false;
//               cout << "invalid: " << email << endl;
               invalidEmails.push_back(email);
               
           }
        
    }
    
    invalidEmails.shrink_to_fit();
    
    cout << "Invalid emails: " << endl;
    
    for(int z = 0; z < invalidEmails.size(); z++)
    {
        cout << invalidEmails.at(z) << endl;
    }
    return;
};

// Print out student information for a degree program specified by a a Degree Program Enum
void Roster::printByDegreeProgram(DegreeProgram degreeProgram){
    
    std::vector<Student> foundStudents;
    string searchedProgram;
    // Change the degreeProgram to a string
    for(int p = 0; p < Roster::currentNumberOfStudents; p++)
    {
        
        if(degreeProgram == DegreeProgram::SOFTWARE)
        {
            searchedProgram = "SOFTWARE";
        } else if (degreeProgram == DegreeProgram::NETWORK)
        {
            searchedProgram = "NETWORK";
        } else if (degreeProgram == DegreeProgram::SECURITY)
        {
            searchedProgram =  "SECURITY";
        } else
        {
            searchedProgram =  "NONE";
        }
        
    }
    
    // Search through the studentArray for anyone that has the searched degree program chosen
    for(int q = 0; q < Roster::currentNumberOfStudents; q++)
    {
        if (Roster::studentArray[q].getDegreeProgram() == searchedProgram)
        {
            foundStudents.push_back(Roster::studentArray[q]);
        }
    }
    
    
    cout << "Students with degree program " << searchedProgram << ":" << endl;
    
//    foundStudents.at(0).print();
    for(int r = 0; r < foundStudents.size(); r++)
    {
        foundStudents.at(r).print();
    }

    return;
};

