/*
Program 10 #25
Programmer: Luke Gustafson
Course: CSC119 Introduction to Programming C++ Spring 2021
Submission Date: 4/22/2021
*/

// Import libraries
#include <iostream>
#include <fstream>

// Using standard namespace
using namespace std;

// Declare function
void htmlGenerate(string name, string description, ofstream &file);

// Main function
int main()
{
    // Define variables
    string name;
    char description[100];
    
    // Open index.html
    ofstream outFile;
    outFile.open("index.html");
    
    // Asking user input
    cout << "Whats your name: ";
    cin >> name;
    cin.ignore();
    cout << "Describe yourself:" << endl;
    cin.getline(description, 100);
    
    // Call function
    htmlGenerate(name, description, outFile);
    
    // Close index.html
    outFile.close();
}

// This function generates the text to make an html page
void htmlGenerate(string name, string description, ofstream &file)
{
    // Generate html text
    file << "<html>" << endl;
    file << "<head>" << endl;
    file << "</head>" << endl;
    file << "<body>" << endl;
    file << "\t<center>" << endl;
    file << "\t\t<h1>" << name << "</h1>" << endl;
    file << "\t<center>" << endl;
    file << "\t<hr />" << endl;
    file << "\t" << description << endl;
    file << "\t<hr />" << endl;
    file << "</body>" << endl;
    file << "</html>" << endl;
}