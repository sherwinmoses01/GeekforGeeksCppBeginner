#include <iostream>
const int N = 4;
using namespace std;

void bound(int arr[][N]);

int main(){
    int arr[N][N] = {
        {1,2,3,4},
        {2,3,4,5},
        {3,4,5,6},
        {4,5,6,7}
    };
    bound(arr);
    return 0;
}

void bound(int arr[][N]){
    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            if (i==0||j==0||i==N-1||j==N-1){
                cout << arr[i][j] << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}