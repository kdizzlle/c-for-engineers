/* Name: Kelly Williams
* Date: 
* Description: compare two numbers
* Class Section: 
*/

//System Libraries
#include <iostream>

//Function Prototypes

//Global Constants


/* Pseudocode:
* declare double n1, n2, bigger
* prompt user to enter two numbers
* if n1 > n2 then n1 is bigger
* if n2 > n1 then n2 is bigger
* else the numbers are the same
* output results
*/
//Main Function
using namespace std;
int main(int argc, char** argv)
{
    //declare variables
    double n1, n2, n3, largest;

    //prompt user input
    cout << "Enter three real numbers here: ";
    cin >> n1 >> n2 >> n3;

    //process
    if (n1 >= n2 && n1 >= n3)
        largest = n1;
    if (n2 >= n1 && n2 >= n3)
        largest = n2;
    if (n3 >= n1 && n3 >= n2)
        largest = n3;

    //output
    cout << largest << " is the largest number.\n";
    return 0;
}

