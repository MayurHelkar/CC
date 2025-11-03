/*
2-2 Write a program to read two numbers from the keyboard and display the larger value on the screen
*/
#include <iostream>

using namespace std;

int main()
{
    int no1;
    int no2;

    cout << "Enter 2 numbers : ";
    cin >> no1 >> no2;

    if(no1 > no2)
    {
        cout << no1 << " is greater than " << no2 << endl;
    }
    else
    {
        cout << no2 << " is greater than " << no1 << endl;
    }
    
    return 0;
}