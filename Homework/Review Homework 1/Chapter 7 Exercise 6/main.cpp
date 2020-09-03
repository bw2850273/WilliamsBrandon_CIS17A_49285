/* 
 * File:   main.cpp
 * Author: Brandon Williams
 * Edition: 8th edition
 * Chapter: 7
 * Problem: 6
 * Created on September 1, 2020, 12:04 PM
 * Purpose: Read data from a textfile to indicate how many days are rainy,
 *          cloudy, and sunny
 */
    #include <iostream>
    #include <fstream>
    using namespace std;
    
    // Function Prototypes
    int sum(int arr[], const int SIZE);
    int maxIndex( int arr[], const int SIZE);
    
    int main(){
        // Declaring variables
        const int MONTHS = 3;         // Number of rows
        const int DAYS = 30;          // Number of columns
        char read_file;               // Holds a reading from the file
        
        // Declaring Array and size
        int  rainy[MONTHS] = {0};      // Number of  rainy days.
        int cloudy[MONTHS] = {0};      // Number of cloudy days.
        int  sunny[MONTHS] = {0};      // Number of  sunny days.
        char data[MONTHS][DAYS];   // Holds the data.
        
        // Telling the compiler what file to read
        ifstream inputFile("RainOrShine.txt");

        // If an error happened during opening, we close the program
        if(!inputFile)
        {
            // error happened while opening
            cout<<"An error occured while opening the file.\n";
            return 0;
        }
        
        // Read the data from the textfile with a nested for-loop and switch
        // statements
        for(int month = 0; month < MONTHS; month++)
        {
            for(int day = 0; day < DAYS; day++)
            {
                if( inputFile>>read_file)
                {
                    switch(read_file)
                    {
                        case 'R':
                        // increment the rainy record of that month
                            rainy[month]++;
                            break;
                        case 'C':
                        // increment the cloudy record of that month
                            cloudy[month]++;
                            break; 
                        case 'S':
                        // increment the sunny record of that month
                            sunny[month]++;
                            break;
                        default:
                            cout<<"Wrong format.\n";
                            cout<<"The program will terminate.\n";
                            inputFile.close();
                            return 0;
                    }
                    // Store the data.
                    data[month][day] = read_file;
                }
                else
                {
                    cout<<"Incomplete readings,\n";
                    cout<<"The program will terminate.\n";
                    // Do not forget to close the file.
                    inputFile.close();
                    return 0;
                }
            }
        }
        cout<<"Data has been successfully read from the textfile.\n";

        // Print data,
        cout<<"============================================\n";
        cout<<"Here is the data: \n\n";

        // Loop over the months to print the different records,
        for(int month = 0; month < MONTHS; month++)
        {
            cout<<" The number of rainy days of month "<<month+6
                <<" : "<<rainy[month]<<std::endl;
        }
       
        cout<<"      The total number of rainy days : "
            <<sum(rainy, MONTHS)<<std::endl;
        
        cout<<"============================================\n";
        
        for(int month = 0; month < MONTHS; month++)
        {
            cout<<" The number of cloudy days of month "<<month+6
                <<" : "<<cloudy[month]<<std::endl;
        }
        
        cout<<"     The total number of cloudy days : "
            <<sum(cloudy, MONTHS)<<std::endl;
        
        cout<<"============================================\n";
        
        for(int month = 0; month < MONTHS; month++)
        {
            cout<<" The number of sunny days of month "<<month+6
                <<" : "<<sunny[month]<<std::endl;
        }
        
        cout<<"      The total number of sunny days : "
            <<sum(sunny, MONTHS)<<std::endl;
            
        cout<<"============================================\n";
        
        // Display which months had the most rainy, cloudy, and sunny days
        cout<<" The "<<maxIndex(rainy,MONTHS)+6
            <<"th month had the most rainy days.\n";
        cout<<" The "<<maxIndex(cloudy,MONTHS)+6
            <<"th month had the most cloudy days.\n";
        cout<<" The "<<maxIndex(sunny,MONTHS)+6
            <<"th month had the most sunny days.\n";
        
        cout<<"============================================\n";
        
        //Close file to release it for later usage
        inputFile.close();
        return 0;
    }
    
    // Obtain and return the total
    int sum(int arr[], const int SIZE)
    {
        // first initiaize the total with 0
        int total = 0;
        
        // loop over all the items adding their values.
        for(int i=0; i<SIZE; i++)
        {
            total += arr[i];
        }
        // return the computed total (sum).
        return total;
    }
    
    // Obtain and return the larget indexes
    int maxIndex(int arr[], const int SIZE)
    {
        // assume the first items has the  most value whose index
        // is 0
        int indexMax = 0;
        // Update the index  appropriately  if we have encountered a
        // larger value.
        for(int i=1; i<SIZE; i++)
        {
            if(arr[indexMax] < arr[i])
            {
                indexMax = i;
            }
        }
        // get the index.
        return indexMax;
    }