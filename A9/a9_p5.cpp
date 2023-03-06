/*
CH-230-A
a9_p5.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <ctime>
// unnecessary to prefix std::
using namespace std;

int main() {
    string name;
    // input for the player's name
    cout << "Type your name: ";
    cin >> name;
    srand(static_cast<unsigned int>(time(NULL)));
    // generating random numbers between 1 and 100
    int random_number = 1 + (rand() % 100);
    cout << name << " guess a number between 1 and 100: ";
    // loop for guesses
    while (1) {
        // input
        int guess;
        cin >> guess;
        if (guess > random_number) {
            cout << "Too high" << endl << "Guess again " << name << ": ";
        }
        // end the game if the guess is correct
        else if (guess == random_number) {
            cout << "Congratulations " << name << "! Your guess is correct" << endl;
            break;
        }
        else {
            cout << "Too low" << endl << "Guess again " << name << ": ";
        }
    }
    return 0;
}