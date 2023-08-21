#include<bits/stdc++.h>
using namespace std;

// What is Deque? Ans : Insertion and Deletion can be performed at both ends. (That's why doubly ended queue.)
// It is also dynamic
// Random access is possible

int main(){

deque<int> d;

// Insert elements
d.push_back(1);
//or
d.push_front(2);

// Print
for (int i:d){
    cout << d[i] << " " << endl;
}

// Delete element from the front
d.pop_front();


// Print
for (int i:d){
    cout << d[i] << " " << endl;
}

d.push_front(2);

// Print element at first index.
cout << "Element at 1st index -> " << d.at(1) << endl;


cout << "Front " << d.front() << endl;
cout << "Back " << d.back() << endl;


cout << "Empty or not " << d.empty() << endl;

cout << "Before erase : " << d.size() << endl;
d.erase(d.begin(), d.begin()+1);
cout << "After erase : " << d.size() << endl;

// Print
for (int i:d){
    cout << d[i] << " " << endl;
}

    return 0;
}