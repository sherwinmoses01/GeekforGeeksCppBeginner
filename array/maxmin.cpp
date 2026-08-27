#include <iostream>

using namespace std;

int getmax(int arr[],int n);
int getmin(int arr[],int n);

int main(){
    int arr[] = {1,2,3,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Max is " << getmax(arr,n) << endl;
    cout << "Min is " << getmin(arr,n) << endl;
}

int getmax(int arr[],int n){
    int m = arr[0];
    for (int i = 0;i<n;i++){
        m = m > arr[i] ? m : arr[i];
    }
    return m;
}

int getmin(int arr[],int n){
    int m = arr[0];
    for (int i = 0;i<n;i++){
        m = m < arr[i] ? m : arr[i];
    }
    return m;
}