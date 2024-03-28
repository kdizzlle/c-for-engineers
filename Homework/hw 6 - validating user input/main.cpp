/* Name: Kelly Williams
* Date: 10/9/2023
* Description: validating user input
* Class Section: ECE 1310.04
*/

//most of this is from the book but has been edited by me to answer the question that references this code

//Fig. 3.12: fig03_12.cpp
// Examination-results problem: Nested control statements

//System Libraries
#include <iostream>

//Function Prototypes

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    //initializing variables in declarations
    int passes = 0; // number of passes
    int failures = 0; // number of failures
    int studentCounter = 1; // student counter
    int result; // one exam result (1 = pass, 2 = fail)

    // process 10 students using counter-controlled loop
    while (studentCounter <= 10)
    {
        // prompt user for input and obtain value from user
        cout << "Enter result (1 = pass, 2 = fail): ";
        cin >> result; // input result 

        //these are my changes ***************************
        if (result != 1 && result != 2)//this will basically act as a flag to trigger the while loop for validation
        {
            while (result != 1 && result != 2)//while invalid inputs are given
            {
                cout << "Invalid input.\n\n"
                    << "Enter result (1 = pass, 2 = fail): ";
                cin >> result;
            } //*******************************
        }

        
        //if...else nested in while
        if (result == 1)                // if result is 1,
            passes = passes + 1;        // increment passes;
        else                            //else result is not 1, so
            failures = failures + 1;    // increment failures

        //increment studentCounter so loop eventually terminates
        studentCounter = studentCounter + 1;
    } // end while

    //termiation phase; display umber of passes and failures
    cout << "Passed " << passes << "\nFailed " << failures << endl;

    //determine whether more than eight students passes
    if (passes > 8)
        cout << "Bonus to instructor!" << endl;
} // end main

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
