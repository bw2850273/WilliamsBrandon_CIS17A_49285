/* 
 * File:   main.cpp
 * Author: Brandon Williams
 * Edition: 8th edition
 * Chapter: 5
 * Problem: 11
 * Created on September 1, 2020, 8:53 AM
 * Purpose: Calculate a population's growth rate using loops
 */

// System Libraries
#include <iostream> //Input/Output
using namespace std;

int main() 
{
    //Variable declaration
    int start;
    float pop_inc;
    short int days;
    int total;
    
    //Getting input from the user
    cout << "Enter your starting population size: ";
    cin >> start;
    //Input Validation
    while (start < 2)
    {
        cout << "Invalid input! Please enter a number greater than or equal to"
                << " 2 as your starting population size: ";
        cin >> start;
    }
   
    cout << "Enter your daily population increase percentage as a decimal point: ";
    cin >> pop_inc;
    //Input Validation
    while (pop_inc < 0)
    {
        cout << "Invalid input! Please enter a number greater than or equal to"
                << " 0 as your population increase percentage: ";
        cin >> pop_inc;
    }
   
    cout << "Enter the number of days that your population will multiply: ";
    cin >> days;
    //Input Validation
    while (days < 1)
    {
        cout << "Invalid input! Please enter a number greater than or equal to"
                << " 1 as the number of days that your population will multiply: ";
        cin >> days;
    }
    
    total = start;
    for(int i = 0; i < days; i++)
    {
        total = total + (total * pop_inc);
    }
    
    cout << "Your population after " << days << " days will be about: " << total 
            << " people.\n";
    return 0;
}

