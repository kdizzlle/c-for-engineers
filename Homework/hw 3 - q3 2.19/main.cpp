/* Name: Kelly Williams
* Date: 9/18/2023
* Description: (Arithmetic, Smallest, and Largest) Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest and largest of these numbers
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
    int num1, num2, num3, sum, avg, prod, small, large;

    //prompt user input
    cout << "Input three integers: ";
    cin >> num1 >> num2 >> num3;

    //process numbers
    sum = num1 + num2 + num3;
    avg = sum / 3;
    prod = num1 * num2 * num3;

    //find smallest
    if (num1 <= num2 && num1 <= num3)//if num1 is less than or equal to num2 and less than or equal to num3
        small = num1;//then num1 is the smallest
    
    if (num2 <= num1 && num2 <= num3)//if num2 is less than or equal to num1 and less than or equal to num3
        small = num2;//then num2 is the smallest
    
    if (num3 <= num2 && num3 <= num1)//if num3 is less than or equal to num2 and less than or equal to num1
        small = num3;//then num3 is the smallest

    //find largest
    if (num1 >= num2 && num1 >= num3)//if num1 is less than or equal to num2 and less than or equal to num3
        large = num1;//then num1 is the largest

    if (num2 >= num1 && num2 >= num3)//if num2 is less than or equal to num1 and less than or equal to num3
        large = num2;//then num2 is the largest

    if (num3 >= num2 && num3 >= num1)//if num3 is less than or equal to num2 and less than or equal to num1
        large = num3;//then num3 is the largest

    //output results
    cout << "Sum is " << sum << endl
        << "Average is " << avg << endl
        << "Product is " << prod << endl
        << "Smallest is " << small << endl
        << "Largest is " << large << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
