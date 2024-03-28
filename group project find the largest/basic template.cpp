/* Name: Kelly Williams
* Date: 10/26/2023
* Description: group work in class - question 4.17 in book
* Class Section: ECE 1310.04
*/

/*Pseudocode
* declare int variables: num=0, count=1, largest=0;
* 
* prompt user to enter 10 integers one at at time
* get first num
* set largest = first num
*   this is in case all negatives are entered
* 
* start loop
* get num
* after num is entered, test if number >= largest
*   if true, then number = largest
* increase count by 1
* loop again if count <= 10
* 
* output largest num to user
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
    //print the largest of 10 integers
    int num = 0, count = 1, largest = 0;
    cout << "Please input 10 integers, one at a time: \n";
    cout << "Integer " << count << ": ";
    cin >> num;
    count++;
    largest = num;

    do {
        cout << "Integer " << count << ": ";
        cin >> num;
        if (num >= largest)
            largest = num;
        count++;
    } while (count <= 10);

    cout << "The largest value is: " << largest << endl;

    return 0;
}

