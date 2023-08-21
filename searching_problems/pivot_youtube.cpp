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

int main(){

    int arr[5] = {7,9,1,2,3};
    int arr2[5] = {8,10,17,1,3};

    int answer = getPivot(arr2,5);

    cout << answer << endl;

    return 0;
}