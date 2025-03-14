/*
Universidad Amerike
Author: José Sierra
Pratice#:11
Date: 11/03/25
Description: This counts how many digits do you have in your number
*/

#include <iostream>
using namespace std;
unsigned long long number, digits;

int main()
{
    cout << "Type a whole number (The program is limited to 20 digits only)" << endl;
    cin>> number;
    while (number != 0)
    {
        number = number / 10;
        digits++;
    }
    cout<< "The amount of digits is: " << digits;
    
}