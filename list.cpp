#include <iostream>
#include <list>
#include <string>
using namespace std;


int main() {
    /* A list is similar to a vector in that it can store
    multiple elements of the same type and dynamically grow in size.

    However, two major differences between lists and vectors are:

    1)You can add and remove elements from both the beginning and at the end of a list,
    while vectors are generally optimized for adding and removing at the end.

    2)Unlike vectors, a list does not support random access,
    meaning you cannot directly jump to a specific index, or access elements by index numbers. */

    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Couting each element
    for (string car: cars) {
        cout << car << "\n";
    }


    /* ACCESS A LIST */
    // Get the first element
    cout << cars.front(); // Outputs Volvo

    // Get the last element
    cout << cars.back(); // Outputs Mazda

    /* CHANGE A LIST ELEMENT */
    // Change the value of the 1st element
    cars.front() = "Mercedes";

    // Change the value of the last element
    cars.back() = "Toyota";

    cout << cars.front(); // Now outputs Mercedes instead of Volvo
    cout << cars.back(); // Now outputs Toyota instead of Mazda

    /* ADD LIST ELEMENTS */
    // Add an element at the beginning
    cars.push_front("Tesla");

    // Add an element at the end
    cars.push_back("VW");

    /* REMOVE LIST ELEMENTS */
    // Remove an element at the beginning
    cars.pop_front();

    // Remove an element at the end
    cars.pop_back();

    /* LIST SIZE */
    // Cout list size
    cout << cars.size() << "\n";


    // Check if list is empty
    cout << cars.empty(); // Outputs 1 if the list is empty
}
