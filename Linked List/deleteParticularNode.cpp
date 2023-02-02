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

void delParticularNode()
{
	Node *temp1, *temp;
	int key;
	cin>>key;
	if(head != NULL){
		temp = head;
		while(temp->next != NULL && temp->data != key){
			temp1 = temp;
			temp = temp->next;
		}
		if(temp->data == key){
			temp1->next = temp->next;
			delete(temp);
		}else{
			cout<<"Node not found"<<"\n";
		}
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
	delParticularNode();
	display();


	return 0;
}