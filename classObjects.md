# $${\color{red}Classes}$$ and $${\color{blue}Objects}$$

<details>
<summary>$${\color{red}Class}$$</summary>

| Datatype | Purpose | Use |
| ----- | ------- | --- |
| $${\color{greenYellow}User-defined}$$ | $${\color{Magenta}Template}$$<br>$${\color{Magenta}Blueprint}$$ | Create objects<br>Similar $${\color{green}properties}$$ and $${\color{orange}behavior}$$ |

| Members | `Data` | `Functions`| 
| ------- | ---- | --------- |
| Alias | $${\color{green}Properties}$$<br>$${\color{green}Attributes}$$ | $${\color{orange}Methods}$$<br>$${\color{orange}Behavior}$$ |
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
</details>
