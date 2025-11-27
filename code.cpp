#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "Usage: ./program <num1> <operator> <num2>\n";
        return 1;
    }

    double num1 = atof(argv[1]);
    char op = argv[2][0];
    double num2 = atof(argv[3]);
    double result;

    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero!\n";
                return 1;
            }
            result = num1 / num2; break;
        default:
            cout << "Invalid operator!\n";
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
