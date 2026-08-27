#include <iostream>

using namespace std;

void lefthalf(int row);

int main(){
    lefthalf(5);
}

void lefthalf(int row){
    for (int i = 1;i <= row;i++){
        for (int k = 1;k<= row - i;k++){
            cout << " ";
        }
        for (int j = 1;j <= i;j++){
            cout << "*";
        }
        cout << "\n";
    }
}