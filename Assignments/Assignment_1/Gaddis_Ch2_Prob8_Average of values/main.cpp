/* 
 * File:   main.cpp
 * Author: Jamie Kovacs
 * Created on January 5, 2019
 * Purpose: Gaddis Ch2.5 Average of values
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
    int numb_1, numb_2, numb_3, numb_4, numb_5 ;
    double sum, average ;
    
    //Input or initialize values Here
    cout << "Input 5 numbers." << endl;    //ask user for 5 numbers
    cin >> numb_1 ;
    cin >> numb_2 ;
    cin >> numb_3 ;
    cin >> numb_4 ;
    cin >> numb_5 ;
    
    //Process/Calculations Here
    sum = numb_1 + numb_2 + numb_3 + numb_4 + numb_5 ;
    average = sum / 5 ;
    
    //Output Located Here
    cout << "The average is " << average ;

    //Exit
    return 0;
}