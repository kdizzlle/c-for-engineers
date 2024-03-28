/* Name: Kelly Williams
* Date: 10/9/2023
* Description: Gas Mileage
* Class Section: ECE 1310.04
*/

/* Pseudocode
* 
* decalre doubles for miles, gallons, mpg, sum, and mpgTot
* int count
* 
* while miles > 0
*   prompt user to input miles driven and gallons used (-1 to quit)
*   mpg = miles/gallons
*   count++
*   sum = sum + mpg
*   mpgTot = sum/count
*   then output the mpg for this tankful and the total average mpg
*/

//System Libraries
#include <iostream>
#include <iomanip> //setprecision

//Function Prototypes

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    //declare variables
    double miles = 0;
    double mileTot = 0;
    double galTot = 0;
    double mpg, gals, mpgTot;

    while (miles >= 0)
    {
        cout << "Enter miles driven (-1 to quit): ";
        cin >> miles;
        if (miles == -1)
            break;
        cout << "Enter gallons used: ";
        cin >> gals;

        //now for the math
        //calculate mpg
        mpg = miles / gals;
        //get total miles
        mileTot = mileTot + miles;
        //get total gas used
        galTot = galTot + gals;
        //divide the sum by the count to get the avg mpg total
        mpgTot = mileTot / galTot;
        
        //output results
        cout << fixed << "MPG this tankful: " << setprecision(6) << mpg << endl
            << "Total MPG: " << setprecision(6) << mpgTot << endl << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
