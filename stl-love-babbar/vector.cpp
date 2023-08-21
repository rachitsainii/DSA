#include<iostream>
#include<vector>
using namespace std;


int main(){

    // Vector : It is a dynamic array. It vector is full, and we try to insert more elements, it will double it's size by 
    // by creating a new vector whose size will be double of current vector. Then old vector will be copied into the new 
    // vector, and the old one will be dumped. Can use shrink to fit to reduce the size.

    vector<int> v; // Size 0

    cout << "Size -> " << v.capacity() << endl;


    // Insert element 1
    v.push_back(1);

    cout << "Size -> " << v.capacity() << endl; // Capacity = 1, Size = 1

    // Insert element 2
    v.push_back(2);

    cout << "Size -> " << v.capacity() << endl;  // Capacity = 2, Size = 2

    // Insert element 3
    v.push_back(3);

    cout << "Size -> " << v.capacity() << endl;  // Capacity = 4, Size = 3

    // Some functions

    cout << " Element at 2nd index -> " << v.at(2) << endl;

    cout << "Front -> " << v.front() << endl;

    cout << "Back -> " << v.back() << endl;

    // Remove last element
    v.pop_back(); // Output : 1,2

    v.clear(); // Will remove elements so size will be 0, but capacity will be 4 only.


    // If size of vector is known beforehand

    vector<int> a(5,1); // [5 = size, 1 = intial value of each element]

    // Print a
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << endl;
    }
    
    vector<int> last(a);

     // Print last
    for(int i = 0; i < last.size(); i++){
        cout << last[i] << endl;
    }


    return 0;
}