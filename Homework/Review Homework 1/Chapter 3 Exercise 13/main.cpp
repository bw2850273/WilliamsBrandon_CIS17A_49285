/* 
 * File:   main.cpp
 * Author: Brandon Williams
 * Edition: 8th edition
 * Chapter: 3
 * Problem: 13
 * Created on August 24, 2020, 8:31 PM
 * Purpose: To write a program that will convert U.S. dollar amounts to 
 *          Japanese yen and Euros
 */

// System Libraries
#include <iostream> // Input/Output Library
#include <iomanip> // Stream manipulator library
using namespace std;

int main() 
{
    //Variable Declaration
    float dollar;
    
    //Getting input from the user to give a value to the dollar variable
    cout << "Enter a dollar amount here and I will convert it into Japanese "
            << " yen and to Euros: ";
    cin >> dollar;
    
    //Constant variables must be defined after the dollar variable has been 
    //given a value.
    const float YEN_PER_DOLLAR = dollar * 105.95;
    const float EUROS_PER_DOLLAR = dollar * 0.85;
    
    //Formatting output in fixed-point notation
    cout << fixed << showpoint << setprecision(2);
    
    //Final output to the user
    cout << dollar << " U.S. dollars in Japanese yen is " << YEN_PER_DOLLAR 
            << " yen.\n";
    cout << dollar << " U.S. dollars in Euros is " << EUROS_PER_DOLLAR 
            << " euros.\n";
    
    return 0;
}

