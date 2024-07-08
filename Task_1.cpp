// task_1 :- Create a program that generates a random number and asks the
// user to guess it. Provide feedback on whether the guess is too
// high or too low until the user guesses the correct number.

#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 eng(rd());
    uniform_int_distribution<> distr(1, 100);
    int secretNumber=distr(eng);
    int guess;
    bool guessed=false;

    while(!guessed){
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;

        if(guess<secretNumber)
        {
            cout<<"Try Again \n";
        }
        else if (guess>secretNumber)
        {
            cout<<"Try again";
        }
        else{
            cout<<"Congratulations! You guessed the number.\n";
            guessed=true;
        }
    }

    return 0;
}