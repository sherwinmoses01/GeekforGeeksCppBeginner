#include <iostream>

using namespace std;

int rotate(int arr[],int n,int d);

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int new_size = rotate(arr,n,2);

    cout << "The new array is : ";
    for (int i = 0;i<new_size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int rotate(int arr[],int n,int d){
    if (n==0||n==1){
        return n;
    }
    int temp[n];
    int k = 0;
    while (d >= n){
        d -= n;
    }
    for(int i = d;i<n;i++){
        temp[k++] = arr[i];
    }
    for(int i = 0;i<d;i++){
        temp[k++] = arr[i];
    }
    for (int j = 0;j<k;j++){
        arr[j] = temp[j];
    }
    return k;
}