// Division Sales Data
//
//  Cleghorn.Ch6Lab
//
//  Completed by David Cleghorn on 3/25/22.
// Status: Complete
// This program  determines which of a company’s four divisions
// had the greatest sales for a quarter. It includes two functions
// that are called by main:  getSales and findHighest.

#include <iostream>
#include <iomanip>
using namespace std;

//create 2 function prototypes to get sales
//and get highest selling division
double getSales(string);
void findHighest(double, double, double, double);

//This function will gather sales data from
//the different divisions. It will call the
//other functions and store the sales data
int main()
{
    double NE, SE, NW, SW;
    
    //call function 4 times and pass the names of the divisions
    //to get back the sales numbers and store values
    NE = getSales("Northeast");
    
    SE = getSales("Southeast");
    
    NW = getSales("Northwest");
    
    SW = getSales("Southwest");
    
   //pass sales data to function that determines highest selling division
    findHighest(NE, SE, NW, SW);
    
    return 0;
}

//This function will show the different divisions and ask the user
//to enter the sales for each one. It will validate if it is > 0
//and if not, it will ask for the user to re-enter amount.
double getSales(string division)
{
    double sales;
    
    //get sales for each division passed
            cout << "Enter the quarterly sales for the " << division;
            cout << " division: ";
            cin  >> sales;
        
    //if sales are lower than zero, ask user to re-enter data
        while (sales < 0)
               {
                  cout << "Sales figures cannot be negative. "
                   << "Please re-enter. \n";
                   cout << "Enter the quarterly sales for the " << division;
                   cout << " division: ";
                  cin >> sales;
               }
    //return sales numbers to each division
    return sales;
        }

//This function will compare divisions and create output
//that shows the user which division sold the most, and how much.
void findHighest(double NE, double SE, double NW, double SW)
{
    cout << fixed << showpoint << setprecision(2);
    
    //create if satement to compare divisions and create output
    // for whichever is greatest
    if (NE > SE && NE > NW && NE > SW)
    {
        
        cout << "\nThe Northeast division had the highest sales this quarter. \n"
        << "Their sales were $" << NE << endl;
    }
    else if (SE > NE && SE > NW && SE > SW)
    {
        
        cout << "\nThe Southeast division had the highest sales this quarter. \n"
        << "Their sales were $" << SE << endl;
    }
    else if (NW > NE && NW > SE && NE > SW)
    {
        
        cout << "\nThe Northwest division had the highest sales this quarter. \n"
        << "Their sales were $" << NW << endl;
    }
    else if (SW > NE && SW > SE && SW > NW)
    {
       
        cout << "\nThe Southwest division had the highest sales this quarter. \n"
        << "Their sales were $" << SW << endl;
    }

}

    

