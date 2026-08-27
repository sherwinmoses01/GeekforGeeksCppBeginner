#include <iostream>
const int R1 = 3;
const int C1 = 2;
const int R2 = 2;
const int C2 = 3;
using namespace std;

void multiply(int arr1[][C1],int arr2[][C2],int res[R1][C2]){
    for (int i = 0;i<R1;i++){
        for (int j = 0 ;j<C2;j++){
            res[i][j] = 0;
            for (int k = 0;k<R2;k++){
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
}

int main(){
    int arr1[R1][C1] = {
        {1,1},
        {2,2},
        {3,3}
    };
    int arr2[R2][C2] = {
        {1,1,1},
        {2,2,2}
    };
    int res[R1][C2];
    multiply(arr1,arr2,res);
    for (int i = 0;i<R1;i++){
        for (int j = 0;j<C2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

