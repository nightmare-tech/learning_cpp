#include <iostream>

using namespace std;
int main(){
    
    int secretNum = 7;
    int guess;
    int count = 1;
    while (guess != secretNum && count <= 7){
        cout << "Enter guess: ";
        cin >> guess;
        count++;
    }

    if (guess==secretNum){
    cout << "You Win !" << endl;
    } else {cout << "You Lose" << endl;}
    return 0;
}
