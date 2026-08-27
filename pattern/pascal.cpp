#include <iostream>

using namespace std;

int factorial(int num);
int combination(int num1,int num2);
void pascal(int row);

int main(){
    pascal(5);
}

int factorial(int num){
    int sum = 1;
    for (int i = 1;i<= num;i++){
        sum *= i;
    }
    return sum;
}

int combination(int num1,int num2){
    return factorial(num1)/(factorial(num2)*factorial(num1-num2));
}

void pascal(int row){
    for (int i = 0;i<= row;i++){
        for (int j = 0;j<= i;j++){
            cout<<combination(i,j);
        }
        cout<<"\n";
    }
}