/* 
 * File:   main.cpp
 * Author: Brandon Williams
 * Edition: 8th edition
 * Chapter: 8
 * Problem: 7
 * Created on September 1, 2020, 5:04 PM
 * Purpose: Modify the binarySearch function to search an array of strings
 *          // instead of an array of ints.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> // String Manipulation Library
using namespace std;

//Function Prototype
int binarySearch(string [], const int, string);

// Execution Starts here
int main()
{
// Declaring variables and array
const int NUM_NAMES = 20;
string chosen;
// Sorting the array in alphabetical order otherwise binary search won't work
string names[NUM_NAMES] = {"Allen, Jim", "Allison, Jeff", "Collins, Bill", 
                            "Griffin, Jim", "Harrison, Rose", "Holland, Beth", 
                            "James, Jean", "Javens, Renee", "Johnson, Jill", 
                            "Looney, Joe", "Pike, Gordon", "Pore, Bob",
                            "Rose, Geri", "Rutherford, Greg", "Setzer, Cathy",
                            "Smith, Bart", "Stamey, Marty", "Taylor, Terri",
                            "Weaver, Jim", "Wolfe, Bill" };
cout << "Enter the name you wish to search for and I will give you the location"
        << " in the array: ";
// Must use getline when user has to type a space
getline(cin, chosen);
// Setting the return position to a variable
int f_name = binarySearch(names, NUM_NAMES, chosen);
// If-Else statement to produce different messages to the user if the name is
// found or not.
if (f_name >= 0 && f_name <= 20)
{
    cout << chosen << " is at position " << f_name << endl;
}
else
{
    cout << chosen << " was not found, did you make a typo?" << endl;
}
// End program when this point is reached
return 0;
}

// Binary Search function taken from the textbook
int binarySearch(string array[], const int numElems, string chosen)
{
    int first = 0,
        last = numElems - 1,
        middle,
        position = -1;
    bool found = false;
    
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] == chosen)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > chosen)
            last = middle - 1;
        else
            first = middle + 1;
    }
    // This is the position of the array that we will report to the user. If the
    // name is not found then -1 will be returned.
    return position;
}
