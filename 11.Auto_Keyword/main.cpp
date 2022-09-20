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
