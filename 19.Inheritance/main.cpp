#include <iostream>
using namespace std;

class Chef {
    public: 
        void makeChicken(){
            cout << "The chef makes Chicken..." << endl;
        }
        void makeSalad(){
            cout << "The chef makes Salad..." << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs..." << endl;
        }
};
class ItalianChef : public Chef{
    public: 
        void makePasta(){
            cout << "The chef makes pasta...";
        }
        void makeSpecialDish(){
            cout << "The chef makes chicken parm..." << endl;
        }    
};


int main(){
    
    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianchef;
    italianchef.makeSpecialDish();

    return 0;
}
