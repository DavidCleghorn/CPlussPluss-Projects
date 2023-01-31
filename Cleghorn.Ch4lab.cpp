//
//  David Cleghorn
//  Fully completed on 3/6/22.
// This program will measure the speed of sound through
//  air, water, and steel in feet per second

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int selection; //This will take menu selection from 1-3
    float numberOfFeet; //This will ask user for # of feet travelled
   float soundWaveSpeed; //This will calculate number of feet divided by speed
   
   //Create the selection menu and get input from user
    cout <<"This program will tell you how long it takes a sound wave\n";
    cout << "to travel a specific distance through a particular medium.\n\n";
    cout << "Select a substance for the sound to travel through:\n";
    cout << "\t1.  Air\n";
    cout << "\t2.  Water\n";
    cout << "\t3.  Steel\n";
    
    cin >> selection;
    
    
    //First if statement will give operation for selection 1 (air)
    if (selection == 1)
    {
       //get number of feet from user and calculate distance in air
       //set to 4 decimal places
        cout << "Enter the number of feet the sound wave will travel: ";
        cin >> numberOfFeet;
       soundWaveSpeed = numberOfFeet / 1100;
        cout << "The sound wave will travel " << numberOfFeet
       << " feet through air in " << fixed << showpoint << setprecision(4) << soundWaveSpeed
       << " seconds.";
    }
   //Else if statement. If 1 is not selected, check for 2 (water)
    else if (selection == 2)
    {
       //get number of feet from user and calculate distance in water
       //set to 4 decimal places
       cout << "Enter the number of feet the sound wave will travel: ";
       cin >> numberOfFeet;
      soundWaveSpeed = numberOfFeet / 4900;
       cout << "The sound wave will travel " << numberOfFeet
      << " feet through water in " << fixed << showpoint << setprecision(4) << soundWaveSpeed
      << " seconds.";
    }
   //Else if statement. If 2 is not selected, check for 3 (steel)
    else if (selection == 3)
    {
       //get number of feet from user and calculate distance in steel
       //set to 4 decimal places
       cout << "Enter the number of feet the sound wave will travel: ";
       cin >> numberOfFeet;
      soundWaveSpeed = numberOfFeet / 16400;
       cout << "The sound wave will travel " << numberOfFeet
      << " feet through steel in " << fixed << showpoint << setprecision(4) << soundWaveSpeed
      << " seconds.";
    }
   //A trailing else statement is used if 1, 2, or 3 are not selected in the menu
   else
    
        cout << "Please enter a 1, 2, or 3.";
    
    return 0;
    
}
