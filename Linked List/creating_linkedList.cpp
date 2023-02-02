#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

void printList(Node* n)
{
	while(n != NULL){
		cout<< n->data <<" ";
		n = n->next;
	}
}
int main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif*/

	

	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head -> data = 1;
	head -> next = second; //linking 1st node with the 2nd noce

	second -> data = 2;
	second ->next = third; //linking 2st node with the 3rd noce

	third -> data = 3;
	third -> next = NULL;

	printList(head);

	return 0;
}

