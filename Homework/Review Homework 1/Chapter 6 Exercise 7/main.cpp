/* 
 * File:   main.cpp
 * Author: Brandon Williams
 * Edition: 8th edition
 * Chapter: 6
 * Problem: 7
 * Created on September 1, 2020, 12:04 PM
 * Purpose: Convert Celsius temperatures to fahrenheit using functions and loops
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> // String Manipulation Library
using namespace std;

// Function Prototype
float celsius(short int);

//Execution Begins Here!
int main() 
{
    //Variable Declaration
    short int fahrenheit = 0;
    
    // Title of the table
    cout << "Fahrenheit" << setw(30) << "Celsius\n";
    cout << "===========================================\n";
    for(int i = 0; i <= 20; i++)
    {
        // Format to kep the celsius column straight and display two digits
        // for all degrees
        if (i >= 10)
        {
            cout << i << setw(34) << celsius(i) << endl;
        }
        else
        {
        cout << i << setw(35) << celsius(i) << endl;
        }
    }

    return 0;
}

// Converting the fahrenheit degrees to celsius and then returning the celsius
// degree to the for-loop
float celsius(short int fahrenheit)
{
    //Fahrenheit needs to be initialized after celsius is given a value.
    cout << fixed << showpoint << setprecision(2);
    float celsius = ((5.0/9.0) * (fahrenheit - 32.0));
    
    // Return to for-loop
    return celsius;
}