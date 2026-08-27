#include <iostream>
const int N = 3;

using namespace std;

bool isequal(int arr1[][N],int arr[][N]);

int main(){
    int arr1[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[N][N] = {{1,2,3},{4,5,6},{7,8,9}};

    string word = isequal(arr1,arr2) ? "They are Equal!" : "No , They are not Equal!";
    cout << word;
    return 0;
}

bool isequal(int arr1[][N],int arr2[][N]){
    for (int i = 0;i<N;i++){
        for (int j = 0;j<N;j++){
            if (arr1[i][j] != arr2[i][j]){
                return false;
            }
        }
    }
    return true;
}