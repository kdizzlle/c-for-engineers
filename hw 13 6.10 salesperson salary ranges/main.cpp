/* Name: Kelly Williams
* Date:
* Description:
* Class Section:
*/

//System Libraries
#include <iostream>

//Function Prototypes
int SalaryRange(int);
void DisplayArray(int[], int);

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    int range[9] = { 0,0,0,0,0,0,0,0,0 };   //array of counters for salary ranges

    cout << "=== Welcome to Salesperson Salary Ranges! ===\n";
    int salary, sales=0;

    while (sales >= 0)
    {
        cout << "\n(-1 to quit)\nSalesperson's gross sales this week: ";
        cin >> sales;
        if (sales == -1)
        { 
            cout << "\ngoodbye!\n";
            break;
        }

        salary = 200 + (sales * 0.09);  //200 per week + 9% of sales
        cout << endl << "salary: " << salary << endl;

        range[SalaryRange(salary)] += 1;
    }
    
    cout << "\nSalary Range\tSalespeople\n";
    DisplayArray(range, 9);
    
    

    return 0;
}

int SalaryRange(int salary)
{
    if (salary <= 299)
        return 0;
    if (salary >= 300 && salary <= 399)
        return 1;
    if (salary >= 400 && salary <= 499)
        return 2;
    if (salary >= 500 && salary <= 599)
        return 3;
    if (salary >= 600 && salary <= 699)
        return 4;
    if (salary >= 700 && salary <= 799)
        return 5;
    if (salary >= 800 && salary <= 899)
        return 6;
    if (salary >= 900 && salary <= 999)
        return 7;
    if (salary >= 1000)
        return 8;
}

void DisplayArray(int range[], int size)
{
    int min = 200;
    int max = 299;
    for (int i = 0; i < size-1; i++)
    { 
        cout << "$" << min << " - " << max << "\t" << range[i] << endl;
        min += 100;
        max += 100;
    }
    cout << "$1000 and over\t" << range[size-1] << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
