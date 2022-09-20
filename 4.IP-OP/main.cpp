#include <iostream>

int main(){
    //Printing Data
    /*
    std::cout << "Hello C++ 20..." << std::endl;

    int age{21};
    std::coutstd::cout << "Hello C++ 20..." << std::endl;

    int age{21};
    std::cout << "Age: " << age << std::endl;
    return 0;
     << "Age: " << age << std::endl;
    */
    /*
    int age1;
    std::string name;

    std::cout << "What is your First Name & Age: ";
    // std::cin >> name;
    // std::cin >> age1;
    
    std::cin >> name >> age1;

    std::cout << "Hello " << name << ", you are " << age1 << " years old." << std::endl;  
    */

    // Data with spaces

    std::string full_name;
    int age2;

    std::cout << "Full name: ";
    std::getline(std::cin, full_name);
    std::cout << "Age: ";
    std::cin >> age2; 

    std::cout << "Hello " << full_name << ", you are " << age2 << " years old." << std::endl;

    return 0; 
}