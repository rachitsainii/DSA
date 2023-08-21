#include<bits/stdc++.h>
using namespace std;

// It is a type of queue in which the first element will always be the greatest.
// When elements are added from a priority queue and then fetched : The elements will be min or max based on the type of heap.


int main(){

    priority_queue<int> maxi; // This is based on max_heap

    // Min_heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Size -> " << maxi.size() << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++){
        cout<< maxi.top() << " ";
        maxi.pop();
    } cout << endl;


    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    cout << "Size -> " << mini.size() << endl;
    int m = mini.size();
    for (int i = 0; i < m; i++){
        cout<< mini.top() << " ";
        mini.pop();
    } cout << endl;

    cout << "Empty or not -> " << mini.empty() << endl;

    return 0;
}