#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++){
            if (arr[j+1] < arr[j]){
                swap(arr[j+1], arr[j]);
                swapped = true;
            }
        }

        if (swapped == false){
            break;
        }
    }
}

int main(){

    int arr[6] = {10, 1, 7, 6, 14, 9};

    bubbleSort(arr, 6);

    display(arr,6);

    return 0;
}