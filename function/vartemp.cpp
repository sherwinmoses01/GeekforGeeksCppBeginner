#include <iostream>

using namespace std;

void print(){
    cout << "End of recursion" << "\n";
}

template <typename... T>

void print(int arg,T... args){
    cout << arg << "\n";
    print(args...);
}

int main(){
    print(1, 2, 3, 4, 5);
    return 0;
}