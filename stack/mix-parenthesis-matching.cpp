#include <iostream>
using namespace std;

struct Node {
    char data;
    struct Node *next;
}*top = NULL;

void push(char x){
    struct Node *p = new Node;
    if (p == NULL){
        cout << "Stack Overflow." << endl;
    } else {
        p->data = x;
        p->next = top;
        top = p;
    }
}

int pop(){
    int x = -1;
    struct Node *p;
    if (top == NULL){
        cout << "Stack Underflow." <<endl;
    } else {
        p = top;
        top = top->next;
        x = p->data;
        delete(p);
    }

    return x;
}

int checkParenthesis(char *exp){
    int i = 0;
    for (i = 0; exp[i] != '\0' ; i++){
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(') {
            push(exp[i]);
        } else if (exp[i] == '}' || exp[i] == ']' || exp[i] == ')') {
            if (top == NULL){
                return false;
            } else {
                char x = top->data;
                if((x=='(' && exp[i]==')')||
                   (x=='{' && exp[i]=='}')||
                    (x=='[' && exp[i]==']')) {
                    pop();
                    } else {
                    return false;
                  }
            }
        }
    }

    if (top == NULL) {
        return true;
    } else {
        return false;
    }
}


int main(){

    char *exp = "({{{{}}}))";

    int output = checkParenthesis(exp) ;

    if (output == 1){
        cout << "true" << endl;
    } else {
        cout << "false" <<endl;
    }

    return 0;
}