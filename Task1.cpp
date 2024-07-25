#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // Generate random number between 1 and 100
    srand(static_cast<unsigned int>(time(0)));  // seed the random number generator
    int secretNumber = rand() % 100 + 1;         // random number between 1 and 100

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100:" << endl;

    do {
        // Input a guess from the user
        cout << "Enter your guess: ";
        cin >> guess;

        // Increment attempts
        attempts++;

        // Check if the guess is correct, too high, or too low
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try guessing higher." << endl;
        } else {
            cout << "Too high! Try guessing lower." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
