#include <iostream>

using namespace std;

int factorial(int num);

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}

int factorial(int num){
    if(num == 0){
        return 1;
    }
    else if(num == 1){
        return 1;
    }
    else{
        return num * factorial(num - 1);
    }
}