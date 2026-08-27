#include <iostream>

using namespace std;

class Animal{
public:
    string name ;
    void sound(){
        cout << "Gyrahoo!" << endl;
    }
};

class Dog : public Animal{
public:
    void sound(){
        cout << "Bow bow!!" << endl;
    }
};

int main(){
    Animal cat;
    Dog pug;

    cat.name = "Meow";
    pug.name = "Monish";

    cout << cat.name << endl;
    cout << pug.name << endl;

    cat.sound();
    pug.sound();

    return 0;
}
