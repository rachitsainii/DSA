#include<bits/stdc++.h>
using namespace std;

int main(){

    // Set : Store everything in a sorted order. Stores unique values.

    set<int> s;
    s.insert(1); // {1}
    s.emplace(2); // {1,2}
    s.insert(2); // {1,2}
    s.insert(4); // {1,2,4}
    s.insert(3); // {1,2,3,4}

    return 0;
}