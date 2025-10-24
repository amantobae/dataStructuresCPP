#include <iostream>
#include <set>
using namespace std;


int main() {
    /* A set stores unique elements where they:

    Are sorted automatically in ascending order.
    Are unique, meaning equal or duplicate values are ignored.
    Can be added or removed, but the value of an existing element cannot be changed.
    Cannot be accessed by index numbers, because the order is based on sorting and not indexing. */

    // Create a set called cars that will store strings
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Create a set called numbers that will store integers
    set<int> numbers = {1, 7, 3, 2, 5, 9};

    for (int num: numbers) {
        cout << num << '\n';
    }

    // Add new elements
    cars.insert("Tesla");

    // Remove elements
    cars.erase("Volvo");

    // Remove all elements
    cars.clear();

    cout << cars.size();  // Outputs 0

    cout << cars.empty();  // Outputs 1 (The set is empty)
}
