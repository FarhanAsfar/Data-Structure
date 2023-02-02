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

void reverseList()
{
	Node *temp, *t1, *t2;
	t1 = NULL, t2=NULL;
	if(head==NULL){
		cout<<"Empty List"<<"\n";
	}
	else{
		while(head != NULL){
			t2 = head->next;
			head->next = t1;
			t1 = head;
			head = t2;
		}
		head = t1;
		temp = head;
		/*while(temp != NULL){
			cout<<temp->data<<" ";
			temp = temp->next;
		}*/
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
	reverseList();
	display();


	return 0;
}