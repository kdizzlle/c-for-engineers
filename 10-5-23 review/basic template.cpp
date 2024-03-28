/* Name: Kelly Williams
* Date: 
* Description: 
* Class Section: 
*/

//System Libraries
#include <iostream>

//Function Prototypes

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    /*
    //this was on the board - write the output on the board
    int y = 3;
    bool x = 1;
    while (x)
    {
        cout << y;
        y++;
        x = y < 6;
    }//outputs "345"

    //same thing but with changes
    int y = 3;
    bool x = 1;
    while (!x)
    {
        cout << y;
        y++;
        x = y < 6;
    }//wont output anything - nothing happens

    //same thing but with changes
    int y = 3;
    bool x = 1;
    while (!x || y>0)
    {
        cout << y;
        y++;
        x = y < 6;
    }//infinite loop, y will always be greater than 0

    //same thing but with changes
    int y = 3;
    bool x = 1;
    while (!x || y>0)
    {
        cout << y;
        y--;
        x = y < 6;
    }//infinite loop

    //new thing on the board
    int y = 0;
    bool x = 1;
    while (y < 12)
    {
        cout << "a ";
        y = y + 2;
    }//outputs "a " 6 times
    */
    //talked about using a while loop for input validation
    int N;
    cout << "Welcome to the game\nChoose your difficulty:\n"
        << "\t1. Easy\n\t2. Medium\n\t3. Hard\n";
    cin >> N;
    while (N < 1 || N > 3)
    {
        cout << "invalid. try again.\n";
        cout << "Enter 1, 2, or 3: ";
        cin >> N;
    }

    cout << "You chose ";
    if (N == 1)
        cout << "Easy\n";
    if (N == 2)
        cout << "Medium\n";
    if (N == 3)
        cout << "Hard\n";


    return 0;
}

