#include <iostream>
#include <algorithm>

using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]);

int main(){

    int arr1[] = {1,2,3,4};
    int arr2[] = {4,5,6,7};
    const int n = sizeof(arr1)/sizeof(arr1[0]);
    const int m = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n+m];
    merge(arr1,n,arr2,m,arr3);

    cout << "Merged array is: ";
    for (int i = 0;i<n+m;i++){
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){

    int i = 0,j = 0,k = 0;

    while (i<n){
        arr3[k++] = arr1[i++];
    }
    while (j<m){
        arr3[k++] = arr2[j++];
    }
    sort(arr3,arr3+n+m);

}