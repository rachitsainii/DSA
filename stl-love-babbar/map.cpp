#include<bits/stdc++.h>
using namespace std;

// Map : Key-value pair. Same key can't be pointed to more than one value.

int main(){

    map<int, string> m;

    m[1] = "Rachit";
    m[2] = "Naman";
    m[3] = "Mukesh";

    m.insert( {5, "Kamal"} );

    // Print
    cout << "Before erase -> " << endl;
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 13 -> " << m.count(13) << endl;
    cout << "Finding 3 -> " << m.count(3) << endl;

    cout << "After erase -> " << endl;
    m.erase(2);

    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    // Find = Will return the iterator of that particular element

    auto it = m.find(5);

    for (auto i = it; i!=m.end(); i++){
        cout << (*i).first << endl;
    }


    return 0;
}