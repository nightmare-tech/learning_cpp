#include <iostream>

int addNumbers(int first_number,int second_number) {
    int sum = first_number + second_number;
    return sum;     
}
int main(){
    int first_number {13};
    int second_number {7};
    int sum = addNumbers(first_number, second_number);
    std::cout << "Sum : " << sum << std::endl; 
    std::cout << "Sum : " << addNumbers(12,7) << std::endl;
    return 0;
}

