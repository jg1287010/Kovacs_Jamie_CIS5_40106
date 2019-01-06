/* 
 * File:   main.cpp
 * Author: Jamie Kovacs
 * Created on January 5, 2019
 * Purpose: Gaddis Ch2.3 Sales Tax
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
    double purchase_price, tax1, tax2, total_tax ;
    double  state_tax = .04 ;
    double country_tax = .02 ;
    
    //Input or initialize values Here
    cout << "Input price of purchase" << endl;   // ask user for purchase price
    cin >> purchase_price ;
    

    //Process/Calculations Here
    tax1 = purchase_price * state_tax ;    // calculate state sales tax
    tax2 = purchase_price * country_tax ;  // calculate country tax
    total_tax = tax1 + tax2 ;              // calculate total tax
    
    //Output Located Here
    cout << "The total sales tax is " << total_tax ;

    //Exit
    return 0;
}