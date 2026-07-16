#include <iostream>

using namespace std;

void pyramid(int row);

int main(){
    pyramid(5);
}

void pyramid(int row){

    for (int i = 1;i<= row;i++){

        int last = i * 2 - 1;

        for (int j = 1;j <= row - i;j++){
            cout << " ";
        }
        for (int k = 1;k<=last;k++){
            cout << "*";
        }
        cout << "\n";

    }
}