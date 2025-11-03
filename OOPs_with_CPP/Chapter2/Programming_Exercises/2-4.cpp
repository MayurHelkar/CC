/*
2-4 Write a program to read the values of a, b and c and display the value of x, where
x = a / b - c;
Test your program for the following values:
(a) a = 250, b = 85, c = 25
(b) a = 300, b = 70, c = 70
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 250;
    int b = 85;
    int c = 25;
    int x = a - b / c;

    cout << "x = a - b / c, when a = 250, b = 85 and c = 25 : " << x << endl;

    a = 300, b = 70, c = 70;
    x = a - b / c;
    cout << "x = a - b / c, when a = 300, b = 70 and c = 70 : " << x << endl;

    return 0;
}