/* Name: Kelly Williams
* Date:
* Description:
* Class Section:
*/

/* Pseudocode
* 
* declare double pi and int denom=1, term=1
* 
* pi=4
* output first term
* 
* for loop
* for (term=2, term <= 1000, term++)
*   denom += 2      to keep denominator odd  
* 
*   if term is even
*       pi = pi - (4/denom)
*   else if term is odd
*       pi = pi + (4/denom)
* 
*   output pi
* end loop
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
    double pi=0;
    double denom = 1;
    cout << "pi after:\n";

    for (int term = 1; term <= 1000; term++)
    {
        if ((term % 2) == 0) // even
            pi = pi - (4 / denom);
        if ((term % 2) == 1) // odd
            pi = pi + (4 / denom);
        cout << term << " terms: " << pi << endl;
        denom += 2;

    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
