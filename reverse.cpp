#include <iostream>

using namespace std;

int reverse(int arr[],int n);

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int new_size = reverse(arr,n);

    cout << "New array is : ";

    for (int i = 0;i<new_size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int reverse(int arr[],int n){
    if (n == 0 || n == 1){
        return n;
    }
    int temp[n];
    int k = 0;

    for (int i = n-1;i>=0;i--){
        temp[k++] = arr[i];
    }
    for (int j = 0;j<k;j++){
        arr[j] = temp[j];
    }
    return k;
}