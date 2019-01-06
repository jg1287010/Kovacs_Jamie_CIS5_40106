/* 
 * File:   main.cpp
 * Author: Jamie Kovacs
 * Created on January 5, 2019
 * Purpose: Savitch Ch1.10 Big C
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
    char user_defined;
    
    //Input or initialize values Here
    cout << "Input the character to make the Big C!\n" << endl;
    cin >> user_defined ;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout << "    " << user_defined << " " << user_defined << " " << user_defined << endl;
    cout << "   " << user_defined << "     " << user_defined << endl;
    cout << "  " << user_defined << endl;
    cout << "  " << user_defined << endl;
    cout << "  " << user_defined << endl;
    cout << "  " << user_defined << endl;
    cout << "  " << user_defined << endl;
    cout << "   " << user_defined << "     " << user_defined << endl;
    cout << "    " << user_defined << " " << user_defined << " " << user_defined << endl;

    //Exit
    return 0;
}