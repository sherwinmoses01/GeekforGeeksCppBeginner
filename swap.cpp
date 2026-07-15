#include <iostream>

using namespace std;

int main(){

    int num1;
    int num2;

    cout << "Enter a number : ";
    cin >> num1;
    cout << "Enter another number : ";
    cin >> num2;

    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Number 1 : " << num1 << endl;
    cout << "Number 2 : " << num2 << endl;

    return 0;
}