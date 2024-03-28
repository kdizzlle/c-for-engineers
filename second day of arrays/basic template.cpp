/* Name: Kelly Williams
* Date: 11/30/2023
* Description: more in class practice and learning arrays
* Class Section: ECE 1310.04
*/

/* stuff on board
* 
* random number generator
* a = l + rand()%(h-l+1)
* 
* i didnt get all of it but its on canvas
*/

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

//Function Prototypes
int sum(int[], int);
void DisplayArray(int[], int);

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    
    const int size = 12;
    int x[size];
    //cout << "The current system time is " << time(0) << endl;
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        x[i] = 50 + rand() % 51;
        //cout << x[i] << endl;
    }

    DisplayArray(x, size);

    cout << "The average score is " << sum(x, size) / size << endl;

    int b[6] = { 1, 3, 2, 6 };
    cout << "The sum of all the elements in b is " << sum(b, 6) << endl;

    return 0;
}


int sum(int arr[], int size)
{
    int Sum = 0;
    for (int i = 0; i < size; i++)
    {
        Sum += arr[i];
    }
    return Sum;
}

void DisplayArray(int arr[], int size)
{
    cout << "\nIndex\tElement\n";
    for (int i = 0; i < size; i++)
        cout << "  " << i << "\t  " << arr[i] << endl;
    cout << endl;
    return;
}