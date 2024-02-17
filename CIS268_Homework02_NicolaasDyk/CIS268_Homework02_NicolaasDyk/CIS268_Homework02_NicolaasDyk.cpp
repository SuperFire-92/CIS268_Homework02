// CIS268_Homework02_NicolaasDyk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

string convertToBinary(int x);

int main()
{
    int n;

    cout << "Enter number of bits: ";
    cin >> n;

    cout << "There are " << pow(2, n) << " ways to arrange " << n << " bits" << endl << endl;
    cout << "Possiblities" << endl;
    cout << "============" << endl;
    for (int i = 0; i < pow(2, n); i++)
    {
        cout << setfill('0') << setw(n) << convertToBinary(i) << endl;
    }
}

string convertToBinary(int x)
{
    //Create a string to store the binary number
    string binary = "";

    //Find the highest power of 2 that is not higher than x
    int n = 1;
    while (n * 2 <= x)
    {
        n = n * 2;
    }

    //Cycle through every power of 2 from n to 1 until we find every binary digit
    while (n != 0)
    {
        if (x >= n)
        {
            binary += "1";
            x = x - n;
        }
        else
        {
            binary += "0";
            
        }
        
        n = n / 2;
    }

    return binary;
}