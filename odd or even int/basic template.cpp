/* Name: Kelly Williams
* Date: 9/19/2023
* Description: in class work
* Class Section: ECE 1310.04
* 
* task 1: read score from user, tell if pass or fail score
* task 2: tell user if score is odd or even
* task 3: get a second score and compare them. tell which score is higher.
* 
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
    int score1, score2, mod;

    //prompt user input
    cout << "Enter first score here: ";
    cin >> score1;

    //process task 1
    mod = score1 % 2;

    //output task 1
    if (score1 >= 60)
        cout << "Passed!\n";
    else
        cout << "Failed!\n";

    //output task 2
    if (mod == 0)
        cout << "This score is even.\n";
    else
        cout << "This score is odd.\n";

    //prompt user input for second score
    cout << "Enter second score here: ";
    cin >> score2;

    //compare scores and output
    if (score1 > score2)
        cout << "The first score is greater.\n";
    if (score2 > score1)
        cout << "The second score is greater.\n";
    else (score1 == score2)
        cout << "The scores are equal.\n";

    return 0;
}

