#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int ele){
    for ( int i = 0; i < size; i++){
        if (arr[i] == ele) {
            return i;
        }
    }

    return -1;

}

int main(){

    int arr[10] = {32, 65, 67, 21, 87, 1, 34, -3, 54, 11};

    int result = linearSearch(arr, 10, 11);

    cout << result << endl;

    return 0;
}