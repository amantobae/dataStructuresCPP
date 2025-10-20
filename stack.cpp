#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> cars;

    /* A stack stores multiple elements in a specific order, called LIFO.
    LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes,
    where pancakes are both added and removed from the top.
    So when removing a pancake, it will always be the last one you added.
    This way of organizing elements is called LIFO in computer science and programming.
    Unlike vectors, elements in the stack are not accessed by index numbers.
    Since elements are added and removed from the top, you can only access the element at the top of the stack. */

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
