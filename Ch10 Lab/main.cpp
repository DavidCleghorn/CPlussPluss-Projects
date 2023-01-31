// Movie Data Program
// Programmer: David Cleghorn
// Completed 4/26/2022
// Status : Complete
// This program will receive a number of students and the average number of
// movies they watched in a month

#include <iostream>
#include <iomanip>
using namespace std;

//Set up functions
void getData(int *, int);
void sortData(int *, int);
double getAvg(int *, int);

int main()
{
    //set up pointer and variables
    int numStudents;
    int *moviesWatched = nullptr;
    double average;
        
   //receive the number of students and validate input
    cout << "How many students were surveyed? ";
    cin >> numStudents;
    while(numStudents <= 0)
        {
            cout<<"Invalid entry\n";
            cout<<"Enter a positive number of students? ";
            cin >> numStudents;
        }
    
    //create an array
    moviesWatched = new int[numStudents];
    
    //go to function that will receive the number of movies
    getData(moviesWatched, numStudents);
    
    //Start a cout for final table
    cout << "\nNumber of Movies Watched\n"
    << "------------------------\n";
    
    //go to function to sort the array in ascending order
    sortData(moviesWatched, numStudents);
    
    //go to function that will average the number of movies watched by students
    average = getAvg(moviesWatched, numStudents);

    //This will end the table by showing the average number of movies watched
    cout << fixed << showpoint << setprecision(1);
    cout << "-----------------\n";
    cout << "Average:    " << average << endl;
    
    //This will free the allocated array
    delete [] moviesWatched;
    moviesWatched = nullptr;
    
    return 0;
}

//ask for the number of movies watched and put them in an array
//that is referenced by a pointer
void getData(int *array, int size)
{
    cout << "Enter the number of movies each student has seen in a month.\n";
    for (int index = 0; index < size; index++)
    {
        cout << "Student " << (index + 1) << ": ";
        cin  >> *(array + index);
    }
}

//This function will sot the array in ascending order
//and then print out the numbers from smallest to largest
void sortData(int *array, int size)
{
    int minIndex, minValue;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = *(array + start);
        for (int index = start + 1; index < size; index++)
        {
            if (*(array + index) < minValue)
            {
                minValue = *(array + index);
                minIndex = index;
            }
        }
        *(array + minIndex) = *(array + start);
        *(array + start) = minValue;
    }
    for (int start = 0; start < size; start++)
    {
        cout << *(array + start) << "\n";
    }
}

//This function will sum the number of movies watched
//and then return the average
double getAvg(int *array, int size)
{
    double sum = 0.0,
    avg = 0.0;
    for (int count = 0; count < size; count++)
    {
        sum += *(array + count);
    }
    
    avg = sum / size;
    return avg;
}



