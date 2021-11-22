//Lab Assignment #3
//Sümeyra Karsavran
//20.11.2021


#include <iostream>
using namespace std;

int main()
{
    
    int choice;
    int x;
    int y;

    int i = 0;
    do {
        cout << "**** MY MENU ****\n 1.Addition\n 2.Subtraction\n 3.Division\n 4.Multiplication\n 5.Modulo\n 6.Exit" << endl << endl;

        cout << "Enter your choice:";
        cin >> choice;

        if(choice==1 || choice==2 || choice==3 || choice == 4 || choice == 5) 
        {
            cout << "Enter two integers:";
            cin >> x >> y;

            if (choice == 1)
                cout << x << "+" << y << "=" << x + y << endl<< endl;
            else if (choice == 2)
                cout << x << "-" << y << "=" << x - y << endl<< endl;
            else if (choice == 3)
                cout << x << "/" << y << "=" << x / y << endl<< endl;
            else if (choice == 4)
                cout << x << "*" << y << "=" << x * y << endl<< endl;
            else if (choice == 5)
                cout << x << "%" << y << "=" << x % y << endl<< endl;

            i = i + 1;
        }
        else if (choice > 5)
            i = i + 6;

       }while (i<6);




}