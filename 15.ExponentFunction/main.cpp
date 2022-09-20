#include <iostream>
using namespace std;

void expo(int num1, int num2){
    int ini_num = num1;
    for(int i = 1; i < num2; i++ ){
        num1 = ini_num * num1;
    }
    cout << num1 << endl;
    
}

int main(){
    int num1, num2;
    cout << "Enter base: ";
    cin >> num1;
    cout << "Enter power: ";
    cin >> num2;
    expo(num1, num2);
    return 0;
}
