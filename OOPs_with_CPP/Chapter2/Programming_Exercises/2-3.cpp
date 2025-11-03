/*
2-3 Write a program that inputs a character from keyboard and displays its corresponding ASCII valu on the scree
*/

#include <iostream>

using namespace std;

int main()
{
    char Char;

    cout << "Enter a Character : ";
    cin >> Char;

    cout << "Character is " << Char;
    cout << " and it's ASCII value is " << int(Char) << endl;

    return 0;
}