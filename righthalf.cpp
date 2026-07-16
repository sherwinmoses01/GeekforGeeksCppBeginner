#include <iostream>

using namespace std;

void righthalf(int row);

int main(){
    righthalf(5);
}

void righthalf(int row){
    for (int i = 1;i <= row;i++){
        for (int j = 1;j <= i;j++){
            cout << "*";
        }
        cout << "\n";
    }
}