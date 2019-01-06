/* 
 * File:   main.cpp
 * Author: Jamie Kovacs
 * Created on January 5, 2019
 * Purpose: Savitch Ch1.5 Product and Quotient of 2 Numbers
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
    int number1;
    int number2;
    int product;
    int quotient;
    
    //Input or initialize values Here
    cout << "Input 2 integer numbers." << endl;
    cout << "\n" ;
    cin >> number1;
    cin >> number2;
    
    //Process/Calculations Here
    product = number1 * number2;
    quotient = number2 / number1;
    
    //Output Located Here
    cout << "The product of " << number1 << "*" << number2 << " = " << product << endl;
    cout << "\n" ;
    cout << "The quotient of " << number2 << "/" << number1 << " = " << quotient ;
    
    //Exit
    return 0;
}