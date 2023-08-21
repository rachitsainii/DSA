#include<bits/stdc++.h>
using namespace std;

int left_sum(int arr [], int size, int s, int e, int mid){
    int l_sum = 0;

    if (mid == s){
        l_sum = 0;
    }

    while (s < mid){
        l_sum += arr[s];
        s++;
    }


    return l_sum;
}

int right_sum(int arr[], int size, int s, int e, int mid){
    int r_sum = 0;

     if (mid == e){
        r_sum = 0;
    }

    while( mid < e){
        r_sum += arr[mid+1];
        mid ++;
    }

    return r_sum;
}


int pivot_index(int arr[], int size){
    int s = 0;
    int e = size -1;
    int mid = s + (e-s)/2;
    while(mid >= s && mid < e){
        if (left_sum(arr, 6, s, e, mid) == right_sum(arr, 6, s, e, mid)) {
        return mid;
        } else if (left_sum(arr, 6, s, e, mid) < right_sum(arr, 6, s, e, mid)){
        mid += 1;
        } else {
        mid -= 1;
        }
    }

    return -1;
    
}


int main(){

    int arr[8] = {1,2,3,4,5,5,5};

    int ans = pivot_index(arr,8);

    cout << ans << endl;

    return 0;
}