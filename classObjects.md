# $${\color{red}Classes}$$ and $${\color{blue}Objects}$$

<details>
<summary>$${\color{red}Class}$$</summary>

| Datatype | Purpose | Use | Keyword | class definition |
| ----- | ---------- | --- | --------- | No memory allocated |
| $${\color{greenYellow}User-defined}$$ | $${\color{Magenta}Template}$$<br>$${\color{Magenta}Blueprint}$$ | Create objects<br>Similar $${\color{green}properties}$$ and $${\color{orange}behavior}$$ | `class` |

| Members | `Data` | `Functions`| object declaration |
| ------- | ---- | --------- | ------ |
| Alias | $${\color{green}Properties}$$<br>$${\color{green}Attributes}$$ | $${\color{orange}Methods}$$<br>$${\color{orange}Behavior}$$ | `className objectName;` |
</details>

<details>
<summary>$${\color{blue}Objects}$$</summary>

| | Purpose | Use |
| ----- | ------- | --- |
| $${\color{blue}Objects}$$ | keyword `class` | Instance of a $${\color{red}class}$$ |
</details>

<details>
<summary>$${\color{greenLime}Scope Resolution Operator (::)}$$</summary>

| Operator | `Symbol` | Syntax | Purpose | Applications |
| -------- | -------- | ------ | ------- | ------------ |
| Scope Resolution | `::` | `scope_name :: identifier` | Access the identifiers defined inside some other scope in the current scope | Accessing Global Variables<br>Namespace Resolution<br>Iterator Declaration<br>Define Class Member Function Outside Class<br>Access Class's Static Members<br> Refer to Base Class Member in Derived Class |

| Applications | `Program code` | Description |
| ------------ | -------------- | ----------- |
| Accessing Global Variables | `cout << ::x;` | When a local variable shadows a global variable, meaning both have the same name, use :: to access the global variable. |
| Namespace Resolution | `namespace N {    int val = 10;};   cout << N::val;` | Access the identifier such variables, functions and classes declared inside namespaces. |
| Iterator Declaration | `vector<int>::iterator first = arr.begin(); cout << *first;` | An iterator is an object that behaves like a pointer to traverse and access elements of a container. |
| Define Class Member Function Outside Class | `class A { public: void fun(); }; void A::fun() { cout << "fun() called";}` | Allows us to define a member function of a class outside the class definition. |
| Access Class's Static Members | `class A { public: static int x; }; int A::x = 1; cout << A::x;` | Accessed without creating the object of the class. |
| Refer to Base Class Member in Derived Class | `class Base { public: void func() { cout << "Base class func()" << endl; } }; class Derived : public Base { public: void func() { cout << "Derived class func()" << endl; } }; obj.Base::func(); obj.func();` | Refer to the members of base class in a derived class especially if they have the same name. |
</details>
