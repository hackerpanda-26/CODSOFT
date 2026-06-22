#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));   // Random number generator

    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "===== NUMBER GUESSING GAME =====" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do
    {
        cout << "\nEnter your guess: ";
        cin >> guess;

        if (guess > secretNumber)
        {
            cout << "Too High! Try Again." << endl;
        }
        else if (guess < secretNumber)
        {
            cout << "Too Low! Try Again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number: "
                 << secretNumber << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
