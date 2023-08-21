#include<bits/stdc++.h>
using namespace std;

// Stack : LIFO


int main(){

stack<string> s;

s.push("Rachit");
s.push("Saini");
s.push("Naman");

cout << "Top element -> "<< s.top() << endl;

s.pop();

cout << "Top element -> "<< s.top() << endl;

cout << "Size of stack -> "<< s.size() << endl;

cout << "Empty or not -> "<< s.empty() << endl;

    return 0;
}