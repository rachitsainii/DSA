#include<bits/stdc++.h>
using namespace std;

// Queue : FIFO

int main(){

    queue<string> q;

    q.push("Rachit");
    q.push("Naman");
    q.push("Mukesh");

    cout << "First Element -> " << q.front() << endl;

    cout << "Size before pop -> " << q.size() << endl;

    q.pop();

     cout << "First Element -> " << q.front() << endl;

     cout << "Size after pop -> " << q.size() << endl;
    return 0;
}