/* 
 * File:   main.cpp
 * Author: Jamie Kovacs
 * Created on January 5, 2019
 * Purpose: Gaddis Ch2.1 Sum of two numbers
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
int main(int argc, char** argv) 
{
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    int x;
    int y;
    int total;
    
    //Input or initialize values Here
    cout << "Input 2 integer numbers\n" ;
    cin >> x;
    cin >> y;
    
    //Process/Calculations Here
    total = x + y;
    
    //Output Located Here
    cout << "The sum of " << x << "+" << y << "=" << total ;
   
    //Exit
    return 0;
}
