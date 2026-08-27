#include <iostream>
#include <algorithm>

using namespace std;

int duplicate(int arr[],int n);

int main(){
    int arr[] = {1,1,1,2,2,2,2,3,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int new_size  = duplicate(arr,n);

    cout << "The new array is : ";

    for (int i = 0;i<new_size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int duplicate(int arr[],int n){
    if(n == 0 || n == 1){
        return n;
    }
    int temp[n];
    int k = 0;

    sort(arr,arr+n);

    for (int i = 0;i<n-1;i++){
        if (arr[i] != arr[i+1]){
            temp[k++] = arr[i];
        }
    }
    temp[k++] = arr[n-1];

    for (int j = 0;j < k;j++){
        arr[j] = temp[j];
    }
    return k;
}