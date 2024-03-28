/* Name: Kelly Williams
* Date: 9/18/2023
* Description: (Multiples) Write a program that reads in two integers and determines and prints if the first is a multiple of the second. [Hint: Use the modulus operator.]
* Class Section: ECE 1310.04
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
    int num1, num2, mod;

    //prompt user input
    cout << "Input two integers, bigger one first: ";
    cin >> num1 >> num2;

    //process numbers
    mod = num1%num2;

    //output results
    if (mod == 0)
        cout << num1 << " is a multiple of " << num2 << ".\n";
    else
        cout << num1 << " is not a nultiple of " << num2 << ".\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
