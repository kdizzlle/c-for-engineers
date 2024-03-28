/* Name: Kelly Williams
* Date: 
* Description: overloading functions and pass by reference practice in class
* Class Section: 
*/

//bro she was going so fast on the board so mine doesnt work but she posted it on canvas

//System Libraries
#include <iostream>

//Function Prototypes
int sum(int, int);
int sum(int, int, int);
double sum(double, double);//function overloading
int Test(int&, int);//pass by reference

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    double a = 1.2, b = 2.3;
    int x = 3, y = 4, z = 5;
    cout << sum(a, b) << endl;
    cout << sum(1, 2, sum(x, y)) << endl;
    z = Test(x, y);
    cout << "x = " << x << "\ny = " << y << "\n z = " << z << endl;

    return 0;
}

void sum(int& n1, int n2, int& ans)
{
    n1 = n2 * n1;
    n2 = n2 * n2;
    ans = n1 + n2;
    return;
}

double sum(int& n1, int n2, int& ans)
{
    n1 = n2 * n1;
    n2 = n2 * n2;
    ans = n1 + n2;
    return;
}

int Test(int& n1, int n2)
{
    n1 = n1 * n1;
    return n1 + n2 * n2;
}