//************************
//Array of Payroll Objects
//Programmer: David Cleghorn
//Completed : 4/12/2022
//Status    : Complete
//
//This program will create an array for
//payroll objects. It will open a file and
//recieve data about an employee's hours worked
//and pay. The program will then output the
//employee and their gross pay.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//create payroll class
class Payroll
{
    //variables used in the program
    private:
    double rate, hour, rates, hours;
    
    public:
    Payroll()
    {
        hours = 0;
        rates = 0;
    }
    
    //this will set the amount of hours worked
    void setHours(float hour)
    {
        hours = hour;
        
    }
    //this will set the pay rate
    void setRates(float rate)
    {
        
        rates = rate;
    }
    
    //this will return hours worked
    int getHour()
    {
        return hours;
    }
    
    //this will return pay rate
    float getRate()
    {
        return rates;
    }
    
    //this will calculate the gross pay
    float grossPay()
    {
        return rates*hours;
    }
    
};

//set the array value to 7
const int EMPLOYEES = 7;
int main()
{
    //define an array of Payroll objects
    Payroll payroll[EMPLOYEES];
    
    //open file from HD
    ifstream inputFile;
    inputFile.open("payroll.dat");
   
    //send output if it could not open the file
    if (!inputFile)
    {
        cout << "Error opening data file\n";
    }
    
    //read in the values from file, setting the 1st value
    //to hours worked, and the next to the pay rate
    // the for loop will loop through all 7 employees
    else
    {
    for (int index = 0; index < EMPLOYEES; index++)
        {
            float hour;
            float rate;

            inputFile >> hour;
            inputFile >> rate;
          
            //set the hours in the array
            payroll[index].setHours(hour);
            payroll[index].setRates(rate);
          
        }
        //close file and create the output heading
        inputFile.close();
        cout << fixed << showpoint << setprecision(2);
        cout << "Employee" << setw(10) << "Gross pay" << endl;
        cout << "========" << setw(9) << "========" << endl;
        
        //create a for loop that will cycle through the
        //array of all employees and show the gross pay
        //calculated in the function in the Payroll class
        for (int index = 0; index < EMPLOYEES; index++)
        {
            cout << setw(4) << index + 1 << ": " << setw(5) << "$ " << payroll[index].grossPay() << endl;
        }
    }
        
    
    return 0;
}


