#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    char op;
    cout << "Welcome to the Calculator\n";
    cout << "Enter num1: ";
    cin >> num1;
    cout << "\nEnter operator: ";
    cin >> op;
    cout << "\nEnter num2: ";
    cin >> num2;
    
    int result;
    if (op=='+'){
        result = num1+num2;
    } else if (op=='-'){
        result =  num1-num2;
    } else if (op=='*'){
        result =  num1*num2;
    } else if (op=='/'){
        result =  num1/num2;
    }else { cout << "INVALID OPERATOR\n";}

    cout << result << endl;    
    return 0;

}

