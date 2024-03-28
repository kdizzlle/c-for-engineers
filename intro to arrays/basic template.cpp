/* Name: Kelly Williams
* Date: 11/28/23
* Description: intro to arrays
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
    const int size = 5; 
    /*you could initialize each element one at a time:
    int a[size];   //initializes an array a with size elements
    a[0] = 9;   //element 0 = 9
    a[1] = 10;   //element 1 = 10
    a[2] = 8;   //element 2 = 8
    a[3] = 7;   //element 3 = 7
    a[4] = 6;   //element 4 = 6
    */
    //or you could declare and initialize at the same time
    int a[size] = { 9,10,8,7,6 };
    
    cout << "The first element is " << a[0] << endl;
    cout << "The last element is " << a[4] << endl;
    cout << endl;

    //now display all the elements
    //and add them together
    int sum = 0;
    cout << "\n====Elements of Array a====\n";
    cout << "Index\tElement\n";
    for (int i = 0; i < size; i++)
    {
        cout << "  " << i << "\t   " << a[i] << endl;
        sum += a[i];
    }
    cout << endl;
    cout << "\nThe average of all the elements is " << sum / 5 << endl;

    //now double each of the array elements to get a new array
    //display the new array
    cout << "\n====Array a Doubled====\n";
    cout << "Index\tElement\n";
    for (int i = 0; i < size; i++)
    {
        a[i] *= 2;
        cout << "  " << i << "\t   " << a[i] << endl;
    }
    cout << endl;

    //now re-initializing each element with user-entered values
    //new array
    const int sizeB = 7;
    int b[sizeB];

    for (int i = 0; i < sizeB; i++)
    {
        cout << "Please enter the value of element No." << i + 1 << ": ";
        cin >> b[i];
    }

    //output new array
    cout << "\n====Elements of Array b====\n";
    cout << "Index\tElement\n";
    for (int i = 0; i < sizeB; i++)
    {
        cout << "  " << i << "\t   " << b[i] << endl;
    }

    //only double even elements
    cout << "\n====Array b Even Elements Doubled====\n";
    cout << "Index\tElement\n";
    for (int i = 0; i < sizeB; i++)
    {
        if(b[i]%2==0)
            b[i] *= 2;
        cout << "  " << i << "\t   " << b[i] << endl;
    }
    cout << endl;

    return 0;
}

