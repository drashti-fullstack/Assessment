/*• Write a program to demonstrate a Rock Paper Scissor Game
• Invoke the particular Method/Function through object , in which you are writing your
logic.
• Use this function :
• srand(time(0));
• (rand()%3)+1; -> Generating for random no.s from computer’s end.
• Use library header files i.e #include<stdlib.h> and #include<ctime> for above logic if
necessary.*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;
class Game
{
private:
    string player_name;
    int round;
    int player_score = 0, computer_score = 0;
    int player_choice;

public:
    void getName()
    {
        cout << "*--*--*--*--*--*--" << endl;
        cout << " Name " << endl;
        cout << "*--*--*--*--*--*--" << endl;
        cout << "Enter The Player Name: ";
        cin >> player_name;
    }
    void setRounds()
    {
        cout << "*--*--*--*--*--*--*" << endl;
        cout << " Rounds " << endl;
        cout << "*--*--*--*--*--*--*" << endl;
        cout << "\nHow Many Rounds Do You Want To Play? ";
        cin >> round;
    }
    int generateComputerChoice()
    {
        return (rand() % 3) + 1;
    }
    void getPlayerChoice()
    {
        cout << "1) ROCK " << endl;
        cout << "2) PAPER" << endl;
        cout << "3) SCISSOR" << endl;
        cout << "\n--> Choose Your Choice :";
        cin >> player_choice;
    }
    string getScoreName(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Rock";
        case 2:
            return "Paper";
        case 3:
            return "Scissor";
        default:
            return "Invalid";
        }
    }

    void playGame()
    {
        for (int i = 1; i <= round; i++)
        {
            cout << "*--*--*--*--*--*--*--" << endl;
            cout << " Game " << endl;
            cout << "*--*--*--*--*--*--*--" << endl;
            cout << "Round NO : " << i << " /" << round << endl;
            cout << "--* " << player_name << " score = " << player_score << endl;
            cout << "--* computer_score = " << computer_score << endl;
            getPlayerChoice();
            int computer_choice = generateComputerChoice();
            cout << player_name << " choose: " << getScoreName(player_choice) << endl;
            cout << "--> Computer choose: " << getScoreName(computer_choice) << endl;

            if (player_choice == computer_choice)
            {
                cout << "DRAW" << endl;
            }
            else if ((player_choice == 1 && computer_choice == 3) ||
                     (player_choice == 2 && computer_choice == 1) ||
                     (player_choice == 3 && computer_choice == 2))
            {
                cout << player_name << " wins this round!" << endl;
                player_score++;
            }
            else
            {
                cout << "Computer wins this round!" << endl;
                computer_score++;
            }
        }
        cout << "\n Final Score:";
        cout << player_name << ": " << player_score << endl;
        cout << "\n Computer: " << computer_score;

        if (player_score > computer_score)
        {
            cout << player_name << " wins the game!" << endl;
        }
        else if (player_score < computer_score)
        {
            cout << "\n Computer wins the game!";
        }
        else
        {
            cout << "\n DRAW";
        }
    }
    void setContinue()
    {
        char ans;
        cout << "\nDo you want to continue? Press 'y' for yes and 'n' for no: " << endl;
        cin >> ans;
        if (ans == 'y')
        {
            Game g;
            g.getName();
            g.setRounds();
            g.playGame();
            g.setContinue();
        }
        else if (ans == 'n')
        {
            exit(0);
        }
    }
};

int main()
{
    srand(time(0));
    Game g1;
    g1.getName();
    g1.setRounds();
    g1.playGame();
    g1.setContinue();

    return 0;
}