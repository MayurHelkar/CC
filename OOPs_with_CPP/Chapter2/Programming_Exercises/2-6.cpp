/*
2-5 Redo Exercise 2.5 using a class called temp and member functions
*/

#include <iostream>

using namespace std;

class temp
{
    public:
    double cels;
    double fahr;

    double fah_to_cels(double Fahr)
    {
        cels = ( - 32) * 5 / 9;
        return cels;
    }
    
    double cels_to_fahr(double Fahr)
    {
        Fahr = cels * 9 / 5 + 32;
        return Fahr;
    }
}temp;

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
        cout << "Celsius : " << temp.fah_to_cels(Fahrenheit);
    }
    else if(!f_c)
    {
        cout << "Enter Celsius value : ";
        cin >> Celsius;
        cout << "Fahrenheit : " << temp.cels_to_fahr(Fahrenheit);
    }
    else
    {
        cout << "Invalid operation" << endl;
    }

    return 0;
}