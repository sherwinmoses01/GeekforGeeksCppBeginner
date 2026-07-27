#include <iostream>
const int N = 4;
using namespace std;

void sumprefix(int arr[][N]){
    int temp[N][N] = {0};
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            temp[i][j] = arr[i][j];
            if (i > 0) temp[i][j] += temp[i - 1][j];
            if (j > 0) temp[i][j] += temp[i][j - 1];
            if (i > 0 && j > 0) temp[i][j] -= temp[i - 1][j - 1];
        }
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            arr[i][j] = temp[i][j];
        }
    }
}

int main(){
    int arr[N][N] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    sumprefix(arr);
    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}