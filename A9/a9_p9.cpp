/*
CH-230-A
a9_p9.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <ctime>
#include <string.h>

// unnecessary to prefix std::
using namespace std;

// prints strings without vowels
void change_string(string &array)
{
    char c;
    bool isVowel;
    // traverse the string and replace vowels
    for (int i = 0; array[i] != '\0'; i++)
    {
        c = array[i];
        isVowel = (c == 'a' || c == 'e' || c == 'i' 
        || c == 'o' || c == 'u' || c == 'A' || c == 'E' 
        || c == 'I' || c == 'O' || c == 'U');
        if (isVowel)
        {
            cout << '_';
        }
        else
        {
            cout << c;
        }
    }
}

int main()
{
    // string with 17 words  
    string array[17] = {"computer", "television", 
    "keyboard", "laptop", "mouse", "red", "pink", 
    "orange", "apple", "green", "blue", "red",
    "young", "grey", "blue", "light", "black"};

    int tries;
    string input;

    // outer loop for repetition of the game
    while (1)
    {
        // generate random array index between 0 and 16
        srand(static_cast<unsigned int>(time(NULL)));
        int randomindex = rand() % 17;

        // nullify tries at the start of a new game
        tries = 0;

        // change the vowels to underscores
        cout << "Guess the word ";
        change_string(array[randomindex]);
        cout << ": ";

        // inner loop for word guesses
        while (1)
        {
            // input
            cin >> input;
            tries++;

            // output for the right guess and start the game again
            if (!input.compare(array[randomindex]))
            {
                cout << "Guess is right! You have made " << tries;
                cout << " attempts" << endl;
                cout << "Do you want to play again (start / quit) ?: ";
                cin >> input;
                // end game if input is quit
                if (!input.compare("quit"))
                {
                    // ends the program
                    return 0;
                }
                else if (!input.compare("start")) {
                    // restarts the game
                    break;
                }
            }
            // output for the wrong guess
            else
            {
                cout << "Guess is wrong. Try again: ";
            }
        }
    }
    return 0;
}