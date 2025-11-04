#include <iostream>

using namespace std;

// void main(void) // error: '::main' must return 'int'
// int main()
int main(int)
{

    return; // error: return-statement with no value, in function returning 'int' [-fpermissive]
}