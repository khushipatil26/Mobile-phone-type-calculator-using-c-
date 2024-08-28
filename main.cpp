#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main() {
    string input;
    cout << "Enter a calculation (e.g., 23 + 42): ";
    getline(cin, input);

    stringstream ss(input);
    double num1, num2;
    char op;

    ss >> num1 >> op >> num2;

    double result = 0;
    bool error = false;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Division by zero!" << endl;
                error = true;
            }
            break;
        default:
            cout << "Error: Unknown operator!" << endl;
            error = true;
    }

    if (!error) {
        cout << "Result: " << result << endl;
    }

    return 0;
}
