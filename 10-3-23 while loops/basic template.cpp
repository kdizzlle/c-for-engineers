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
    int a = 1;
    while (a < 6)
    {
        cout << a << "\t" << a * a << endl;
        a++;
    }

    a = 100;
    while (a >= 100)
    {
        cout << a << endl;
        a = a - 10;
    }

    a = 1;
    while (a < 9)
    {
        cout << "$$$$$$$$" << endl;
        a++;
    }
}

