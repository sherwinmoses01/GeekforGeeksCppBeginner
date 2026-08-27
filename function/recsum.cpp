#include <iostream>

using namespace std;

int sum(int num);

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of numbers from 1 to " << n << " is: " << sum(n) << endl;
    return 0;
}

int sum(int num){
    if(num == 0){
        return 0;
    }
    else{
        return num + sum(num - 1);
    }
}