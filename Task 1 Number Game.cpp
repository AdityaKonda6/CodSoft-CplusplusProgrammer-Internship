#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Seed the random number generator

    int randomNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";

    do {
        std::cout << "Enter your guess (1-100): ";
        std::cin >> userGuess;

        attempts++;

        if (userGuess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number " << randomNumber << " in " << attempts << " attempts.\n";
        }
    } while (userGuess != randomNumber);

    return 0;
}
By:- Aditya Konda
