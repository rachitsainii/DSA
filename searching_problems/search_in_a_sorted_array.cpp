#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-2)/2;
    while(s < e){
        if (arr[mid] >= arr[0]){
            s = mid + 1;
        } else {
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s;
}

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

//  int search(vector<int>& nums, int target) {
//         int s = 0;
//         int e = nums.size() - 1;
//         int pivot = getPivot(nums);
//         if (target >= nums[pivot] and target <= nums[e]){
//             return binarySearch(nums,pivot,e,target);
//         } else {
//             return binarySearch(nums, s, pivot-1, target);
//         }
        
//     }


int main(){

    return 0;
}