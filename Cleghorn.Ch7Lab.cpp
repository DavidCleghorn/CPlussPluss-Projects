//
//  main.cpp
//  Cleghorn.Lab7
// Math problem could not be solved
//  Created by David Cleghorn on 4/3/22.
//
#include <iostream>
#include <iomanip>
using namespace std;

class Tips
{
private:
    double taxRate;
    
public:
    
    double getTips (double tax)
    {
        
            if (tax >= 0)
            {
                taxRate = tax / 100;
            }
            else if (tax < 0)
            {
                cout << "Tax % cannot be less than 0. Please re-enter tax %: ";
                cin >> tax;
                taxRate = tax / 100;
            }
            else
            {
                tax = 0.085;
                taxRate = tax;
            }

        return tax;
    }
    
    void computePreTaxBill (double taxRate, double totalBill)
       {
        cout << fixed << showpoint << setprecision(2);
        
        cout << "********** Tip Helper **********\n";
        cout << "Enter the total bill amount: ";
        cin >> totalBill;
        cout << "Enter the desired tip % " ;
        cin >> taxRate;
        
        
        double preTaxBill = totalBill - (totalBill * (taxRate/100));
        cout << "The tip should be $ " << preTaxBill;
       
       }

};

int main()
{
    Tips tip;
    Tips preTax;
    double tax;
    double taxRate;
    double totalBill = 0.0;
    char again;
    
do
{
    cout << "This porgram will compute a restaurant tip based on a total\n";
    cout << "bill amount and the % the patron wishes to tip the server.\n";
    cout << "Tax % for this location: ";
    cin >> tax;
    taxRate = tip.getTips(tax);
    preTax.computePreTaxBill (taxRate, totalBill);
    
    cin >> again;
    
    
}
    
    while (again == 'Y' || again == 'y');

    return 0;
}
