#include<bits/stdc++.h>
using namespace std;


int main(){

    stack<int> st;
    st.push(1); // {1};
    st.push(2); // {2,1};
    st.push(3); // {3,2,1};
    st.push(4); // {4,3,2,1};
    st.emplace(5); // {5,4,3,2,1};

    cout << st.top(); // prints 5

    st.pop(); // {4,3,2,1}

    cout << st.top(); // 4
    cout << st.size(); // 4

    cout << st.empty();

    return 0;
}