#include<bits/stdc++.h>
using namespace std;

void createPair(){

    pair <int, int> p = {1,2};

    cout << p.first << " " << p.second << endl;

    pair <int, pair <int, int> > q = {1, {3,4}};

    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair < int, int> arr[] = {{1,2}, {3,4}, {5,6}};

    cout << arr[0].first << " " << arr[2].second;
}

int main() {

    createPair();

    return 0;
}