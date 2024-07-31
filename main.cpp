#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    char operation;
    int num1;
    int num2; 
    int results;
    char continueCal;

    do
    {
    cout << "Welcome to my Calculator!\n";
    cout << "Addition Calculator\n";
    cout << "Enter your number1: \n";
    cin >> num1;
    cout << "Enter your number2: \n";
    cin >> num2;
    cout << "(+) Addition\n";
    cout << "(-) Subtraction\n";
    cout << "(*) Multiplication\n";
    cout << "(/) Division\n";
    cout << "Enter your service here: ";
    cin >> operation;
    cout << "You have selected: ";

    switch (operation)
    {
    case '+':
        cout << "Addition Calculator\n";
        results = num1 + num2;
        cout << "Results: " << results << "\n";
        break;

    case '-':
        cout << "Subtraction Calculator\n";
        results = num1 - num2;
        cout << "Results: " << results << "\n";
        break;

    case '*':
        cout << "Multiplication Calculator\n";
        results = num1 * num2;
        cout << "Results: " << results << "\n";
        break;

    case '/':
        cout << "Division Calculator\n";
        results = num1 / num2;
        cout << "Results: " << results << "\n";
        break;
    
    default:
        break;
    }

    cout << "Wish to continue? Press 'Y' to calculate more\n";
    cin >> continueCal;
    } while (continueCal == 'y' || continueCal == 'Y');

    cout << "See you goodbye!\n";

    return 0;
    
    

    
}