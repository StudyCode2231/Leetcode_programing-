#include<iostream>

#include <cmath>
using namespace std;

int main()
{
    double basic;
    cin>>basic;
    char grades;
    cin>>grades;
        double hra = 0.2 * basic;
    double da = 0.5 * basic;
    double pf = 0.11 * basic;
    
    int allowance;

    if(grades == 'A') 
    {
        allowance = 1700;
    }

    else if(grades == 'B') 
    {
        allowance = 1500;
    }

    else
    {
        allowance = 1300;
    }
    
    double totalSalary = basic + hra + da + allowance - pf;

    /*
        An internal function implemented in
        <cmath> library to round off the decimal values.
    */

    cout<<totalSalary;
}