/* Name: Kelly Williams
* Date: 
* Description: 
* Class Section: 
*/

//System Libraries
#include <iostream>
#include <cmath>

//Function Prototypes

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    int choice;
    cout << "Which code do you want to run?\n1. hypotenuse calculator\n2. sqrt 1-10\n"
        << "3. e function\n\n";
    cin >> choice;
    if (choice == 1)
    {
        double leg1 = 0;
        double leg2 = 0;
        double hyp = 0;

        //welcome message
        cout << "Welcome to the right triangle hypotenuse calculator!\n\n";

        //input validation
        cout << "Leg 1 length: ";
        cin >> leg1;
        while (leg1 <= 0)
        {
            cout << "Must be a positive number. Try again.\n\n"
                << "Leg 1 length: ";
            cin >> leg1;
        }

        cout << "Leg 2 length: ";
        cin >> leg2;
        while (leg2 <= 0)
        {
            cout << "Must be a positive number. Try again.\n\n"
                << "Leg 2 length: ";
            cin >> leg2;
        }

        hyp = sqrt(leg1 * leg1 + leg2 * leg2);

        cout << endl << "The hypotenuse is: " << hyp << endl;
    }
    
    //sqrt of numbers 1-10
    if (choice == 2);
    {
        int num = 1;
        double sum = 0;
        cout << "\nNumber\tSquare root\n";
        while (num <= 10)
        {
            cout << num << "\t" << sqrt(num) << endl;
            sum += sqrt(num);
            num++;
        }
        cout << "\nThe sum of all square roots from 1-10: " << sum << endl;
    }

    //1 + e^(-0.25) + e^(-0.5) + e^(-0.75) + ... + e^(-2.75) + e^(-3)
    if (choice == 3)
    {
        double sum = 1;
        double x = -0.25;
        for (int i = 2; i <= 12; i++)
        {
            sum += exp(x);
            x += -0.25;
        }
        cout << "Sum = " << sum << endl;
    }

    return 0;
}

