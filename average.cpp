#include <iostream>

using namespace std;

double average(int arr[],int n);

int main(){

    int arr[] = {1,2,3,4,5};
    int n  = sizeof(arr)/sizeof(arr[0]);
    cout << "Average is " << average(arr,n) << endl;
    return 0;
}

double average(int arr[],int n){
    double sum = 0;

    for (int i = 0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;
}