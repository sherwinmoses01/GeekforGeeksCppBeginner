#include <iostream>

using namespace std;

void floyd(int row);

int main(){
    floyd(5);
}

void floyd(int row){

    int num = 1;

    for (int i = 1;i<= row;i++){
        for (int j = 1;j<= i;j++){
            cout << num ;
            num++;
        }
        cout << "\n";
    }
}