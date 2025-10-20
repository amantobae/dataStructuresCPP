#include <iostream>
using namespace std;


int main() {
    /* An enum is a special type that represents a group of constants (unchangeable values). */

    enum Level {
        LOW,
        MEDIUM,
        HIGH
    };

    /* Note that the last item does not need a comma.
    It is not required to use uppercase, but often considered as good practice.
    Enum is short for "enumerations", which means "specifically listed". */

    // Create an enum variable and assign a value to it
    enum Level myVar = MEDIUM;

    // Print the enum variable
    cout << myVar;

    // It is also possible to change elements values
    /* enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
    }; */

    // Note that if you assign a value to one specific item, the next items will update their numbers accordingly:
    /* enum Level {
    LOW = 5,
    MEDIUM, // Now 6
    HIGH // Now 7
    }; */

    // NOTE: the default value of the first enum element is 0
}
