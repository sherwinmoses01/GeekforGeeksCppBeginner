#include <iostream>

using namespace std;

int main(){
    int num = 20;
    int &ref = num;
    int count = num;
    cout << num << endl;
    cout << ref << endl;
    num += 10;
    cout << num << endl;
    cout << ref << endl;
    cout << count ;
}