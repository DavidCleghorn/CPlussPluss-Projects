#include <iostream>
using namespace std;
int main()
{
    float purchasePrice,
    salesTax = .065,
    countyTax = .02,
    totalTax,
    totalPrice;
    
    cout << "Please enter the total price of your sale:  $ ";
    cin >> purchasePrice;
    
    totalPrice = purchasePrice + (purchasePrice * (salesTax + countyTax));
    totalTax =  totalPrice - purchasePrice;
    
    cout << "The purchase price is $ " << purchasePrice << endl;
    cout << "The total tax is $ " << totalTax << endl;
    cout << "The price including tax is $ " << totalPrice << endl;
    
    
    return 0;
}
