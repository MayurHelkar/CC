#include <iostream>

int main()
{
    std::cout << "cout << \"x =\"x" << std::endl;
    int x = 456;
//    cout << "x ="x; // error: unable to find string literal operator 'operator""x' with 'const char [4]', 'long long unsigned int' arguments
    std::cout << "x =" << x;

    std::cout << std::endl;

    std::cout << "cout << \"x =\"x" << std::endl;
//    int m = 5;
//    int n
}