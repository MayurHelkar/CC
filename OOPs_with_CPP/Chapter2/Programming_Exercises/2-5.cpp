/*
2-5 Write a C++ program that will ask for a temperature in Fahrenheit and display it in Celsius
*/

#include <iostream>

using namespace std;

int main()
{
    double Celsius;
    double Fahrenheit;
    int f_c;

    cout << "Temperature to be inputted : \'Fahrenheit(0) or Celsius(1) :: ";
    cin >> f_c;

    if(f_c)
    {
        cout << "Enter Fahrenheit value : ";
        cin >> Fahrenheit;
        Celsius = (Fahrenheit - 32) * 5 / 9;
        cout << Celsius << endl;
    }
    else if(!f_c)
    {
        cout << "Enter Celsius value : ";
        cin >> Celsius;
        Fahrenheit = Celsius * 9 / 5 + 32;
        cout << Fahrenheit << endl;
    }
    else
    {
        cout << "Invalid operation" << endl;
    }

    return 0;
}