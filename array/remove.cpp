#include <iostream>

using namespace std;

int remove(int target,int arr[],int n);

int main(){
    int arr[] = {1,2,3,4,5,3,6,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int new_size = remove(3,arr,n);
    cout << "New array is : ";
    for (int i = 0;i<new_size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int remove(int target,int arr[],int n){
    if (n == 0){
        return n;
    }
    int temp[n];
    int k = 0;
    for(int i = 0;i<n;i++){
        if (arr[i] != target){
            temp[k++] = arr[i];
        }
    }
    for (int j = 0;j<k;j++){
        arr[j] = temp[j];
    }
    return k;
}