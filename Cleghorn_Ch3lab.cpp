//
//  main.cpp
//  Chapter 3Lab
//  Created by David Cleghorn on 2/25/22.
//  completed program
//  this program will collect property tax on 60% of assessed value of house
//  User must give input as to the value of the house and the amount assessed

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //create variables
    double propertyValue, //receive the house's actual value
    finalPropertyTax, //The amount of property tax as percentage of value
    assessedValue, //This is the actual value times percentage of property tax
    taxPer; //tax assessed per $100 of value
    //Page 102 says to set this to initialize const. with Caps on
    const double PROPERTYTAX = .6;
   
    //Get inputs into property value and tax
    cout << "Enter the actual property value of the house:  $ ";
    cin >> propertyValue;
    cout << "Enter the amount of tax per $100 of assessed value:  $  ";
    cin >> taxPer;
    
    //calculate assessed value by multiplying house value by POPERTYTAX percentage
    assessedValue = propertyValue * PROPERTYTAX;
    //Calculate final taxes by taking asses and multiplying tax and taking 1%
    finalPropertyTax = assessedValue * (taxPer *.01);
    //Show decimals for dollar amounts
    cout << fixed << setprecision(2) << showpoint;
    
    //Begin showing output since finished with CIN
    cout << "Property value is: "<< setw(2) << "$" << fixed << setprecision(2)
    << setw(11) << propertyValue << endl;
    cout << "Assessed value is: " << setw(2) << "$" << fixed << setprecision(2)
    << setw(11) << assessedValue << endl;
    
    cout << "Property tax is: " <<setw(4) << "$" << fixed << setprecision(2)
    << setw(11) << finalPropertyTax << endl;
    
    
    return 0;
}
