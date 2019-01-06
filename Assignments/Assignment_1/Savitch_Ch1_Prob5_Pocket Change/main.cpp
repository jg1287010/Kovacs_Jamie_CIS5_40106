/* 
 * File:   main.cpp
 * Author: Jamie Kovacs
 * Created on January 5, 2019
 * Purpose: Savitch Ch1.8 Pocket Change
 *           
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    int number_quarter, number_dime, number_nickel ; 
    double quarter = 25, dime = 10, nickel = 5 ;
    double total, total_quarter, total_dime, total_nickel ;
    
    //Input or initialize values Here
    cout << "Enter the number of Quarters, Dimes and Nickels" << endl;      // ask user for number of quarters, dimes, and nickels
    cin >> number_quarter ;
    cin >> number_dime ;
    cin >> number_nickel ;
    cout << endl;
    
    //Process/Calculations Here
    total_quarter = number_quarter * quarter ;           // calculate value of quarters
    total_dime = number_dime * dime ;                    // calculate value of dimes
    total_nickel = number_nickel * nickel ;              // calculate value of nickels
    total = total_quarter + total_dime + total_nickel ;  // calculate total of all
    
    //Output Located Here
    cout << number_quarter << " Quarters + " << number_dime << " Dimes + " << number_nickel << " Nickels = " << total << " cents!" ;

    //Exit
    return 0;
}