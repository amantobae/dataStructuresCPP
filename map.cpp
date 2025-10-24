#include <iostream>
#include <map>
using namespace std;

int main() {
    /* A map stores elements in "key/value" pairs.

    Elements in a map are:

    Accessible by keys (not index), and each key is unique.
    Automatically sorted in ascending order by their keys. */

    // Create a map that will store the name and age of different people
    map<string, int> people = {{"John", 32}, {"Adele", 45}, {"Bo", 29}};

    /* You cannot access map elements by referring to index numbers, like you would with arrays and vectors.
    Instead, you can access a map element by referring to its key inside square brackets []: */
    // Get the value associated with the key "John"
    cout << "John is: " << people["John"] << "\n";

    // Change John's value to 50 instead of 32
    people["John"] = 50;

    // Add new elements
    people["Jenny"] = 22;
    people["Liam"] = 24;
    people["Kasper"] = 20;

    // Add new elements
    people.insert({"Jenny", 22});

    // Remove an element by key
    people.erase("John");

    // Remove all elements
    people.clear();

    cout << people.size(); // Outputs 0

    cout << people.empty(); // Outputs 1 (The map is empty)

    // Loop through the map
    /* You should use the auto keyword (introduced in C++ version 11) inside the for loop.
    This allows the compiler to automatically determine the correct data type for each key-value pair.
    Since map elements consist of both keys and values, you have
    to include .first to access the keys, and .second to access values in the loop.
    Elements in the map are sorted automatically in ascending order by their keys: */
    for (auto person: people) {
        cout << person.first << person.second;
    }
}
