// Word Separator Program
//  Programmer: David Cleghorn
// Status : Completed : 5/3/2022
//  This program separates  words in a sentence
// with no space characters

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char runOn[100];
    string separated;
    
    cout << "Input a sentence with all the words running together, \n"
        << "but the first character of each new word is an uppercase letter: \n";
    
    //receive a sentence from user
    cin >> runOn;
       
    //cycle through index as long as there is no null terminator
    for (int index = 0; runOn[index]!='\0'; index++)
       {
          //Do not include the first letter
          if(index != 0)
          {
              //Perform this if a letter in index is uppercase
              if(isupper(runOn[index]))
              {
                  //append a copy of space character to separated
                  separated += ' ';
                  //Now, convert the uppercase letters to lower
                  runOn[index] = tolower(runOn[index]);
              }
          }
           //append a copy of runOn array to separated
            separated += runOn[index];
                  
          }
    cout << "The corrected snetence is: \n" << separated << endl;
       
    
   return 0;
}




