# Templates
## Creating generic classes or functions.
### Allows us to write code that works for any data type without rewriting it for each type.

Feature of templates :
* Avoid code duplication by allowing one function or class to work with multiple data types, mainly allowing generic functions and classes.
* Provide type safety, unlike using void* pointers or macros.
* Can be specialized for specific data types when needed.
* Form the basis of STL containers and algorithms like vector, map, and sort.

Define Templates
Defined using the keywords "template" and "typename" as shown :
```c
template <typename A, typename B, ...>
entity_definition
```
The `template` keyword is used to define that the given *entity* is a template and 
`typename` keyword is used to define *template parameters* which are nothing but types that will be provided when an instance is created. 
The keyword typename can be replaced by keyword class anytime.

The above syntax can define templates for three components (entities) of C++ language:
* Function Templates
* Class Templates
* Variable Templates (Since C++ 14)

Create Template Instance
After definition, we can create the instance of template for any desired type by passing the type as template parameter as shown:
```c
name_of_entity<type1, type2, ...>
```
The type1 will be substituted by the typename A in the definition, type2 will be substituted in place of typename B and so on.

Function Templates
In C++, templates allow us to write generic code for functions that can be used with different data types, and this can be achieved by function templates. 
For example, we can write a function that gives you the maximum of two numbers, but it can accept any number whether it is int, float, or double.

Class Templates
Class templates like function templates, are useful when a class defines something that is independent of the data type. 
It is useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.

Template Variables (Since C++ 14)
A template variable is a variable that can work with any type specified when the variable is used, similar to how we use templates for functions or classes.
Syntax:


template <typename T> constexpr T pi = T(3.14159);
In the above statement, pi is the template variable. 
We use constexpr with the template variable because it ensures that the variable is a constant expression and is evaluated at compile time rather than at runtime.

Default Template Arguments
Like normal parameters, we can also specify default type arguments to templates. 

Template Non-Type Arguments
We can pass non-type arguments to templates. 
Non-type parameters are mainly used for specifying max or min values or any other constant value for a particular instance of a template. 
The important thing to note about non-type parameters is, that they must be const. The compiler must know the value of non-type parameters at compile time. 
Because the compiler needs to create functions/classes for a specified non-type of value at compile time.

Template Argument Deduction
Template argument deduction automatically deduces the data type of the argument passed to the templates. 
This allows us to instantiate the template without explicitly specifying the data type.

Note: It is important to note that the template argument deduction for classes is only available since C++17, 
so if we try to use the auto template argument deduction for a class in previous version, it will throw an error.

Note: The above program will fail compilation in C++14 and below compiler since class template arguments deduction was added in C++17.

Function Template Arguments Deduction
Function template argument deduction has been part of C++ since the C++98 standard. We can skip declaring the type of arguments 
we want to pass to the function template and the compiler will automatically deduce the type using the arguments we passed in the function call.

Note: For the function templates which is having the same type for the arguments like template<typename t> void function(t a1, t a2){}, we cannot pass arguments of different types.

Class Template Arguments Deduction (C++17 Onwards)
The class template argument deduction was added in C++17 and has since been part of the language. 
It allows us to create the class template instances without explicitly definition the types just like function templates.

Template Metaprogramming
In C++, template metaprogramming refers to template perform computation at the compile time rather than runtime. 
To perform computation at compile time, template metaprogramming involves recursive template structures where templates call other templates during compilation.
