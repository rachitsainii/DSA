#include<iostream>
#include<array>
using namespace std;


int main(){

    // Regular Array
    int basic[3] = {1,2,3};

    // STL array : Based on a basic array only
    // Since it is static, it not used in competitive programming.
    // Time Complexity : O(n)
    array<int, 4> a = {1,2,3,4}; 

    // Get the size of array
    int size = a.size();

    // Print each element of the array
    for (int i = 0; i < size; i++){
        cout << a[i] << endl;
    }

    // Some functions
    cout << "Element at 2md Index -> "<< a.at(2) << endl;

    cout << "Empty or not -> "<< a.empty() << endl;

    cout << "First element -> " << a.front() << endl;

    cout << "Last Element -> " << a.back() << endl; 

    return 0;
}