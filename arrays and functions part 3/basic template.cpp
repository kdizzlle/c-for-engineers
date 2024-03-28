/* Name: Kelly Williams
* Date: 12/5/2023
* Description: in class work/lecture notes
* Class Section: ECE 1310.04
*/

//System Libraries
#include <iostream>

//Function Prototypes
int search(int[], int, int);    //search an array for a value
void BubbleSort(int[], int);    //easiest to understand but least efficient algorithm
void DisplayArray(int[], int);

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    int test[6] = { 5,1,6,9,3,8 };
    cout << "The test array:\n";
    DisplayArray(test, 6);
    int val;
    cout << "=== Searching ===\n" << "Value to search for: ";
    cin >> val;
    int si = search(test, 6, val);
    if (si == -1)
        cout << val << " is not in the array.\n";
    else
        cout << val << " is at element " << si + 1 << " of the array.\n";

    cout << "\n=== Bubble Sort ===\n";
    cout << "Sorted array:\n";
    BubbleSort(test, 6);

    return 0;
}

int search(int x[], int size, int key)    //search an array for a value
{
    //returns the index of the element in the array that is equal to the key value
    //if no matching value, returns -1
    //only works if there is one matching value
    //if there are more than one matching value then it will return the last matching value's index
    int match = -1;
    for (int i = 0; i < size; i++)
    {
        if (x[i] == key)
        {
            match = i;
        }
    }
    return match;
}

void BubbleSort(int x[], int size)
{
    int temp;
    for (int j = 1; j < size; j++)//outer loop keeps looping until all values are in order
    {
        for (int i = 0; i < size - 1; i++)//passes through array
        {
            if (x[i] > x[i + 1])//compares values
            {
                //swap values
                temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
            }
        }
    }
    DisplayArray(x, size);
}

void DisplayArray(int x[], int size)
{
    cout << "\nIndex\tElement\n";
    for (int i = 0; i < size; i++)
        cout << "  " << i << "\t   " << x[i] << endl;
    cout << endl;
}