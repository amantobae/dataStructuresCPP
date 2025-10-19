#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<string> cars = {"Volvo", "BMW", "Mazda", "Ford"};

    // Changing 1st element
    cars.at(0) = "Mercedes";

    // Addition of another element
    cars.push_back("Tesla");

    for (string car: cars) {
        cout << car << "\n"; // Now it will add "Tesla" at the end of the vectors
    }

    // Remove the element from the end of the vector
    cars.pop_back();
}
