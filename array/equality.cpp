#include <iostream>
#include <algorithm>

using namespace std;

bool isequal(int arr1[], int arr2[], int n, int m);

int main(){

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,4,3,2,1};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    

    if (isequal(arr1,arr2, n,m)){
        cout << "Arrays are equal" << endl;
    }
    else{
        cout << "Arrays are not equal" << endl;
    }

    return 0;
}

bool isequal(int arr1[], int arr2[], int n, int m){
    
    
    if (n != m){
        return false;
    }

    else{
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);

        for (int i = 0;i < n;i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
}