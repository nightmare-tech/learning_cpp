# Comments
#### One Line Comment
`//This is a comment `
#### Multi Line Comment
```cpp
/*
This is a multi line
comment
I 
can type
in any number of 
lines I wish here..
*/
```

# Errors and Warnings
1. **Compile Time Errors**
	Error while compiling
1. **Runtime Errors**
	* Complied successfully but error when executed.
	* Logical Error
2. **Warnings**

# Statement & Functions
eg: `int firstnumber = 12;` --statement
* Statements are executed from top to bottom.
eg: 

##### CODE
```c++
#include <iostream>

int addNumbers( int first_param, int second_param){

	int result = first_param + second_param;

	return result;

}

int main(){

	int first_number {13}; // Statement

	int second_number {7};

	std::cout << "First number : " << first_number << std::endl; // 13

	std::cout << "Second number : " << second_number << std::endl; // 7

	int sum = first_number + second_number;
std::cout << "Sum : " << sum << std::endl; // 20

	sum = addNumbers(25,7);
std::cout << "Sum : " << sum << std::endl; // 32

	sum = addNumbers(30,54);
std::cout << "Sum : " << sum << std::endl;

	std::cout << "Sum : " << addNumbers(3,42) << std::endl;

	return 0;

}

```

# Data Input & Output

##### CODE
```cpp
#include <iostream>
#include <string>

  

int main(){
//Printing data
/*
std::cout << "Hello C++20 " << std::endl;
int age{21};
std::cout << "Age : " << age << std::endl;
std::cerr << "Error message : Something is wrong" << std::endl;
std::clog << "Log message : Something happened " << std::endl;
*/

//Data input
/*
int age1;
std::string name;
std::cout << "Please type your name and age : " << std::endl;
//std::cin >> name;
//std::cin >> age1;
std::cin >> name >> age1;
std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;
*/

//Data with spaces

std::string full_name;
int age3;
std::cout << "Please type in your full name and age " << std::endl;
std::getline(std::cin,full_name);
std::cin >> age3;
std::cout << "Hello " << full_name
<< " you are " << age3 << " years old!" << std::endl;
return 0;

}
```

[Original File](./4.IP-OP/main.cpp)


# C++ Program Execution Model & Memory Model
-- How a binary program runs when compiled?

Sharing/Allocation of resources between the CPU, RAM & Hard Drive when the program is run.

1. The c++ code is compiled to form a binary file. Not readable.
	eg: ![[Pasted image 20220714143059.png]]
2. Program is run:
	Binary file is loaded in memory(RAM) from the hard drive (storage device).
	![[Pasted image 20220714143415.png]]

3. CPU starts running the program from top to bottom.
* First it allocates space for storing variables. (in this case a b and c) on the RAM.
* Prints out strings: "Statement 1" then "Statement 2".
* Stores the address "006" in CPU cache when the function is called to return to after executing the function.
![[Pasted image 20220714144732.png]]
* Finds out the value of c, replaces the "xxx" with the value obtained. Returns to "006" and executes the program from there.
![[Pasted image 20220714144814.png]]
* Prints:  "Statement 3", "Statement 4" on the console.
* Reaches the end of program and terminates.
![[Pasted image 20220714144842.png]]

# *C++ core language* V/S *Standard Library* V/S *STL*
* **C++ core laguage is the basic syntax of the language**
	Foundation on which we build a c++ program. 
     eg: How we define a function
* **Standard libraries** typically include definitions for commonly used algorithms, data structures, and mechanisms for input and output.
	eg: ` #include <iostream> ` is used for input and output.
* **STL - Standard Template Library**
	It is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc.


# Variables & Data Types
**Data types in C++ are mainly divided into three types:** 

**1. Primitive Data Types**: These data types are built-in or predefined data types and can be used directly by the user to declare variables. example: int, char, float, bool, etc. Primitive data types available in C++ are: 

-   Integer
-   Character
-   Boolean
-   Floating Point
-   Double Floating Point
-   Valueless or Void
-   Wide Character

