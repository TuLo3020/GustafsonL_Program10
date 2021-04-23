/*
Program 10 #24
Programmer: Luke Gustafson
Course: CSC119 Introduction to Programming C++ Spring 2021
Submission Date: 4/22/2021
*/

// Importing the libraries
#include <iostream>
#include <fstream>

// Use standard namespace
using namespace std;

// Declare function
void find(ifstream &file);

// Main function
int main()
{
    
    // Open Random.txt
    ifstream inFile;
    inFile.open("Random.txt");
    
    // Call Function
    find(inFile);
    
    // Close Random.txt
    inFile.close();
}

// This function finds the ammount of numbers, the sum of those numbers, and the average of the numbers then dispalys the data
void find(ifstream &file)
{
    
    // Declare variables
    int number;
    double average;
    double sum = 0;
    double nums = 0;
    
    // Calculate sum of numbers and ammount of numbers
    while (file >> number)
    {
        sum += number;
        nums++;
    }
    
    // Calculate average
    average = sum / nums;
    
    // Display data to console
    cout << "Number of numbers: " << nums << endl;
    cout << "Sum of all numbers: " << sum << endl;
    cout << "Average of all numbers: " << average << endl;
}