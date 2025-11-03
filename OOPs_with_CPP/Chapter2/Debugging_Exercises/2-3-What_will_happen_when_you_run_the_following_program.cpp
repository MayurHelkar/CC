//  #include <iostream.h>   // fatal error: iostream.h: No such file or directory
#include <iostream> 
//  void main() // error: '::main' must return 'int'
int main()
{
    int i=10, j=5;
    int modResult=0;
    int divResult=0;
    modResult = i%j;
//    cout << modResult << " ";   // error: 'cout' was not declared in this scope; did you mean 'std::cout'?
    std::cout << modResult << " ";
    divResult = i/modResult;    // Exception has occurred. Arithmetic exception
//    cout << divResult;  // error: 'cout' was not declared in this scope; did you mean 'std::cout'?
    std::cout << divResult;
}