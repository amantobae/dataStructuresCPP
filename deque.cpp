#include <iostream>
#include <deque>
using namespace std;

int main() {
    /* elements in a queue are added
    at the end and removed from the front.
    A deque (stands for double-ended queue) however,
    is more flexible, as elements can be added and removed
    from both ends (at the front and the back).
    You can also access elements by index numbers. */

    // Create a deque called cars that will store strings
    // Unlike in stacks and queues you can add elements at the time of declaration
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    /* Unlike in stacks and queues you can access a deque element by referring to the
      index number inside square brackets []. */


    // Get the first element
    cout << cars[0]; // Outputs Volvo

    // Get the second element
    cout << cars[1]; // Outputs BMW

    // But it's preffered to use .at() function
    cout << cars.at(1); // Outputs BMW

    /* You can also access the first or the last element of a deque
    with the .front() and .back() functions: */
    // Get the first element
    cout << cars.front();

    // Get the last element
    cout << cars.back();

    // Change the value of the first element
    cars[0] = "Opel";

    // Add an element at the beginning
    cars.push_front("Tesla");

    // Add an element at the end
    cars.push_back("VW");

    cout << cars.size(); // Outputs 4

    cout << cars.empty(); // Outputs 0
}
