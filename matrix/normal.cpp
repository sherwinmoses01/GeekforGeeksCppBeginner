#include <iostream>
#include <cmath>
const int N = 3;
using namespace std;

void nortra(int arr[][N]);

int main(){
    int arr[N][N] = {
        {7,8,9},
        {6,1,2},
        {5,4,3}
    };
    nortra(arr);
    return 0;
}

void nortra(int arr[][N]){
    int sum = 0;
    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            sum+= arr[i][j] * arr[i][j];
        }
    }
    double summ = sqrt(sum);
    cout << "The Normal is : "<< summ;
    cout << endl;
    int sum1 = 0;
    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            if(i == j){
                sum1+=arr[i][j];
            }
        }
    }
    cout << "The Trace is : " << sum1;
    cout << endl;
}