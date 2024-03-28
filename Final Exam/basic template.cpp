/* Name: Kelly Williams
* Date: 12/12/2023
* Description: Final Exam
* Class Section: ECE 1310.04
*/

//System Libraries
#include <iostream>
#include <cmath>    //for sqrt and stuff

//Function Prototypes
int Validate(double[], int);
double Distance(double[], double[], int, int);    //part a
double AreaOfTriangle(double, double, double);      //part b

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    cout << "=== Welcome to Kelly's Final Exam! ===\n";

    double x[5];   //array for x values
    double y[5];   //array for y values

    //get user input
    cout << "Enter the (x,y) coordinates, one pair at a time:\n";
    for (int i = 0; i < 5; i++)     //for loop to fill x and y arrays
    {
        cout << "\nx" << i + 1 << ": ";
        cin >> x[i];    //get x
        Validate(x, i);     //validate
        cout << "y" << i + 1 << ": ";
        cin >> y[i];    //get y
        Validate(y, i);     //validate
    }

    //pentagon is 3 triangles
    //3 distances (legs) for each triangle
    double area;    //total area of pentagon
    double a1, a2, a3;  //area of each triangle
    //7 total distances (some triangles share legs)
    //make an array for distances
    double d[7];    //d3 and d5 are shared legs

    //fill the array with the Distance function
    d[0] = Distance(x, y, 0, 1);    //d1
    d[1] = Distance(x, y, 2, 0);    //d2
    d[2] = Distance(x, y, 2, 1);    //d3
    d[3] = Distance(x, y, 4, 2);    //d4 -
    d[4] = Distance(x, y, 4, 1);    //d5 -
    d[5] = Distance(x, y, 4, 3);    //d6 -
    d[6] = Distance(x, y, 3, 1);    //d7

    //a1 has d1, d2, d3 (d[0], d[1], d[2])
    //a2 has d3, d4, d5 (d[2], d[3], d[4])
    //a3 has d5, d6, d7 (d[4], d[5], d[6])
    a1 = AreaOfTriangle(d[0], d[1], d[2]);
    a2 = AreaOfTriangle(d[2], d[3], d[4]);
    a3 = AreaOfTriangle(d[4], d[5], d[6]);
    /*
    cout << "\nThe area of a1 is " << a1 << endl    //for testing
        << "\nThe area of a2 is " << a2 << endl
        << "\nThe area of a3 is " << a3 << endl;
        */
    area = a1 + a2 + a3;
    cout << "\nThe total area of the pentagon is " << area << endl;

    return 0;
}

//input validation for x and y values
int Validate(double a[], int i)
{
    while (a[i] < 0)
    {
        cout << "\nPoints must be in the first quadrant!"
            << "\nThat means positive x and y values only, please!\n"
            << "Try again: \n";
        cin >> a[i];
    }
    return a[i];
}

//distance between point 1 (x1, y1) and point 2 (x2, y2)
double Distance(double x[], double y[], int a, int b) //part a
{
    //distance = sqrt((x2 - x1)^2 + (y2 - y1)^2)

    double distance, m, n;
    m = (x[b] - x[a]) * (x[b] - x[a]);
    n = (y[b] - y[a]) * (y[b] - y[a]);
    distance = sqrt(m + n);
    //cout << "\ndistance = " << distance << endl;  //for testing

    return distance;
}

//returns the area of a triangle given sides a, b, and c
double AreaOfTriangle(double a, double b, double c)      //part b
{
    double s = (0.5)*(a + b + c);  //s = semi-perimeter
    //cout << "\n s = " << s << endl;   //for testing
    double area = sqrt(s*(s - a)*(s - b)*(s - c));     //heron's formula
    //cout << "area = " << area << endl;    //for testing
    
    return area;
}