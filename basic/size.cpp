#include <iostream>

using namespace std;

int main(){
    int integer;
    float floating;
    double doublee;
    char character;

    cout << "Size of int : " << sizeof(integer) << " bytes" << endl;
    cout << "Size of float : " << sizeof(floating) << " bytes" << endl;
    cout << "Size of double : " << sizeof(doublee) << " bytes" << endl;
    cout << "Size of char : " << sizeof(character) << " bytes" << endl;
    
    return 0;
}