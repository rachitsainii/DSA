#include <iostream>
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

	for(i = 1 ; i < n; i++){
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t ;
		last = t;
	}
}

void LLDisplay(struct Node *p) {
	while (p != NULL) {
		cout << p->data<<endl;
		p = p->next;
	}
}
 


int main() {

	int A[] = {3,5,7,10,15};
	create(A, 5);

	LLDisplay(head);

	return 0;
}