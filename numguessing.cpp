#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand((unsigned) time(NULL));
    int secret_number = rand() % 100;
    int tries = 0;

    bool guessing = true;

    cout << "o---------------o" << endl;
    cout << "| Guessing Game |" << endl;
    cout << "o---------------o" << endl;

    do
    {
        int guess;

        cout << "What is your guess? " << endl;
        cin >> guess;
        tries++;
        cout << "You guessed: " << guess << endl;

        bool correct = guess == secret_number;
        bool higher = guess > secret_number;

        if(correct){
            guessing = false;
        } 
        else if(higher){
            cout << "You guess was higher than the secret number!" << endl;
        } 
        else {
            cout << "Your guess was lower than the secret number!" << endl;
        }
    } while (guessing);
    
    // correct guessing feedback
    cout << "Congrats! You got the secret number!" << endl;
    if (tries > 1) {
        cout << "You took " << tries << " guesses!" << endl;
    } else {
        cout << "You took only 1 guess! You are a natural!" << endl;
    }
    cout << "The secret number was: " << secret_number << endl;

    return 0;
}