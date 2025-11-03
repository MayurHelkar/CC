// #include <iostream.h>   // fatal error: iostream.h: No such file or directory
#include <iostream>
// void main() // error: '::main' must return 'int'
int main()
{
    short i = 2500, j = 3000;
//    cout >> "i + j = " >> -(i + j); // error: 'cout' was not declared in this scope; did you mean 'std::cout'?
//    std::cout >> "i + j = " >> -(i + j);    // error: no match for 'operator>>' (operand types are 'std::ostream' {aka 'std::basic_ostream<char>'} and 'const char [9]')
    std::cout << "i + j = " << -(i + j);  
}