/* Name: Kelly Williams
* Date: 10-12-23
* Description: in class practice on while loops
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
    /*
    //done on the board
    //what is outputted at the end?
    int x = 3, k = 1;
    while (k < 5)
    {
        x += 3;
        k++;
    }//output is x=15
    cout << x;
*/
    /*
    //going over summation from last class again - she did this bit on board
    int sum = 0, k = 1;
    while (k <= 100)
    {
        sum += k;
        k++;
    }
    cout << "The summation is " << sum; //summation = 5050
*/
    /*
    //now she asks: find the summation of all odd numbers from 11 to 211
    // 11+13+15+....+211=?
    int summation = 0, n = 11;
    while (n <= 211)
    {
        summation += n;
        n += 2;//increase k by 2 to get every odd number
    }
    cout << "The summation is " << summation;
*/
    /*
    //now we are using doubles
    //1 + 1/2 + 1/3 + ... + 1/12 = ?
    double denom = 1;
    double sum = 0;
    while (denom <= 12)
    {
        sum += (1 / denom);
        denom += 1;
    }
    cout << "The summation is " << sum;*/

    //now we are doing factorials
    //find the factorial of 10 (10!)
    //10*9*8*...*1
    /*
    int k = 10, fac = 1;
    while (k > 0)
    {
        fac *= k;
        k--;
    }
    cout << "The factorial is " << fac;*/

    //now 18!
    //18! is too big for int data type. too many bytes
    //we should use long data type (which is long int type)
    //long data type is still not big enough but we can use double
    /*
    double k = 18, fac = 1;
    while (k > 0)
    {
        fac *= k;
        k--;
    }
    cout << "The factorial is " << fac;*/

    //now exponential values
    // 2^12
    /*
    double fac = 1, k = 1;
    while (k <= 12)
    {
        fac *= 2;
        k++;
    }
    cout << "2^12 = " << fac; */

    //now summation of exponents
    //summation of 2^i from 0 to 12
    double i = 1, expo = 1, sum = 1;
    while (i <= 12)
    {
        expo *= 2;
        sum += expo;
        i++;
    }
    cout << "summation of 2^i from 0 to 12 = " << sum;

    return 0;
}

