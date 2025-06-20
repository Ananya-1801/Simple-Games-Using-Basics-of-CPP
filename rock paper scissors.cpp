// ROCK PAPER SCISSORS GAME USING BASICS OF C++

#include <iostream>
#include <ctime>

char getUserchoice();
char getComputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main()
{
    srand(time(NULL)); 

    char player;
    char computer;

    player = getUserchoice();
    std::cout << "You chose:\n";
    showchoice(player);

    computer = getComputerchoice();
    std::cout << "Computer chose:\n";
    showchoice(computer);

    std::cout << "\n";
    choosewinner(player, computer);

    return 0;
}

char getUserchoice()
{
    char player;
    std::cout << "ROCK-PAPER-SCISSORS GAME!!\n";
    std::cout << "---------------------------\n";
    do
    {
        std::cout << "Choose your option:\n";
        std::cout << "r for Rock\n";
        std::cout << "p for Paper\n";
        std::cout << "s for Scissors\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerchoice()
{
    int choice = (rand() % 3) + 1;

    switch (choice)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
        default: return 0; 
    }
}

void showchoice(char choice)
{
    switch (choice)
    {
        case 'r': std::cout << "Rock\n"; break;
        case 'p': std::cout << "Paper\n"; break;
        case 's': std::cout << "Scissors\n"; break;
        default: std::cout << "Invalid choice!\n";
    }
}

void choosewinner(char player, char computer)
{
    if (player == computer)
    {
        std::cout << "IT'S A DRAW! TRY AGAIN!\n";
    }
    else if ((player == 'r' && computer == 's') ||(player == 'p' && computer == 'r') ||(player == 's' && computer == 'p'))
    {
        std::cout << "You win!\n";
    }
    else
    {
        std::cout << "You lose!\n";
    }
}
