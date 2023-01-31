// Case manipulator program
//  Programmer: David Cleghorn
//  Completed: 5/3/2022
// Status: Complete
//
// This program will convert a sentence to all
// capital letters, lowercase letters,
// and finally flips the cases
#include <iostream>
#include <string>
#include <cctype>

using namespace std;


// Function prototypes for 3 functions
void upper(char[]);
void lower(char[]);
void flip(char[]);
int main()
{
    //initialize an array size
    const int SIZE = 100;
    //create 3 different arrays to manipulate
    char input1[SIZE], input2[SIZE], input3[SIZE];
    
    cout << "Please enter a string of text with both\n"
        << "uppercase and lowercase letters: \n";
    
    //get string 1 input from user
    cin.getline(input1, SIZE);
    
    //copy string 1 to string 2
    strcpy(input2, input1);
    
    //copy string 1 to string 3
    strcpy(input3, input1);
    
    cout << "Each letter converted to uppercase returns: \n";
    //call the uppercase function
    upper(input1);
    cout << input1;
    
    cout << "\nEach letter converted to lowercase returns: \n";
    //call the lowercase function
    lower(input2);
    cout << input2;
    
    cout << "\nThe letters flipped in case returns: \n";
    //call the function that flips the cases
    flip(input3);
    cout << input3;
    
    return 0;
}

void upper(char input[])
{
    //start at beginning of array
    int index = 0;
    
    while (input[index])
    {
        //change letters in array to uppercase and cycle through array
        input[index] = toupper(input[index]);
        index++;
    }
    
}

void lower(char input[])
{
    //start at beginning of array
    int index = 0;
    
    while (input[index])
    {
        //change letters in array to lowercase and cycle through array
        input[index] = tolower(input[index]);
        index++;
    }
    
}

void flip(char input[])
{
    //start at beginning of array
    int index = 0;
    
    while (input[index])
    {
        //if statement will evaluate if it is uppercase
        //and if so change to lowercase
        if (isupper(input[index]))
            input[index] = tolower(input[index]);
       
        else
        //else statement will then change the lowercase to uppercase
        //for remaining characters
        input[index] = toupper(input[index]);
        index++;
    }
}

