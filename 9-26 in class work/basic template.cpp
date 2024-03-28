/* Name: Kelly Williams
* Date: 9/26/2023
* Description: in class work/notes
* Class Section: ECE 1310.04
*/

//System Libraries
#include <iostream>
#include <string>

//Function Prototypes

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    //warm up
    int a = 5 % 9;
    bool c = a >= 5;
    cout << "c = " << c << endl;
    a = a + c * 2;
    cout << "a = " << a << endl;

    c = (a >= 5) && (2 == 2);
    cout << "c = " << c << endl;

    c = !((a > 9) || (2 > 9));
    cout << "c = " << c << endl;

    /*update game home page from a few weeks ago
    Pseudocode: 
    declare int choice
    declare string diff (for difficulty)
    declare bool valid = false - for input validation
    output welcome message
    
    while valid = false - this will loop the prompt until a valid input is entered
    
        prompt user to enter difficulty: 
            1. easy
            2. medium
            3. hard

        if choice == 1
            diff = "Easy"
            valid = true
        if choice == 2
            diff = "Medium"
            valid = true
        if choice == 3
            diff = "Hard"
            valid = true
        else
            valid = false

    output diff
    
    */

    //code starts here
    int choice;
    string diff;
    bool valid = false;

    cout << "           Welcome to ECE1310!\n"
        << "==========================================\n";

    while (valid == false)
    {
        cout << "Choose a difficulty:\n"
            << "\t 1. Easy\n" << "\t 2. Medium\n" << "\t 3. Hard\n"
            << "Enter choice here: ";
        cin >> choice;

        if (choice == 1)
        {
            diff = "Easy";
            valid = true;
        }

        if (choice == 2)
        {
            diff = "Medium";
            valid = true;
        }

        if (choice == 3)
        {
            diff = "Hard";
            valid = true;
        }

        else
        {
            cout << "Please enter 1, 2, or 3 to choose your difficulty.\n\n";
        }
    }

    cout << "You have chosen " << diff << " difficulty. Enjoy the class!\n";

    /* Alternatively, use switch case:
    * switch(choice)
    * {
    * case 1:       //choice = 1
    *       cout << "Easy";
    *       break;
    * case 2:       //choice = 2
    *       cout << "Medium";
    *       break;
    * case 3:       //choice = 3
    *       cout << "Hard";
    *       break;
    * default: 
    *       cout << "Invalid.";
    *       break;
    * }
    */

    return 0;
}

