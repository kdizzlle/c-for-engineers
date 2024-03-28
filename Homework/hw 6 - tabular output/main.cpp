/* Name: Kelly Williams
* Date: 10/9/2023
* Description: tabular output
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
    int N = 1;
    cout << "N\t10*N\t100*N\t1000*N\n\n";
    while (N <= 5)
    {
        cout << N << "\t" << 10 * N << "\t" << 100 * N << "\t" << 1000 * N << endl;
        N++;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
