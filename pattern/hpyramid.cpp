#include <iostream>

using namespace std;

void hpyramid(int row);

int main(){
    hpyramid(5);
}

void hpyramid(int row){

    for (int i = 1;i<=row;i++){

        int last = i * 2 - 1;

        for (int j = 1;j <= row - i;j++){
            cout << " ";
        }
        for (int k = 1;k<=last;k++){
            if (k == 1){
                cout << "*";
            }
            else if (k == last){
                cout << "*";
            }
            else if (i == row){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";

    }
}