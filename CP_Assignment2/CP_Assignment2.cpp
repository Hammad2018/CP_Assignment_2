#include <iostream>
using namespace std;

int main() {
    int result;
    int user_input;

    cout << "Enter a number for user input: ";
    cin >> user_input;

    if (user_input < 0) {
        result = -1;
    }
    else if (user_input <= 5) {
        result = 0;
    }
    else if (user_input <= 12) {
        result = 1;
    }
    else if (user_input <= 19) {
        result = 2;
    }
    else if (user_input <= 50) {
        result = 3;
    }
    else if (user_input <= 60) {
        result = 4;
    }
    else if (user_input <= 101) {
        result = 5;
    }
    else {
        result = -1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
