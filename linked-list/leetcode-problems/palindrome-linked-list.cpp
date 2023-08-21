#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*head = NULL;

void create(int A[], int n){
    int i;
    struct Node *t;
    struct Node *last;
    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p){
    while( p != NULL){
        cout << p->data << endl;
        p = p->next;
    }
}

void checkPalindrome(struct Node *p){
    int count = 0;
    int i = 0;
    int flag = 0;
    while(p != NULL){
        count += 1;
        p = p->next;
    }

    p = head;

    int A[count];

    while(p != NULL){
        A[i] = p->data;
        p = p->next;
        i++;
    }

   
    for (int i = 0; i < count / 2 && count != 0 ; i++){
        if (A[i] != A[count - i - 1]) {
            flag = 1;
            break;
        } 
    }

    if (flag == 1){
        cout << "Not a Palindrome LL" << endl;
    } else { 
        cout << "Palindrome LL" << endl;
    }
}


int main(){

    int A[] = {1,2,2,1};

    create(A, 4);

    // display(head);

    checkPalindrome(head);

    return 0;
}




// Leet Code 

// class Solution {
// public:
//     bool isPalindrome(ListNode* p) {
//         struct ListNode *first = p;
//         int count = 0;
//         int i = 0;
//         int flag = 0;
//         while ( p != NULL){
//             count += 1;
//             p = p->next;
//         }

//         p = first;

//         int A[count];

//         while( p!= NULL){
//             A[i] = p->val;
//             p = p->next;
//             i++;
//         }

//         for (int i = 0; i < count / 2 && count != 0; i++){
//             if (A[i] != A[count - i - 1]){
//                 flag = 1;
//                 break;
//             }
//         }

//         if (flag == 1) {
//             return false;
//         } else {
//             return true;
//         }
        
//     }
// };