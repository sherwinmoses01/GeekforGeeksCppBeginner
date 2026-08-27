#include <iostream>

using namespace std;

void floyd(int row);

int main(){
    floyd(5);
}

void floyd(int row){

    int sum = 0;

    for (int k = 1;k<= row;k++){
        for (int l = 1;l<=k;l++){
            sum++;
        }
    }

    for (int i = row;i>=1;i--){
        for (int j = 1;j<= i;j++){
            cout << sum ;
            sum--;
        }
        cout << "\n";
    }
}