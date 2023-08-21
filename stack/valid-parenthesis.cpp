#include<iostream>
using namespace std;

struct Node {
    char data;
    struct Node *next;
}*top = NULL;

void push(char x){
    struct Node *p = new Node;
    if (p == NULL){
        cout << "Stack Overflow" <<endl;
    } else {
        p->data = x;
        p->next = top;
        top = p;
    }
}

int pop() {
    struct Node *p = NULL;
    int x = -1;
    if (top == NULL){
        cout << "Stack Underflow" <<endl;
    } else {
        p = top;
        top = top->next;
        x = p->data;
        delete(p);
    }
    return x;
}

int isBalance(char *exp){
    int i = 0;

    for (i = 0; exp[i]!= '\0'; i++){
        if (exp[i] == '('){
            push(exp[i]);
        } else if (exp[i] == ')') {
            if (top == NULL) {
                return false;
            } else {
                pop();
            }
        }
    }
    if(top == NULL){
        return true;
    } else {
        return false;
    }
    
}



int main(){

    char *exp = "((a+b)*(c+d)";

    cout << isBalance(exp) <<endl;

    return 0;
}