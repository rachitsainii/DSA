#include<bits/stdc++.h>
using namespace std;

void createVector() {

    vector<int> v; // Creates an empty container {}

    v.push_back(1); // 1-> {} = {1}
    v.emplace_back(2); // 2 -> {1} = {1,2}

    vector< pair <int, int> > x ;

    x.push_back({1,2});

    x.emplace_back(1,2); // Automatically assumes it a pair.

    vector<int> y(5,100); // {100,100,100,100,100}

    vector<int> z(5); //{_, _, _, _, _}

    vector <int> v1(5,20);
    vector <int> v2(v1);


}


int main(){

    vector<int> v ;

    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    vector<int> q = {1,2,3,4,5,5,6,7,7};

    for (vector<int>:: iterator it = v.begin() ; it != v.end() ; it++ ){
        cout << *(it) << " ";
    }

    for (auto it = q.begin(); it != q.end(); it++){
        cout << *(it) << " ";
    }

    for ( int i = 0 ; i < q.size(); i++){
        cout << q[i] << " ";
    }


    return 0;
}   