**2.** [**Derived Data Types:**](https://www.geeksforgeeks.org/derived-data-types-in-c/) The data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types. These can be of four types namely: 

-   Function
-   Array
-   Pointer
-   Reference

**3.** [**Abstract or User-Defined Data Types**](https://www.geeksforgeeks.org/user-defined-derived-data-types-in-c/): These data types are defined by the user itself. Like, as defining a class in C++ or a structure. C++ provides the following user-defined datatypes: 

-   Class
-   Structure
-   Union
-   Enumeration
-   Typedef defined Datatype

This article discusses **primitive data types** available in C++. 

-   **Integer**: The keyword used for integer data types is **int**. Integers typically require 4 bytes of memory space and range from -2147483648 to 2147483647.  
-   **Character**: Character data type is used for storing characters. The keyword used for the character data type is **char**. Characters typically require 1 byte of memory space and range from -128 to 127 or 0 to 255.  
-   **Boolean**: Boolean data type is used for storing Boolean or logical values. A Boolean variable can store either _true_ or _false_. The keyword used for the Boolean data type is **bool**. 
-   **Floating Point**: Floating Point data type is used for storing single-precision floating-point values or decimal values. The keyword used for the floating-point data type is **float**. Float variables typically require 4 bytes of memory space. 
-   **Double Floating Point**: Double Floating Point data type is used for storing double-precision floating-point values or decimal values. The keyword used for the double floating-point data type is **double**. Double variables typically require 8 bytes of memory space. 
-   **void**: Void means without any value. void data type represents a valueless entity. A void data type is used for those function which does not return a value. 
-   [**Wide Character**](https://www.geeksforgeeks.org/wide-char-and-library-functions-in-c/): Wide character data type is also a character data type but this data type has a size greater than the normal 8-bit datatype. Represented by **wchar_t**. It is generally 2 or 4 bytes long.

##### CODE
```c++
#include <iostream>

int main(){
    
    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0x0f; // Hexadecimal
    int number4 = 0b00001111; // Binary 

    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << "number3 : " << number3 << std::endl;
    std::cout << "number4 : " << number4 << std::endl;
    
    return 0;
}
```
**OUTPUT  :**
```
number1 : 15
number2 : 15
number3 : 15
number4 : 15
```


### Ways to initialize integer variable
##### CODE
```c++
#include <iostream>

int braced(){
    //Braced Initialization
    int elephant_count; //Variable may contain random garbage value
    int lion_count{}; //Initialises to zero
    int dog_count{10}; //Initialises to 10
    int cat_count{15}; //Initialises to 15
    int domestic_animals(dog_count + cat_count);

    // int narrowing_conversion_braced{2.9}; //Compile Error
    std::cout << "\n Braced Initialization" << std::endl; 

    std::cout << "Elephants : " << elephant_count << std::endl;
    std::cout << "Lions : " << lion_count << std::endl;
    std::cout << "Dogs : " << dog_count << std::endl;
    std::cout << "Domestic Animals : " << domestic_animals << std::endl;

    return 0;   
}

int functional(){

    //Variable may contain random garbage value
    // Functional Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    // int bad_initialisation(doesnt_exists1 + doesnt_exists2); // Gives Compile Error
    int narrowing_conversion_functional(2.9); // Converts 2.9 to 2 removing the deciaml and hence is an implicit conversion

    std::cout << "\n Functional Initialisation" << std::endl;

    std::cout << "Apples : " << apple_count << std::endl;
    std::cout << "Oranges : " << orange_count << std::endl;
    std::cout << "Total Fruits : " << fruit_count << std::endl;
    std::cout << "Narrowing Conversion (value = 2.9) :" << narrowing_conversion_functional << std::endl;
    return 0;
}

int assignment(){

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    std::cout << "\n Assignment Initialization" << std::endl;

    std::cout << "Bikes : " << bike_count << std::endl;
    std::cout << "Trucks : " << truck_count << std::endl;
    std::cout << "Total Vehicles : " << vehicle_count << std::endl;
    std::cout << "Narrowing Conversion : " << narrowing_conversion_assignment << std::endl;
    
    std::cout << "\n\n sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count variable : " << sizeof(truck_count) << std::endl;

    return 0;
}

int main(){
    std::cout << "-------------Initializing Integers-------------" << std::endl;
    braced();
    functional();
    assignment();
    return 0;
}
```
**Output:**
```
Braced Initialization:- 
Elephant count; 0
Lion count; 0
Dog count; 10
Cat count; 15
Domestic Anumals count; 25


Function Initialization:- 
Apple Count; 5
Orange Count; 10
Fruit Count; 15
Narrowing Conversion; 2


Assignment Initialization:-
Bike Count; 2
Truck Count; 7
Vehicle Count; 9
Narrow Conversion; 2
```


## Integer Modifiers
1.  **Positive or Negative Integers**
	* signed (number can be positive or negative)
	* unsigned (number is only positive)
	![[Pasted image 20220727174811.png]]

2. **Size of int Variable**
	* short
	* long
	![[Pasted image 20220727175058.png]]
**NOTE: THESE MODIFIERS ONLY APPLY FOR INTEGRAL TYPES : THOSE IN WHICH YOU CAN STORE DECIMAL NUMBERS.**

## Fractional Numbers
* aka Floating Point Types
* Used to represent numbers with fractional parts in C++.
* Types:
![[Pasted image 20220727185758.png]]

##### CODE
```c++
#include <iostream>
#include <iomanip>



int main(){

    //Declare and initialize the variables
    float number1 {1.12345678901234567890f}; // Precision : 7
    double number2 {1.12345678901234567890}; // Precision : 15
    long double number3  {1.12345678901234567890L};
    
    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;



    //Precision
    std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; //7 digits
    std::cout << "number2 is : " << number2 << std::endl; // 15'ish digits
    std::cout << "number3 is : " << number3 << std::endl; // 15+ digits


    //Float problems : The precision is usually too limited
    //for a lot of applications
    float number4 = 192400023.0f;               // Error : narrowing conversion

    std::cout << "number4 : " << number4 << std::endl;


    //Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

    std::cout << "-------------------------" << std::endl;
    
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};           // Can ommit the lower 00023
                                        // for simplicity if our application allows that.
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // multiply with 10 exp(-11)
    
    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;



    //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;
    
    double number10{ -5.6 };
    double number11{};//Initialized to 0
    double number12{};  //Initialized to 0

    //Infinity
    double result { number10 / number11 };
    
    
    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    
    //NaN
    result = number11 / number12;
    
    
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;
    
   
    return 0;

```
**OUTPUT :**
```
sizeof float : 4
sizeof double : 8
sizeof long double : 16
number1 is : 1.1234568357467651367
number2 is : 1.1234567890123456912
number3 is : 1.1234567890123456789
number4 : 192400016
-------------------------
number5 is : 192400023
number6 is : 192400023
number7 is : 192400000
number8 is : 3.4979999999999998372e-11
number9 is : 3.4979999999999998372e-11

Infinity and NaN
-5.5999999999999996447/0  yields -inf
-inf + -5.5999999999999996447 yields -inf
0/0 = -nan
```


## Boolean
**True/False**

##### CODE
```c++
#include <iostream>

int main(){
    
    bool red_light {false};
    bool green_light {true};

    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through !" << std::endl;
    }
 
    if (green_light){
        std::cout << "The light is Green !" << std::endl;
    }else{
        std::cout << "The light is NOT green !" << std::endl;
    }

    // sixeof()
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;

    // Printing out a bool
    // 1 --> true
    // 0 --> false
    std::cout << "\nred_light : " << red_light <<  std::endl;
    std::cout << "green_light : " << green_light << std::endl;
    std::cout << "0 --> False\n1 --> True" << std::endl;

    // To see "True" / "False" in the output
    std::cout << std::boolalpha;
    std::cout << "\nred_light : " << red_light <<  std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    return 0;
}
```

**OUTPUT:**
```
Go through !
The light is Green !
sizeof(bool) : 1

red_light : 0
green_light : 1
0 --> False
1 --> True

red_light : false
green_light : true
```


## Characters & Text
`char` is  used to store strings as variable.
eg : `char variable_name {'string that you want to store}';`
**Use single quotes here**
- `char` takes up 1 byte in memory.
![[Pasted image 20220802153540.png]]
- It is possible to assign a valid ASCII code to a char variable, and the corresponding character will be stored in. You can choose to interpret that either as a character or a regular integral value.

eg:
##### CODE
```cpp
#include <iostream>

int main(){
    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    std::cout << "\n-------------------------------" << std::endl;
    // One byte in memory : 2^8 = 256 different values (0 - 255)
    
    char value = 65; // ASCII char for 'A'
    std::cout << "\nvalue: " << value << std::endl;
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;
    


    return 0;    
}
```
**OUTPUT :**
```
a
r
r
o
w

-------------------------------

value: A
value(int): 65
```


## Auto Keyword
Let the compiler deduce the type

##### CODE
```cpp
#include <iostream>

int main(){
    
    auto var1 {12}; // int
    auto var2 {13.0}; // Double
    auto var3 {14.0f}; // Float
    auto var4 {15.0l}; // Long Double
    auto var5 {'e'}; // Char

    // int modifier suffixes
    auto var6 {123u}; // Unsigned
    auto var7 {123ul}; // Unsigned Long
    auto var8 {123ll}; // Long Long
    
    std::cout << "var1 occupies : " << sizeof(var1) << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << std::endl;


    return 0;
    }
```

**OUTPUT :**
```
var1 occupies : 4
var2 occupies : 8
var3 occupies : 4
var4 occupies : 16
var5 occupies : 1
var6 occupies : 4
var7 occupies : 8
var8 occupies : 8
```


## Assignments
Changing values of variables after initialization.

##### CODE
```cpp
#include <iostream>

int main(){
    int var1{123}; // Declare and initialize
    std::cout << "var1: " << var1 << std::endl;
    var1 = 55; // Assign
    std::cout << "var1: " << var1 << std::endl;
    std::cout << "----------------------" << std::endl;

    double var2{44.55}; // Declare and initialize
    std::cout << "var2: " << var2 << std::endl;
    var2 = 99.99; // Assign
    std::cout << "var2: " << var2 << std::endl;
    std::cout << "----------------------" << std::endl;

    bool state{false}; //Declare and initialization
    std::cout << std::boolalpha;
    std::cout << "state: " << state << std::endl;
    state = true; // Assign
    std::cout << "state: " << state << std::endl;    
    std::cout << "----------------------" << std::endl;

    // Auto type deduction

    auto var3{333u}; // Declare and initialize
    var3 = -22; // Assigned negative number to unsigned type = BAD!!
    std::cout << "var3: " << var3 << std::endl; 

    return 0;
}
```

# Operations on Data
## Basic Operations
- add
- subtract
- divide
- modulus
- multiply
