#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int pc = rand() % 3 + 1;
    int player, winner;
    cout << pc << endl;
    cout << "Write the number under which your item is located:\n[1] Rock\n[2] Paper\n[3] Scissors\n[4] Lizard\n[5] Spock" << endl;
    cin >> player;
    switch (player)
    {
    case 1:
        if (pc == 1)
        {
            winner = 0;
        }
        else if (pc == 2)
        {
            winner = 1;
        }
        else if (pc == 3)
        {
            winner = 2;
        }
        else if (pc == 4)
        {
            winner = 2;
        }
        else if (pc == 5)
        {
            winner = 1;
        }
        break;
    case 2:
       if (pc == 1)
        {
            winner = 2;
        }
        else if (pc == 2)
        {
            winner = 0;
        }
        else if (pc == 3)
        {
            winner = 1;
        }
        else if (pc == 4)
        {
            winner = 1;
        }
        else if (pc == 5)
        {
            winner = 2;
        }
        break;
    case 3:
        if (pc == 1)
        {
            winner = 1;
        }
        else if (pc == 2)
        {
            winner = 2;
        }
        else if (pc == 3)
        {
            winner = 0;
        }
        else if (pc == 4)
        {
            winner = 2;
        }
        else if (pc == 5)
        {
            winner = 1;
        }
        break;
    case 4:
        if (pc == 1)
        {
            winner = 1;
        }
        else if (pc == 2)
        {
            winner = 2;
        }
        else if (pc == 3)
        {
            winner = 1;
        }
        else if (pc == 4)
        {
            winner = 0;
        }
        else if (pc == 5)
        {
            winner = 2;
        }
        break;
    case 5:
        if (pc == 1)
        {
            winner = 2;
        }
        else if (pc == 2)
        {
            winner = 1;
        }
        else if (pc == 3)
        {
            winner = 2;
        }
        else if (pc == 4)
        {
            winner = 1;
        }
        else if (pc == 5)
        {
            winner = 0;
        }
        break;
    default:
        cout << "Invalid value" << endl;
        break;
    }
    if (winner == 0)
    {
        cout << "Tie" << endl;
    }
    else if (winner == 1)
    {
        cout << "You lose :(" << endl;
    }
    else if (winner == 2)
    {
        cout << "You win!" << endl;
    }
    cout << pc << player << endl;
    system("pause");
}