#include <iostream>
using namespace std;


// BASIC CALCULATOR
int main() {
    // Declare and initialize
    float my_value1 = 0.0;
    float my_value2 = 0.0;
    char operator_char;

    // Input from user
    cout << "Enter a number:" << endl;
    cin >> my_value1;
    cout << "Enter an operator:" << endl;
    cin >> operator_char;
    cout << "Enter another number:" << endl;
    cin >> my_value2;

    // Switch statement to perform the operation
    switch(operator_char) {
        case '+': {
            cout << "The sum of the two numbers:" << endl;
            cout << my_value1 + my_value2 << endl;
            break;
        }
        case '-': {
            cout << "The difference between the two numbers:" << endl;
            cout << my_value1 - my_value2 << endl;
            break;
        }
        case '*': {
            cout << "The product of the two numbers:" << endl;
            cout << my_value1 * my_value2 << endl;
            break;
        }
        case '/': {
            if(my_value2 != 0) {
                cout << "The quotient of the two numbers:" << endl;
                cout << my_value1 / my_value2 << endl;
                break;
            } else {
                cout << "Error: Division by zero!" << endl;
                break;
            }
        }
        default: {
            cout << "Error: Invalid operator!" << endl;
            break;
        }
    }	







}