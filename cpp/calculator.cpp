#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <iomanip>
typedef long double ll;
// Calculator program that takes in an expression in the format 'number operator number' and returns the result.
int main() {
    std::string input;
    while (true) {
        std::cout << "Enter an expression (or 'q' to quit): ";
        std::getline(std::cin, input);

        if (input == "q") {
            break;
        }

        std::istringstream iss(input);
        ll num1, num2;
        char op;

        if (!(iss >> num1 >> op >> num2)) {
            std::cerr << "Invalid input. Please enter in the format 'number operator number'." << std::endl;
            continue;
        }

        double result;
        switch (op) {
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
                if (num2 == 0) {
                    std::cerr << "Error: Division by zero." << std::endl;
                    continue;
                }
                result = num1 / num2;
                break;
            case '^':
                result = std::pow(num1, num2);
                break;
            default:
                std::cerr << "Invalid operator. Please use +, -, *, or /." << std::endl;
                continue;
        }
        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}