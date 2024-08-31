#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int random_number = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed_number;

    do
    {
        cout << "Guess The Number: ";
        cin >> guessed_number;

        if (guessed_number < random_number)
        {
            cout << "Guess Higher Number\n";
        }
        else if (guessed_number > random_number)
        {
            cout << "Guess Lower Number\n";
        }
        else
        {
            cout << "Congrats!!!\n";
        }
        number_of_guesses++;

    } while (random_number != guessed_number);

    cout << "The Number Is: " << random_number << "\n";
    cout << "You guessed the number in " << number_of_guesses << " guesses\n";

    return 0;
}
