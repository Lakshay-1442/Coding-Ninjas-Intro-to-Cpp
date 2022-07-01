
/*
    Write a program to calculate the total salary of a person. 
    The user has to enter the basic salary (an integer) and the grade (an uppercase character), 
    and depending upon which the total salary is calculated as -
        totalSalary = basic + hra + da + allow – pf

    where :
    hra   = 20% of basic
    da    = 50% of basic
    allow = 1700 if grade = ‘A’
    allow = 1500 if grade = ‘B’
    allow = 1300 if grade = ‘C' or any other character
    pf    = 11% of basic.

    Round off the total salary and then print the integral part only.
    Note: Try finding out a function on the internet to do so

    Input format :
    Basic salary & Grade (separated by space)

    Output Format :
    Total Salary
*/


#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	// Write your code here
    
    int basic;
    float total;
    char g;
    
    cin >> basic >> g;
    
    if (g == 'A')
    {
        total = basic + 0.2*basic + 0.5*basic + 1700 - 0.11*basic;
    }
    
    else if (g == 'B')
    {
        total = basic + 0.2*basic + 0.5*basic + 1500 - 0.11*basic;
    }
    
    else
    {
        total = basic + 0.2*basic + 0.5*basic + 1300 - 0.11*basic;
    }
    
    cout << fixed << setprecision(0) << total << endl;
    
    return 0;
	
}