//
//  main.cpp
//  p27dot1
//
//  Created by David Cleghorn on 2/28/22.
//

#include <iostream>
using namespace std;
int main()
{
    int candyBar;
    double costPer,
    moneyEarned;
    
    cout << "How many cand bars were sold? \n";
    cin >> candyBar;
    cout << "How much does each candy bar cost? \n";
    cin >> costPer;
    moneyEarned = candyBar * costPer;
    cout << "You earned $" << moneyEarned << endl;
    
    
    return 0;
}
