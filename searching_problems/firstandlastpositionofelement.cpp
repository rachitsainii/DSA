#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr [], int size, int key){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s <= e){
        if (arr[mid] == key){
            ans = mid;
            e = mid - 1;

        } else if (key > arr[mid]){
            s = mid + 1;

        } else if (key < arr[mid]){
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}

int lastOccurence(int arr [], int size, int key){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s <= e){
        if (arr[mid] == key){
            ans = mid;
            s = mid + 1;

        } else if (key > arr[mid]){
            s = mid + 1;

        } else if (key < arr[mid]){
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}



int main(){

    int arr[5] = {1,2,3,3,5};

    cout << "First Occurence of 3 is at index : " << firstOccurence(arr, 5, 3) << endl;

    cout << "Last Occurence of 3 is at index : " << lastOccurence(arr, 5, 3) << endl;

    return 0;
}