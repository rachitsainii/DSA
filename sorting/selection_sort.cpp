#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr [], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        
        swap(arr[minIndex], arr[i]);
    }

}

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}


int main(){

    int arr [5] = {64, 25, 12, 22, 11};

    selectionSort(arr, 5);

    display(arr, 5);

    return 0;
}