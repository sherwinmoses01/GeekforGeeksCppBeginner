#include <iostream>
const int N = 4;

using namespace std;

void diagonal(int arr[][N]);

int main(){
    int arr[N][N] = {
        {1,2,3,4},
        {4,3,2,1},
        {2,3,4,5},
        {3,4,5,6}
    };
    diagonal(arr);
}

void diagonal(int arr[][N]){
    int sum1 = 0;
    int sum2 = 0;
    int k = N-1;

    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            if(i == j){
                sum1+=arr[i][j];
            }
        }
    }
    cout << "Primary Diagonal : " << sum1;
    cout << endl;

    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            if(k == j){
                sum2+=arr[i][j];
                k--;
            }
        }
    }
    cout << "Secondary Diagonal : " << sum2;
    cout << endl;
}