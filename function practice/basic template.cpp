/* Name: Kelly Williams
* Date: 11/7/2023
* Description: more in class user defined function practice. learning void functions
* Class Section: ECE 1310.04
*/
using namespace std;
//System Libraries
#include <iostream>


//Function Prototypes
double Absolute(double);    //returns the absolute value of the input
void Greeting(string);      //outputs a greeting for the program
void LetterGrade(int);      //returns a letter grade for an entered score
int Validate(int, int, int);    //input validation
int ProgPicker();   //allows user to pick a program to run
void DisplayRow(int, int);
void DisplayCol(int, int);

//Global Constants

//Main Function

int main(int argc, char** argv)
{
    int choice = ProgPicker();
    switch (choice)
    {
    case 1:
    {
        Greeting("Absolute Value Calculator");

        double x;
        cout << "enter a number: ";
        cin >> x;

        cout << "function output: " << Absolute(x) << endl;
        break;
    }
    case 2:
    {
        Greeting("Grader");
        int score, num;

        cout << "Enter the student's score (0-100): ";
        cin >> score;
        Validate(score, 0, 101);
        LetterGrade(score);

        break;
    }
    case 3:
    {
        Greeting("num of i");
        cout << "Enter number of rows/cols (1-9): ";
        int i;
        cin >> i;
        Validate(i, 0, 10);
        cout << "Enter number to be displayed (0-9): ";
        int j;
        cin >> j;
        Validate(j, -1, 10);
        
        DisplayRow(i, j);

        break;
    }
    default:
        cout << "\nhow did we get here?\n";
        break;
    }
    

    

    return 0;
}



double Absolute(double x)   //returns the absolute value of the input
{
    if (x < 0)
        return -1 * x;
    else
        return x;
}

void Greeting(string project)
{
    cout << "\n----- Welcome to " << project << "! -----\n\n";
    return;
}

void LetterGrade(int score)
{
    string grade;
    if (score >= 90)
        grade = "A";
    else if (90 > score >= 80)
        grade = "B";
    else if (80 > score >= 70)
        grade = "C";
    else if (70 > score >= 60)
        grade = "D";
    else
        grade = "F";
    cout << "Score: " << score << ", Grade: " << grade << endl;

}

int Validate(int x, int a, int b)
{
    while (x <= a || x > b)  //may need to change the inequalities as needed
    {
        cout << "\n\nInvalid input! Try again.\n";
        cin >> x;
    }
    return x;
}

int ProgPicker()
{
    int choice;
    cout << "What do you want to run?\n"
        << "\t1. absolute value calculator\n"
        << "\t2. letter grade\n"
        << "\t3. num of i\n" << endl;
    cin >> choice;
    Validate(choice, 0, 4);
    return choice;
}

//i from 0-9, make it a square


void DisplayCol(int i, int j)
{
    for (int n = 0; n < i; n++)
    {
        cout << j;
    }
    cout << endl;
}

void DisplayRow(int i, int j)
{
    for (int n = 0; n < i; n++)
    {
        DisplayCol(i, j);
    }
    cout << endl;
}