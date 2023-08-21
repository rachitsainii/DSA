#include<bits/stdc++.h>
using namespace std;

// List: Implemented using a doubly linked list internally.

int main(){

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i: l){
        cout << i << " " << "\n";
    }

    l.erase(l.begin());
    cout << "After erase : " << endl;
    for(int i: l){
        cout << i << " " << "\n";
    }

    cout << "Size of list : " << l.size() << endl;


    // Copy l to a new list n
    list<int> n(l);

    // Create a new list of size 5 with 100 as initial value of each element
    list<int> k(5, 100);

    for(int i:k){
        cout << i << " " ;
    }

    return 0;
}