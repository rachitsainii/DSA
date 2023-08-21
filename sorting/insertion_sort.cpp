#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;
        for (; j >=0 ; j--){
            if( arr[j] > temp){
                // shift
                arr[j+1] = arr[j];
            } else {
                //ruk jao
                break;
            }
        }

        arr[j+1] = temp;
    }

}

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}


int main(){

    int arr[4] = {3,1,2,2};

    insertionSort(arr, 4);

    display(arr, 4);

    return 0;
}