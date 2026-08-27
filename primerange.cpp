#include <iostream>

using namespace std;

bool isprime(int num);
void printprime(int start,int end);

int main(){
    printprime(1,100);
    return 0;
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

void printprime(int start,int end){
    for (int i = start;i<=end;i++){
        if (isprime(i)){
            cout<<i<<"\n";
        }
    }
}