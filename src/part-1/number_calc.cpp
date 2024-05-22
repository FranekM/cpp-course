#include <iostream>

using namespace std;

int main() {

    int number1;
    int number2;

    char operation;

    int output;

    cout << "enter number1: ";
    cin >> number1;
    cout << "enter number2: ";
    cin >> number2;
    cout << "enter operation: ";
    cin >> operation;

    if (operation == '-') {
        output = number1 - number2;
    } else  {
        output = number1 + number2;
    }

    cout << output << endl;

    return 0;
}