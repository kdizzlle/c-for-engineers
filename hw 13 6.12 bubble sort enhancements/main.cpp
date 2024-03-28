/* Name: Kelly Williams
* Date:
* Description:
* Class Section:
*/

//System Libraries
#include <iostream>

//Function Prototypes
void DisplayArray(int[], int);
void BubbleSort(int[], int);

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;   //fills the array with random ints from 1-10
    }

    cout << "The unsorted array:\n";
    DisplayArray(arr, size);

    //do the modified bubble sort
    BubbleSort(arr, size);

    cout << "\nThe sorted array:\n";
    DisplayArray(arr, size);

    return 0;
}

//display 1 dimensional array
void DisplayArray(int x[], int size)
{
    cout << "\nIndex\tElement\n";
    for (int i = 0; i < size; i++)
        cout << "  " << i << "\t   " << x[i] << endl;
    cout << endl;
}

//bubble sort
void BubbleSort(int x[], int size)
{
    int temp;
    int a = 1;
    int b = 0;  //checks for swaps
    for (int j = 1; j < size; j++)//outer loop keeps looping until all values are in order
    {
        for (int i = 0; i < size - a; i++)//passes through array
        {
            if (x[i] > x[i + 1])//compares values
            {
                b++;    //swap count increase
                //swap values
                temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
            }
        }
        //part a
        a++;    //reduces the "size" of the array for the next pass since the "highest" relative value is in the correct spot after each pass
        
        //part b
        //must check b before resetting to 0
        if (b == 0)    //if no swap has been made
            break;  //end loop

        b = 0;  //reset b after swap
    }
}