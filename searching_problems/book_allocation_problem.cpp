#include<bits/stdc++.h>
using namespace std;


bool isPossible(int arr [], int size, int students, int mid){
    int pagesum = 0;
    int studentcount = 1;
    for ( int i = 0; i < size; i++){
        if (pagesum + arr[i] <= mid){
            pagesum += arr[i];
        } else {
            studentcount += 1;
            if (studentcount > students || arr[i] > mid){
                return false;
            }
            pagesum = arr[i];
        }
 
    }

    return true;
}

int bookAllocation(int arr [], int size, int students){
    int s = 0;
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }

    int e = sum;
    int mid = s + (e-s)/2;
    int ans = 0;
    while ( s <= e){
        if (isPossible(arr, 4, students, mid) == true){
            ans = mid;
            e = mid - 1;
            // cout << ans << endl;
        } else {
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}




int main(){

    int arr[4] = {12, 34, 67, 90};

    int students = 2;

    int ans = bookAllocation(arr, 4, 2);

    cout << ans << endl;



    return 0;
}