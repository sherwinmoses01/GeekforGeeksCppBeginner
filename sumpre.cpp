#include <iostream>

using namespace std;

int sumpre(int arr[],int n);

int main(){
    int arr[] = {10,20,10,5,15};
    int n = sizeof(arr)/sizeof(arr[0]);

    int new_size = sumpre(arr,n);

    cout << "New array is : ";

    for(int i = 0;i<new_size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int sumpre(int arr[],int n){
    if(n == 0 || n == 1){
        return n;
    }

    int temp[n];
    int k = 0;
    int sum = 0;

    for(int i = 0;i<n;i++){
        temp[k] = sum + arr[i];
        sum = temp[k++];
    }

    for(int j = 0;j<k;j++){
        arr[j] = temp[j];
    }
    return k;
}