#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter 2nd number: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        }
        else {
            cout << "Error: devision by zero!" << endl;
        }
        break;
    default:
        cout << "Wrong operation!" << endl;
    }

    return 0;
}
