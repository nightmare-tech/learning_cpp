#include <iostream>
using namespace std;
struct Person {
    string name;
    string number;

};

int main(){
    Person people[2];
    people[0].name = "John";
    people[0].number = "123456789";

    people[1].name = "Jane";
    people[1].number = "987654321";
    string name;
    cout << "Enter a name: ";
    cin >> name;
    for (int i = 0; i < 2; i++){
        if (name == people[i].name){
            cout << "The number is: " << people[i].number << endl;
            return 0;
        }
    cout << "Name not found" << endl;
    return 1;
    }
    

}
