#include <iostream>
#include <queue>

int main() {
    using namespace std;
    /* A queue stores multiple elements in a specific order, called FIFO.
    FIFO stands for First in, First Out. To visualize FIFO, think of a queue
    as people standing in line in a supermarket.
    The first person to stand in line is also the first who can pay
    and leave the supermarket.
    This way of organizing elements is called FIFO in computer science and programming.
    Unlike vectors, elements in the queue are not
    accessed by index numbers. Since queue elements are added
    at the end and removed from the front,
    you can only access an element at the front or the back. */

    // Create a queue of strings called cars
    queue<string> cars;

    /* Note: The type of the queue (string in our example) cannot be changed after its been declared.
    Note: You cannot add elements to the queue at the time of declaration, like you can with vectors: */

    // Add elements to the queue
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    /* The queue will look like this:
    Volvo (front (first) element)
    BMW
    Ford
    Mazda (back (last) element) */

    /* You cannot access queue elements by referring to index numbers,
    like you would with arrays and vectors.
    In a queue, you can only access the element at the front or the back,
    using .front() and .back() respectively: */

    // Access the front element (first and oldest)
    cout << cars.front() << '\n'; // Outputs "Volvo"

    // Access the back element (last and newest)
    cout << cars.back() << '\n'; // Outputs "Mazda"

    // Change the value of the front element
    cars.front() = "Tesla";

    // Change the value of the back element
    cars.back() = "VW";

    // Remove the front element
    cars.pop();

    // Get the size of the queue
    cout << cars.size() << '\n';

    // Check if queue empty
    cout << cars.empty() << '\n';
}
