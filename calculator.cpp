#include <iostream>
using namespace std;

int main(){
    //Declare and initialize two variables of type float
    float my_value1 = 0.0;
    float my_value2 = 0.0;

    //Initalize two variables of type float, userinput
    cout << "Enter a number: " << endl;
    cin >> my_value1;

    cout << "Enter another number: " << endl;
    cin >> my_value2;

    //Perform addition, subtraction, multiplication, and division operations and print the results
    float my_result1 = my_value1 + my_value2;
    cout << "The sum of your two values is: " << my_result1 << endl;

    float my_result2 = my_value1 - my_value2;
    cout << "The difference of your two values is: " << my_result2 << endl;

    float my_result3 = my_value1 * my_value2;
    cout << "The multiplication of your two values is: " << my_result3 << endl;

    float my_result4 = my_value1 / my_value2;
    cout << "The division of your two values is: " << my_result4 << endl;

    return 0;
}