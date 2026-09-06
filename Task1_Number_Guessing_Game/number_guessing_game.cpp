#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "===== NUMBER GUESSING GAME =====" << endl;

    // TEMPORARY: check the secret number
    cout << "Secret number is: " << secretNumber << endl;

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Congratulations! Correct number!" << endl;
        }

    } while (guess != secretNumber);

    cout << "===== GAME OVER =====" << endl;

    return 0;
}
