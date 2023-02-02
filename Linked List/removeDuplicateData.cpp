#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
};
Node *head, *tail;

void create()
{
	head = NULL, tail = NULL;
	struct Node *curr;

	int n,item;
	cin>>n;   //size of the List

	for(int i=0;i<n;i++){
		curr = new Node(); //in cpp
		//curr = (struct Node*)malloc(sizeof(struct Node));
		cin>>item;
		curr->data = item;
		curr->next = NULL;

		if(head == NULL){
			head = curr;
			tail = curr;
		}else{
			tail->next = curr;
			tail = curr;
		}
	}
}
void display()
{
	Node *temp;
	temp = head;

	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

void removeDuplicate()
{
	Node *t1, *t2, *dup;
	t1 = head;
	while(t1 != NULL && t1->next != NULL){
		t2 = t1;
		while(t2->next != NULL){
			if(t1->data == t2->next->data){
				dup = t2->next;
				t2->next = t2->next->next;
				delete(dup);
			}else{
				t2 = t2->next;
			}
		}
		t1 = t1->next;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	create();
	display(); cout<<"\n";
	removeDuplicate();
	display();


	return 0;
}