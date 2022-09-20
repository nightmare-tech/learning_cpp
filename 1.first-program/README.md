# Structure
```cpp
1  #include <iostream>
2 
3  consteval int get_value() {
4  return 3;
5  }
6  
7  int main(){
8  std::cout << "Hello World!" << std::endl;
9  return 0;
10 }
```

### L1 - include statement
Imports Libraries like `iostream`- which provides functionality to the program in this case `iostream` brings the ability to get input and output strings.

### L7 - Entry Point 
This is the very first thing that will be ran in the program.
In this case it will be the `main` function.


# `std::endl`
It ends the line so anything printed after that will be in a new line.

eg:
#### without `std::endl`
```cpp
#include <iostream>

int main(){
std::cout << "Number1";
std::cout << "Number2";
}
```

OUTPUT : `Number1Number2`

#### with `std::endl`
```cpp
#include <iostream>

int main(){
std::cout << "Number1" << std::endl;
std::cout << "Number2";
}
```
OUTPUT : 
```
Number1
Number2
```

