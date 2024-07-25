Explanation:
Random Number Generation:

srand(time(0)) seeds the random number generator with the current time to ensure different numbers are generated each time the program runs.
rand() % 100 + 1 generates a random number between 1 and 100 (rand() % 100 gives a number between 0 and 99, and adding 1 shifts it to 1-100).
User Interaction:

The program prompts the user to guess a number between 1 and 100.
Guessing Loop (do-while):

Inside the loop, the user inputs their guess.
The program checks if the guess matches the secretNumber.
If the guess is correct, a congratulatory message is displayed along with the number of attempts.
If the guess is too high or too low, the program provides appropriate feedback and prompts the user to guess again.
End of Program:

The loop continues until the user guesses the correct number (guess == secretNumber).
Once guessed correctly, the program exits.
