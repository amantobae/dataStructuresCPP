#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> cars;
    // Add elements to the stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda"); // stack will be arranged that way {Mazda, Ford, BMW, Volvo}

    /* ACCESS STACK ELEMENTS */
    // Access the top element
    cout << cars.top() << "\n"; // Outputs "Mazda"

    // Change the value of the top element
    cars.top() = "Tesla";

    // Remove the last added element (Tesla)
    cars.pop();

    // Get the size of the stack
    cout << cars.size() << "\n";

    // Check if stack is empty
    cout << cars.empty() << "\n";
}
