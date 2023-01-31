//
//Encrypting and Decrypting Program
//Programmer: David Cleghorn
//Completed 5/10/2022
//Status: Complete
//This program will read an encrypted text file from HD and
//decrypt the text into a separate file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    
    
    char ch;
    
  
    //open the encrypted file named "encryption"
    fstream inFile("encryption.txt", ios::in);
    
    //If infile cannot be opened give a cout statment
    if (!inFile)
    {
        cout << "Cannot open the input file.";
        return 0;
    }
    
    //if an outfile cannot be opened, give a cout statement
    fstream outFile("encryptionReversed.txt", ios::out);
    if (!outFile)
    {
        cout << "Cannot open the ouput file.";
        return 0;
    }
    
    
    //While it is not the end of the file,
    //get a new character and subtract ten to ASCII code
    while (!inFile.eof())
    {
        inFile.get(ch);
        ch -= 10;
        outFile << ch;
  
    //if there is a failure reading the file,
    //give a cout statement
        if (inFile.bad())
        {
            cout << "There is a failure reding the file.";
        }
    }
    
    //close the files that are being read and written to
    inFile.close();
    outFile.close();
   
    return 0;
}
