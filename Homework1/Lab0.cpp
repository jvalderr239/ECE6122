/*
Author: Jose Valderrama
Class: ECE 6122 Advanced Programming Techniques
Last Date Modified: August 30 2021
Description: Getting PACE-ICE Access and Using the g++ Compiler
I, Jose Valderrama , have successfully accessed my pace-ice account. 
I am able to transfer files from my pace-ice account to my local machine using an ftp client. 
I am ready for the next assignment on pace-ice.
*/
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string singleQuote = "\'";
    string doubleQuote = "\"";
    string backslash = "\\";
    string fullname = "Jose Valderrama";
    string first = "My name is: " + fullname;
    string second = "This (" + doubleQuote + ") is a double quote.";
    string third =  "This ("+ singleQuote +") is a single quote.";
    string fourth = "This (" + backslash + ") is a backslash.";
    string words[] = {first, second, third, fourth};

    for(int i; i < words->size(); ++i)
    {
        cout << words[i] << endl;
    }
}
