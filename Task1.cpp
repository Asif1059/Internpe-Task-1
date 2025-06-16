#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() 
{
    srand(static_cast<unsigned int>(time(0)));
    int number = rand() % 100 + 1;
    int guess = 0 ;
    
    do 
    {cout << " Guess a number between 1 and 100: ";
        cin >> guess;

        if (guess > number)
        cout << "Too high! Try a smaller number. \n";
        else if (guess < number)
        cout << "Too low! Try a bigger number.\n";
        else 
        cout << "Bingo! You guessed the number.\n";
}
while (guess !=number);

return 0;
} 