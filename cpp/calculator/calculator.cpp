#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <iomanip>
typedef long double lld;
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
        lld _num, __num;
        char _operator;

        if (!(iss >> _num >> _operator >> __num)) {
            std::cerr << "Invalid input. Please enter in the format 'number operator number'." << std::endl;
            continue;
        }

        lld result;
        switch (_operator) {
            case '+':
                result = _num + __num;
                break;
            case '-':
                result = _num - __num;
                break;
            case '*':
                result = _num * __num;
                break;
            case '/':
                if (__num == 0) {
                    std::cerr << "Error: Division by zero." << std::endl;
                    continue;
                }
                result = _num / __num;
                break;
            case '^':
                result = std::pow(_num, __num);
                break;
            default:
                std::cerr << "Invalid operator. Please use +, -, *, or /." << std::endl;
                continue;
        }
        std::cout << "Result: " << result << std::endl;
    }
    return 0;
}