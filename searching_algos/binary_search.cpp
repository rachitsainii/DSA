#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr [], int size,  int ele){
    int start = 0;
    int end = size - 1;
    int mid = (start) +  (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == ele){
           return mid;
        }
        
        if (ele > arr[mid]) {
            start = mid+1;
        } else {
            end = mid-1;
        }

        mid = (start) +  (end - start) / 2;
    }

    return -1;
}


int main(){

    int even[6] = {10,20,30,40,50,60};
    int odd[5] = {3, 8, 11, 14, 16};
    // cout << sizeof(arr) / sizeof(int);

    int ans = binarySearch(odd, 5, 3);

    cout << ans << endl;

    return 0;
}