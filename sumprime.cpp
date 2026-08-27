#include <iostream>

using namespace std;

bool isprime(int num);
bool isumprime(int num);

int main(){
    cout<<isumprime(11);
}

bool isprime(int num){
    if(num <=1){
        return false;
    }
    else {
        for (int i = 2;i<=num/2;i++){
            if (num%i==0){
                return false;
            }
        }
        return true;
    }
}

bool isumprime(int num){
    return isprime(num - 2);
}