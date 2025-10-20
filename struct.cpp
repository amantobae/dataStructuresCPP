#include <iostream>
using namespace std;

int main() {
    /* Structures (also called structs) are a way to group several related variables into one place.
    Each variable in the structure is known as a member of the structure.
    Unlike an array, a structure can contain many different data types: int, string, bool, etc. */

    struct {
        int myNum; // Member (int variable)
        string myString; // Member (string variable)
    } myStructure; // Structure variable

    /* ACCESS STRUCTURE MEMBERS */
    // Assign values to the members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    /* ONE STRUCTURE IN MULTIPLE VARIABLES */
    struct {
        int myNum;
        string myString;
    } myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas

    /* NAMED STRUCTURES */
    struct car {
        string brand;
        string model;
        int year;
    };

    car myCar; // Declaration of the variable with "car" type

    myCar.brand = "Mercedes";
    myCar.model = "E-Class";
    myCar.year = 2019;

    /* CHALLENGE TASK */
    struct Student {
        string name;
        int age;
        char grade;
    };

    Student student1;
    student1.age = 21;
    student1.name = "Liam";
    student1.grade = 'A';

    cout << student1.age << "\n";
    cout << student1.name << "\n";
    cout << student1.grade << "\n";
}
