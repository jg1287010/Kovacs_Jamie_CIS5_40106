/* 
 * File:   main.cpp
 * Author: Jamie Kovacs
 * Created on January 5, 2019
 * Purpose: Gaddis Ch2.12 Land Calculation
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
    double sq_feet ;
    long double acres ;
    
    //Input or initialize values Here
    cout << "Input the number of square feet." << endl;
    cin >> sq_feet ;
    
    //Process/Calculations Here
    acres = sq_feet / 43560 ;
    
    //Output Located Here
    cout << "The number of acres is " << acres ;

    //Exit
    return 0;
}