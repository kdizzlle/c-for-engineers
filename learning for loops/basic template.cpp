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
    //on board
    int y = 0;
    for (int x = 1; x < 5; x++)
        y += x;

    cout << "y = " << y << endl;
*/
    int sum = 0;
    //add all even numbers between 200 and 300
    for (int i = 200; i <= 300; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << "sum of even numbers between 200 and 300 is: " << sum << endl;

    return 0;
}

