#include <iostream>

int main() {
    char choice;

    do {
        double num1, num2;
        char operation;

        std::cout << "Simple Calculator" << std::endl;
        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter an operation (+, -, *, /): ";
        std::cin >> operation;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        double result;

        switch (operation) {
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
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    std::cout << "Error: Division by zero is not allowed." << std::endl;
                    return 1; // Exit with an error code
                }
                break;
            default:
                std::cout << "Invalid operation." << std::endl;
                return 1; // Exit with an error code
        }

        std::cout << "Result: " << result << std::endl;

        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
