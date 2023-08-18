#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int random_number;
    int guess;
    int level_num;
    string choice;
    int chances = 0;
    srand(time(0));
    random_number = rand() % 100 + 1;
    cout << "\t\t*********************************************************************\n";
    cout << "\t\t-------------------NUMBER GUESSING GAME-----------------------------\n";
    cout << "\t\t*********************************************************************\n\n";
    cout << "This code is generated by Rhythm \n\n";

    cout << "\t\t------------------------WELCOME----------------------------------\n\n";
    cout << "\t\t----------------------INSTRUCTIONS-----------------------------\n\n";
    cout << "\t\t\t1.You have to choose a number between 1-100\n";
    cout << "\t\t\t2.You will get different chances according to the difficulty of the level\n\n";

    cout << "Please select your level\n";
    cout << "1.Easy Level\n";
    cout << "2.Medium Level\n";
    cout << "3.Difficult Level\n";
    cout << "4.Exit\n";
    cout << "Enter your choice(Y/N)::";
    cin >> choice;

    cout << "Enter the difficulty level number::";
    cin >> level_num;

    while (choice=="Y"||choice=="y")
    {
        switch (level_num)
        {
        case 1:
            cout << "-------------------EASY LEVEL-----------------------------\n\n";
            cout << "You will be getting 6 chances to guess the correct number\n";
            for (int i = 0; i < 6; i++)
            {
                cout << "Enter your guess between 1 and 100:: ";
                cin >> guess;

                if (guess > random_number)
                {
                    cout << "Ohooo,Please enter a smaller number\n";
                }

                else if (guess < random_number)
                {
                    cout << "Ohooo,Please enter a greater number\n";
                }

                else
                {
                    cout << "Woooooohhhhhhhooooo!!!!!\n";
                    cout << "You have guess the right number\n";
                    break;
                }

                chances--;
                if (chances == 0)
                {
                    cout << "\nBetter luck next time" << endl;
                    cout << random_number << " is the number";
                }
            }
            break;

        case 2:
            cout << "-------------------MEDIUM LEVEL-----------------------------\n\n";
            cout << "You will be getting 4 chances to guess the correct number\n";
            for (int i = 0; i < 4; i++)
            {
                cout << "Enter your guess between 1 and 100:: ";
                cin >> guess;

                if (guess > random_number)
                {
                    cout << "Ohooo,Please enter a smaller number\n";
                }

                else if (guess < random_number)
                {
                    cout << "Ohooo,Please enter a greater number\n";
                }

                else
                {
                    cout << "Woooooohhhhhhhooooo!!!!!\n";
                    cout << "You have guess the right number\n";
                    break;
                }

                chances--;
                if (chances == 0)
                {
                    cout << "\nBetter luck next time" << endl;
                    cout << random_number << " is the number";
                }
            }
            break;

        case 3:
            cout << "-------------------HARD LEVEL-----------------------------\n\n";
            cout << "You will be getting 2 chances to guess the correct number\n";
            for (int i = 0; i < 2; i++)
            {
                cout << "Enter your guess between 1 and 100 :: ";
                cin >> guess;

                if (guess > random_number)
                {
                    cout << "Ohooo,Please enter a smaller number\n";
                }

                else if (guess < random_number)
                {
                    cout << "Ohooo,Please enter a greater number\n";
                }

                else
                {
                    cout << "Woooooohhhhhhhooooo!!!!!\n";
                    cout << "You have guess the right number\n";
                    break;
                }

                chances--;
                if (chances == 0)
                {
                    cout << "\nBetter luck next time" << endl;
                    cout << random_number << " is the number";
                }
            }
            break;
        case 4:
            exit(4);
            cout << "Thank You!!!";

        default:
            cout << "Please choose from above options only!!!\n";
            break;
        }

        cout << "\n\nDo you want to continue??\n";
        cout << "Enter your choice(Y/N)::";
        cin >> choice;
    }
}
