#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class RPS
{
private:
    string playerName;
    int plyScore, comScore, totalRound;
    string rps[3] = {"Rock", "Paper", "Scissors"};
    string preWin[100];

public:
    RPS()
    {
        plyScore = 0;
        comScore = 0;
        totalRound = 0;
    }

    void set()
    {
        cout << "\nEnter your name = ";
        cin >> playerName;
    }

    void showMenu()
    {
        cout << "\n\n\n:--------------:Welcome to Rock Paper Scissors GAME:---------------:" << endl;
        cout << "Chooose :--->  round left " << totalRound << endl;
        cout << " Rock --> (r) ||  Paper --> (p) ||  Scissors --> (s) " << endl;
        cout << "-----------------------------------------------------" << endl;
    }

    void playRounds(int roundCount)
    {
        showMenu();
        int compChoose = (rand() % 3) + 1;

        string playerChoose;

        cout << "Score ---> " << playerName << " = " << plyScore << " |  Computer = " << comScore << endl;
        cout << "\n*****************************************************" << endl;

        cout << "Enter your choice = ";
        cin >> playerChoose;

        playerChoose = playerChoose == "r" || playerChoose == "1" ? "Rock" : playerChoose == "p" || playerChoose == "2" ? "Paper"
                                                                                                                        : "Scissors";

        // display user choice and computer choice;

        cout << "\n*****************************************************";
        cout << "\n\t\tCHOICES";
        if (playerChoose == "Scissors")
        {
            cout << endl
                 << playerName << "\t\t\t" << "Computer" << endl
                 << endl;
            cout << playerChoose << "\t\t" << rps[compChoose - 1];
        }
        else
        {
            cout << endl
                 << playerName << "\t\t\t\t" << "Computer" << endl
                 << endl;
            cout << playerChoose << "\t\t\t\t" << rps[compChoose - 1] << endl;
        }

        string result = win(playerChoose, rps[compChoose - 1]);

        if (result == "p")
        {
            cout << endl
                 << "Result ---> " << playerName << " wins" << endl;
        }
        else if (result == "Draw")
        {
            cout << endl
                 << "\nResult ---> " << result << endl;
        }
        else
        {
            cout << endl
                 << "\nResult ---> " << result << endl;
        }

        cout << "-----------------------------------------------------------------------------------";
    }

    string win(string p, string c)
    {
        if ((p == "Rock" && c == "Scissors") || (p == "Paper" && c == "Rock") || (p == "Scissors" && c == "Paper"))
        {
            ++plyScore;
            return "p";
        }
        else if (p == c)
        {
            return "Draw";
        }
        else
        {
            ++comScore;
            return "Computer wins";
        }
    }

    void playGame()
    {
        set();

        srand(time(0));

        int rounds;
        cout << playerName << " How many rounds you want to play = ";
        cin >> rounds;

        totalRound = rounds;

        if (totalRound <= 0)
        {
            cout << "\nInvalid you atlease play 1 round = " << endl;
            return;
        }

        for (int i = 1; i <= rounds; i++)
        {
            playRounds(i);
            totalRound--;
        }

        if (plyScore < comScore)
        {
            cout << "\n***************************";
            cout << "\nFinal winner the match = computer";
            cout << "\n***************************";
        }
        else if (plyScore > comScore)
        {
            cout << "\n***************************";
            cout << "\nFinal winner the match = " << playerName;
            cout << "\n***************************";
        }
        else
        {
            cout << "\n***************************";
            cout << "\nMatch is Draw";
            cout << "\n***************************";
        }
    }
};

int main()
{
    RPS game;
    game.playGame();
    return 0;
}
