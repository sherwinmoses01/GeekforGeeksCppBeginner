#include <iostream>

using namespace std;

class Animal{
public:
    string name;

    void sound(){
        cout << "Gyrhooo!!!";
    }
};

int main(){
    Animal Articuno;
    Articuno.sound();
    return 0;
}