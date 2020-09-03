/* 
 * File:   main.cpp
 * Author: Brandon Williams
 * Edition: 8th edition
 * Chapter: 4
 * Problem: 10
 * Created on August 24, 2020, 8:53 PM
 * Purpose: To write a program that will display the number of days of the 
 *          month entered.
 */

// System Libraries
#include <iostream> //Input/Output
using namespace std;

int main() 
{
    //Variable declaration
    short int month;
    short int year;
    
    //Getting input from the user
    cout << "Enter a month (1-12): ";
    cin >> month;
    
    // Input validation
    while (month < 1 || month > 12)
    {
        cout << "Invalid input! Please enter a number between 1 and 12. ";
        cin >> month;
    }
    
    //Getting input from the user
    cout << "Enter a year: ";
    cin >> year;
    
    // Input validation
    while (year < 1 || year > 2120)
    {
        cout << "Invalid input! Please enter a number between 1 and 2120. ";
        cin >> year;
    }
    
    // If Switch statements to determine if this is a leap year or not.
    // If we have a leap year then this condition will run
    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
    {
        switch (month)
        {
            case 1: cout << "31 days";
            break;
            case 2: cout << "29 days";
            break;
            case 3: cout << "31 days";
            break;
            case 4: cout << "30 days";
            break;
            case 5: cout << "31 days";
            break;
            case 6: cout << "30 days";
            break;
            case 7: cout << "31 days";
            break;
            case 8: cout << "31 days";
            break;
            case 9: cout << "30 days";
            break;
            case 10: cout << "31 days";
            break;
            case 11: cout << "30 days";
            break;
            case 12: cout << "31 days";
            break;
            default: cout << "Invalid Month!";
        }
    }
    else 
        // If we do not have a leap year then this condition will run
        switch (month)
        {
            case 1: cout << "31 days";
            break;
            case 2: cout << "28 days";
            break;
            case 3: cout << "31 days";
            break;
            case 4: cout << "30 days";
            break;
            case 5: cout << "31 days";
            break;
            case 6: cout << "30 days";
            break;
            case 7: cout << "31 days";
            break;
            case 8: cout << "31 days";
            break;
            case 9: cout << "30 days";
            break;
            case 10: cout << "31 days";
            break;
            case 11: cout << "30 days";
            break;
            case 12: cout << "31 days";
            break;
            default: cout << "Invalid Month!";
        }

    return 0;
}

