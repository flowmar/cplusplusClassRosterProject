# cplusplusClassRosterProject

This was a school project which entailed creating a class roster application which:
1. Contained a `Student` class with the variables:
   - student ID
   - first name
   - last name
   - email address
   - age
   - array of number of days to complete each course
   - degree program
2. Contained the following functions in the Student class:
   - an accessor for each instance variable
   - a mutator for each instance variable
   - constructor using all of the input parameters provided in the table
   - `print()` to print specific student data
3. A Roster class:
   - Create an array of pointers, `classRosterArray`, to hold the data provided in the `studentData` table
   - Create a `Student` object for each student in the data table and populate the `classRosterArray`
    - Parse each set of data identified in the `studentData` table
    - Add each `Student` object to the `classRosterArray`
   - The following functions:
    - add() - sets the instance variables and updates the roster
    - remove() - removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
    - printAll() - prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student
    - printAverageDaysInCourse() - correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter
    - printInvalidEmails() - verifies student email addresses and displays all invalid email addresses to the user
    - printByDegreeProgram() - that prints out student information for a degree program specified by an enumerated type
4. Demonstrate the required functionality by adding a main() function
   - Create an instance of the `Roster` class called `classRoster`
   - Add each student to `classRoster`
   - `classRoster.printAll();

      classRoster.printInvalidEmails();

 

    //loop through classRosterArray and for each element:

    classRoster.printAverageDaysInCourse(/*current_object's student id*/);



    Note: For the current_object's student id, use an accessor (i.e., getter) for the classRosterArray to access the student id.



    classRoster.printByDegreeProgram(SOFTWARE);

    classRoster.remove("A3");

    classRoster.printAll();

    classRoster.remove("A3");

    //expected: the above line should print a message saying such a student with this ID was not found.`
5. Implement the destructor to release the memory that was allocated dynamically in `Roster`
6. Define an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.
