#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
};
Node *head, *tail;

void insertAtPosition()
{
	int pos;
	Node *newnode, *curr, *temp, *temp1;
	newnode = new Node();
	cin>>newnode->data;
	newnode->next = NULL;
	cin>>pos; //postion of the number to be added.

	if(head==NULL){
		head=newnode;
		tail=newnode;
	}else{
		temp = head;
		for(int i=0;i<pos;i++){
			temp1 = temp;
			temp = temp->next;
		}
		temp1->next=newnode;
		newnode->next = temp;
	}
}

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

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	create();
	insertAtPosition();
	display();


	return 0;
}