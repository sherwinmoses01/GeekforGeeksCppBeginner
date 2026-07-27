#include <iostream>
const int N = 4;
using namespace std;

void swap(int arr[][N]);

int main(){
    int arr[N][N] = {
        {1,2,3,4},
        {2,3,4,5},
        {3,4,5,6},
        {4,5,6,7}
    };
    swap(arr);

    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

void swap(int arr[][N]){
    for (int j = 0; j < N; j++) {
        int temp = arr[0][j];
        arr[0][j] = arr[N-1][j];
        arr[N-1][j] = temp;
    }
}