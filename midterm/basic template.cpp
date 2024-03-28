/* Name: Kelly Williams
* Date: 10/19/2023
* Description: midterm
* Class Section: ECE 1310.04
*/

/* Pseudocode
* ====================================
* declare variables
* double copies, per=0.06, cost=0;
* 
* prompt user input
*   number of copies: 
*   >> copies
* 
* while loop for input validation
* while copies <= 0
*   invalid input try again
*   >> copies
* 
* 6 cents per for first 50 copies
* 50 - copies is positive or zero is there is less than or equal to 50 copies
*   and negative when there are more than 50 copies
* if 50-copies >= 0     if positive or zero
*   cost = copies*per
* 
* now for if there are more than 50 copies
* if 50-copies < 0      if negative
*   cost = 50*per       per is still 6 here
*   copies = copies-50      this gives us the surplus copies
*   per=0.04       new cost per copy
*   cost = cost + (copies*per)
* 
* now for if the minimum cost of copies is less than the min required cost
* if cost < 1.25
*   cost = 1.25
* 
* output total cost to user
*  << cost: $ << cost
*/

//System Libraries
#include <iostream>

//Function Prototypes

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    //declare variables
    double copies, per = 0.06, cost = 0;

    //prompt user input
    cout << "Number of copies: ";
    cin >> copies;

    //input validation
    while (copies <= 0)
    {
        cout << "Invalid number of copies! It cannot be a negative number! Please re-enter." << endl
            << "Number of copies: ";
        cin >> copies;
    }

    //within 50 copies
    if ((50 - copies) >= 0)
    {
        cost = copies * per;
    }

    //greater than 50 copies
    if ((50 - copies) < 0)
    {
        cost = 50 * per;
        copies = copies - 50;
        per = 0.04;
        cost = cost + (copies * per);
    }

    //minimum cost not reached
    if (cost < 1.25)
    {
        cost = 1.25;
    }

    //output cost to user
    cout << "Cost: $" << cost << endl;

    return 0;
}

