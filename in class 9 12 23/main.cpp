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
    //given any two digit integer xy, print the values as
    //x
    //y
    /* Solution: 
    declare int variables xy, x, y = 0

    prompt user to input xy

    get first digit:  divide integer xy by 10. this gets the first digit x since integer variables
    only return whole numbers in division without rounding, so dividing a two digit integer
    by 10 can only ever return the value in the first digit presented as x. 
    assign the result to x variable.
    
    get second digit: then if you do the number modulus 10, that would divide the number by 10
    and give us the remainder. in this case, since we already discussed that dividing by 10
    gives us the first digit as x, then xy/10 = x remainder y, thus xy%10 = y since y is the remainder.
    assign the result to y variable.
    
    print results:
    print x variable. new line
    print y variable. end.*/
    
    //code starts here

    //declare variables
    int xy, x, y = 0;

    //prompt user input
    cout << "Enter a two digit integer: ";
    cin >> num;

    //get first digit
    x = xy / 10;

    //get second digit
    y = xy % 10;

    //print results
    cout << "The first digit is: " << x << endl
        << "The second digit is: " << y << endl;

    return 0;
}

