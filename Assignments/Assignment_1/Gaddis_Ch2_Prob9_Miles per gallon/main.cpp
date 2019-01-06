/* 
 * File:   main.cpp
 * Author: Jamie Kovacs
 * Created on January 5, 2019
 * Purpose: Gaddis Ch2.10 Miles per gallon
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
    double gallons ;
    double distance_trvld ;
    double MPG ;
    
    //Input or initialize values Here
    cout >> "Input number of gallons and distance traveled." << endl;  // ask user for gallons and distance traveled
    cin >> gallons ;
    cin >> distance_trvld ;
    
    //Process/Calculations Here
    MPG = distance_trvld / gallons ;    // calculate miles per gallon
    
    //Output Located Here
    cout << "Your MPG is " << MPG ;

    //Exit
    return 0;
}