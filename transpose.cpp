#include <iostream>
const int N = 3;
using namespace std;

void transpose(int arr[][N]){
    int temp[N][N];
    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            temp[i][j] = arr[j][i];
        }
    }
    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            arr[i][j] = temp[i][j];
        }
    }
}

int main(){
    int arr[N][N] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    transpose(arr);
    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}