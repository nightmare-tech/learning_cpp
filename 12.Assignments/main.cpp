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
