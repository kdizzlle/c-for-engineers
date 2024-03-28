/* Name: Kelly Williams
* Date: 10/17/2023
* Description: sentinel controlled loops and nesting - in class work
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
    //done on projector
    int N = 1, score = 0, total = 0;
    while (!(score == -1))
    {
        cout << "Enter score of student #" << N << " (press -1 to pause) : ";
        cin >> score;
        if (score != -1)
        {
            cout << "Student #" << N << " has a score of " << score << endl;
            total += score;
            N += 1;
        }
    }
    cout << "Pause here. You have processed " << N - 1 << " scores so far.\n";
    if (N > 0)
        cout << "\nThe average score is " << total / (N - 1) << endl;

    return 0;
}

