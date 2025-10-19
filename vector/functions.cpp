#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<string> cars = {"Volvo", "BMW", "Mazda", "Ford"};

    // Vector size
    cout << cars.size() << "\n"; // returns "4"

    // Is vector empty
    cout << cars.empty() << "\n"; // returns 1 as true and 0 as false

    // Loops through the vector
    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << '\n';
    }
}
