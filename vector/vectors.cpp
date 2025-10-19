#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    /*	Stores elements like an array but can dynamically change in size.
    	Adding and removing of elements are usually done at the end.
    	Elements can be accessed by index. */

    // create vector that called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Mazda", "Ford"};

    /* 1st part: indexes */

    // couting each element of cars
    for (string car: cars) {
        cout << car << "\n";
    }

    // get the first element
    cout << cars[0] << "\n";

    // get the second element
    cout << cars[1] << "\n";

    // get the first element
    cout << cars.front() << "\n";

    // get the last element
    cout << cars.back() << "\n";

    // get the first element
    cout << cars.at(0) << "\n";

    // get the second element
    cout << cars.at(1) << "\n";

    /* NOTE: The .at() function is often preferred over square brackets []
      because it lets you know if an error occurs. */

    /* 2nd part: changing elements */

    // Change the value of the first element
    cars[0] = "Mercedes";
    cout << cars.at(0) << "\n"; // Now it outputs "Mercedes" instead of "Volvo"

    // Addition of another element to a vector
    cars.push_back("Tesla");
    for (string car: cars) {
        cout << car << "\n";
    }
}
