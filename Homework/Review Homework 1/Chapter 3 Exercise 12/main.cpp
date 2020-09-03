/* 
 * File:   main.cpp
 * Author: Brandon Williams
 * Edition: 8th edition
 * Chapter: 3
 * Problem: 12
 * Created on August 24, 2020, 8:04 PM
 * Purpose: Convert Celsius temperatures to fahrenheit
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std;

//Execution Begins Here!
int main() 
{
    //Variable Declaration
    short int celsius;
    
    cout << "Please enter a temperature in celsius and I will convert it to"
            << " fahrenheit: ";
    //Obtaining input from the user to put in the celsius variable
    cin >> celsius;
    
    //Fahrenheit needs to be initialized after celsius is given a value.
    short int fahrenheit = ((9.0/5.0) * celsius + 32);
    
    cout << celsius << " degrees celsius is " << fahrenheit << " degrees"
            << " fahrenheit.";

    return 0;
}