#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class InvetoryItem
{
private:
    int partNum;
    string description;
    int onHand;
    double price;

public:
    
    void storeInfo(int p, string d, int oH, double cost);
    
    int getPartNum()
    {return partNum;}
    
    string getDescription()
    {return description;}
    
    int getOnHand()
    {return onHand;}
    
    double getPrice()
    {return price;}
        
};

void InvetoryItem::storeInfo(int p, string d, int oH, double cost)
{
    partNum = p;
    description = d;
    onHand = oH;
    price = cost;
}

void storeValues(InvetoryItem&);
void showValues(InvetoryItem);

int main()
{
    InvetoryItem part;
    storeValues(part);
    showValues(part);
    
    return 0;
}

void storeValues(InvetoryItem &item)
{
    int partNum;
    string description;
    int qty;
    double price;
    
    cout << "Enter data for the new part number \n";
    cout << "Part number :";
    cin >> partNum;
    cout << "Description: ";
    cin.get();
    
    getline(cin, description);
    cout <<  "Quantity on hand : ";
    cin >> qty;
    cout << "Unit price: ";
    cin >> price;
    
    item.storeInfo(partNum, description, qty, price);
}

void showValues(InvetoryItem item)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Part number : " << item.getPartNum() << endl;
    cout << "Description : " << item.getDescription() << endl;
    cout << "Units on hand: " << item.getOnHand() << endl;
    cout << "Price : $" << item.getPrice() << endl;
}
