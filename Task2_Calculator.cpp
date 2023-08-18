#include <iostream>
using namespace std;

                          /*TASK 2*/

/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/

int main()
{
    cout << "**********************************************************\n";
    cout << "-------------------CALCULATOR-----------------------------\n";
    cout << "**********************************************************\n";
    cout << "This code is generated by Rhythm \n";
    double num1, num2;
    int operation;
    string choice;

    cout<<"-------------------WELCOME-----------------------------\n";
    cout << "Enter your choice(Y/N)::";
    cin >> choice;

    while (choice == "Y" || choice=="y")
    {
        cout << "Enter the first number::";
        cin >> num1;
        cout << "Enter the second number::";
        cin >> num2;
        cout << "\n1.To perform Addition operation\n";
        cout << "2.To perform Subtraction operation\n";
        cout << "3.To perform Multiplication operation\n";
        cout << "4.To perform Division operation\n";
        cout << "5.Exit\n";
        cout << "\nEnter the option you want to choose::";
        cin >> operation;

        switch (operation)
        {
        case 1:
            cout << "\nYou have choosen to perform addition operation on two numbers!! \n";
            cout << "Sum of two numbers::" << num1 + num2;
            break;

        case 2:
            cout << "You have choosen to perform subtraction operation on two numbers!! \n";
            if (num1 > num2)
            {
                cout << "Difference of two numbers::" << num1 - num2;
            }
            else
            {
                cout << "The first number entered is greater than second number therefore can not perform subtraction.";
                cout << "\nSorry for the inconvenience caused\n";
            }
            break;

        case 3:
            cout << "You have choosen to perform multiplication operation on two numbers!! \n";
            cout << "Product of two numbers::" << num1 * num2;
            break;

        case 4:
            cout << "You have choosen to perform division operation on two numbers!! \n";
            if (num2 == 0)
            {
                cout << "Division by zero can not be performed \n";
            }
            else
            {
                cout << "Quotient of two numbers::" << num1 / num2;
            }
            break;
        case 5:
            exit(5);
            cout << "Thank You!!!";

        default:
            cout << "Please choose from above options only!!!\n";
            break;
        }

        cout << "\n\nDo you want to continue??\n";
        cout << "Enter your choice(Y/N)::";
        cin >> choice;
    }
    return 0;
}
