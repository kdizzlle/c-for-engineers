/* Name: Kelly Williams
* Date: 
* Description: 
* Class Section: 
*/

//System Libraries
#include <iostream>

//Function Prototypes
void Display2D(int[][4], int);  //display 2d array

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    //declares an array with 3 rows and 4 columns and initializes 3 rows with 4 values each
    int x[3][4] = { {2,4,6,8},{0,1,2,3},{9,7,5,1} };

    /* visual representation of x (matrix)
    *          0 1 2 3
    *     0  | 2 4 6 8 |
    * x = 1  | 0 1 2 3 |
    *     2  | 9 7 5 1 |
    */

    //output
    cout << "x[1][2] = " << x[1][2] << endl;    //x[row][col]

    //display the whole array
    cout << "The whole array:\n";
    for (int i = 0; i < 3; i++) //i=num of rows
    {
        for (int j = 0; j < 4; j++) //j=num of cols
        {
            cout << " " << x[i][j]; //displays one row with 4 cols
        }
        cout << endl;   //new row
    }
    /*
    //triple each array value
    cout << "\nThe array tripled:\n";
    for (int i = 0; i < 3; i++) //i=num of rows
    {
        for (int j = 0; j < 4; j++) //j=num of cols
        {
            x[i][j] *= 3;
            cout << " " << x[i][j]; //displays one row with 4 cols
        }
        cout << endl;   //new row
    }
*/
    /*
    //double only the odd numbers
    cout << "\nThe array with odd values doubled:\n";
    for (int i = 0; i < 3; i++) //i=num of rows
    {
        for (int j = 0; j < 4; j++) //j=num of cols
        {
            if (x[i][j] % 2 == 1)   //if mod is 1 then odd
                x[i][j] *= 2;   //double odd
            cout << " " << x[i][j]; //displays one row with 4 cols
        }
        cout << endl;   //new row
    }
*/

    //passing 2d arrays into functions
    cout << "\narray displayed using function:\n";
    Display2D(x, 3);

    return 0;
}

//display 2d array
void Display2D(int x[][4], int rows)    //we could do this differently with vectors or pointers but thats outside the scope of this class
{
    for (int i = 0; i < rows; i++) //i=num of rows
    {
        for (int j = 0; j < 4; j++) //j=num of cols
        {
            cout << "\t" << x[i][j]; //displays one row with 4 cols
        }
        cout << endl;   //new row
    }
}