/*
Program 10 #25
Programmer: Luke Gustafson
Course: CSC119 Introduction to Programming C++ Spring 2021
Submission Date: 4/22/2021
*/

// Import libraries
#include <iostream>
#include <fstream>

// Use standard namespace
using namespace std;

// Declare function
void find(ifstream &file);

// Main function
int main()
{
    // Open LineUp.txt
    ifstream inFile;
    inFile.open("LineUp.txt");
    
    // Call function
    find(inFile);
    
    // Close LineUp.txt
    inFile.close();
}

// This function finds what student is in the front and back then displays the data
void find(ifstream &file)
{
    // Define variables
    string student;
    string front;
    string back;
    
    file >> student;
    
    // Set variables
    front = back = student;
    
    // Find positions 
    while (!file.eof())
    {
        if (student < front)
        {
            front = student;
        }
        if (student > back)
        {
            back = student;
        }
        file >> student;
    }
    
    // Display data
    cout << front << " is in front" << endl;
    cout << back << " is in the back" << endl;
}