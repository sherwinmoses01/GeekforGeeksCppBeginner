#include <iostream>

using namespace std;

const int N = 3;

void sum(int arr1[][N],int arr2[][N],int arr3[][N]);

int main(){
    int arr1[N][N] = {{1,2,3},{1,2,3},{1,2,3}};
    int arr2[N][N] = {{3,2,1},{3,2,1},{3,2,1}};
    int arr3[N][N];

    sum(arr1,arr2,arr3);

    for (int i = 0; i < N;i++){
        for (int j = 0;j < N;j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

}

void sum(int arr1[][N],int arr2[][N],int arr3[][N]){
    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}