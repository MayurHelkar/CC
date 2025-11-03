// #include <iostream.h>   // fatal error: iostream.h: No such file or directory
#include <iostream>
//  void main() // error: '::main' must return 'int'
int main()
{
    int i = 0;
    i = i + 1;
//    cout << i << " ";   // error: 'cout' was not declared in this scope; did you mean 'std::cout'?
    std::cout << i << " ";
//    /*comment\*//i = i + 1; // error: expected primary-expression before '/' token
    /*comment\*/i = i + 1;
//    cout << i;  // error: 'cout' was not declared in this scope; did you mean 'std::cout'?
    std::cout << i;
}