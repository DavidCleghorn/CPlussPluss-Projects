//
//  Sorting a Playlist
//  Ch9 Project
//  Programmer: David Cleghorn
//  Completed 4/19/2022
//  Complete
//  This program allows a user to enter 10 songs and their artists into
//   a playlist that is sorted alphabetically by artist

#include <iostream>
#include<string>
#include <iomanip>
using namespace std;

//Structure to combine different data types
struct Song
{
string artist;
string title;
};

//This function will get the information from user
void getMusicInfo(Song playlist[],int size);

//This function will use selection sort to sort artists
void sortList(Song playlist[],int size);

//This function will display the songs
void displayInfo(Song playlist[],int Size);

int main()
{
//create an array of 10 songs
int SIZE = 10;
Song playlist[SIZE];

//call function for information
getMusicInfo(playlist,SIZE);
    
//call function to sort
sortList(playlist,SIZE);
    
//call function to display info
displayInfo(playlist,SIZE);
return 0;
}

//The first function will ask for song details
void getMusicInfo(Song playlist[],int size)
{
    cout << "Enter Song Details\n" << endl;

    //use getline to receive info with spaces about artists and songs
        for(int index = 0; index < size; index++)
            {
    
                cout<<"Artist of song "<< index+1 <<": ";
                getline(cin,playlist[index].artist);
                cout << "Title of song " << index+1 << ": ";
                getline(cin,playlist[index].title);
            }
}

//The second function will sort the playlist by artist
void sortList(Song playlist[],int size)
{
    
    
    for(int minIndex = 0; minIndex < size; minIndex++)
    {
        for(int minValue = minIndex+1; minValue < size; minValue++)
        {
            //selection sort will go through the array and place
            //the artists in ascending order by placing them
            //at the front of the array
            if(playlist[minIndex].artist>playlist[minValue].artist)
                {
                    Song temp = playlist[minIndex];
                    playlist[minIndex] = playlist[minValue];
                    playlist[minValue] = temp;
                }
        }
    }
}



//This function will show the final output
//It will create the heading and song info
void displayInfo(Song playlist[],int Size)
{
cout << "\n\t\t  Playlist\n" << "Artist     \t\t\tTitle\n"
    << "===========================\n";
    for(int index = 0; index < Size ; index++)
    {
        cout << setw(21) << left << playlist[index].artist << setw(20) << playlist[index].title << endl;
    }
}
