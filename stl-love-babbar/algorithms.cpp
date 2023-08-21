#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> v ;

v.push_back(1);

v.push_back(3);

v.push_back(6);

v.push_back(7);

// Binary Search

cout << "Binary Search (Finding 5): " << binary_search(v.begin(), v.end(), 5) << endl;

cout << "Binary Search (Finding 6): " << binary_search(v.begin(), v.end(), 6) << endl;

// Lower Bound

cout << "Lower Bound -> " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;


// Upper Bound
cout << "Upper Bound -> " << upper_bound(v.begin(), v.end(), 6)-v.begin() << endl;

int a = 3;
int b = 5;

// Max
cout << "Max -> " << max(a,b) << endl;

// Min
cout << "Min -> " << min(a,b) << endl;


// Swap
swap(a,b);

cout << "a -> " << a << endl;

string s = "abcd";


// Reverse
reverse(s.begin(), s.end());

cout << "String s -> " << s << endl;

// Rotate
rotate(v.begin(), v.begin()+1, v.end());
cout << "v after rotate -> " << endl;
for (int i : v){
    cout << i << " ";
}cout << endl;

// Sort
sort(v.begin(), v.end());
cout << "v after sort -> " << endl;
for (int i : v){
    cout << i << " ";
}

return 0;
}