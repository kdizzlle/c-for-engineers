/* Name: Kelly Williams
* Date: 
* Description: 
* Class Section: 
*/

//System Libraries
#include <iostream>

//Function Prototypes

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    /*
    int N = 1;
    int score, total = 0;
    while (N > 5)
    {
        cout << "Enter score of student " << N << ": ";
        cin >> score;
        cout << "Student " << N << " has a score of " << score << endl;
        total += score; //add new score to total
        N += 1;
    }
    cout << "The average score is " << total / (N - 1) << endl;
*/
    //summation of i from 1 to 100
    int i = 1;
    int sum = 0;
    while (i <= 100)
    {
        sum += i;
        i++;
    }
    cout << "sum is: " << sum << endl;
    return 0;
}

