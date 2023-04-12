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
	cin>>n;

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
void insertionAtBeginning()
{
	Node *temp,*f;
	f = new Node();

	cin>>f->data;
	f->next = NULL;

	if(head == NULL){
		head = f;
		tail = f;
	}else{
		f->next = head;
		head = f;
	}
}
void insertAtEnd()
{
	Node *newnode, *temp;
	newnode = new Node();
	cin>>newnode->data;
	newnode->next = NULL;

	if(head==NULL){
		head=newnode;
		tail=newnode;
	}else{
		temp=head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next=newnode;
		tail=newnode;
	}
}
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
void delFirstNode()
{
	Node *temp;
	temp = head;
	head = head->next;

	free(temp);
}
void delLastNode()
{
	Node *temp, *temp1;
	if(head != NULL){
		temp = head;
		while(temp->next != NULL){
			temp1 = temp;
			temp = temp->next;
		}
		temp1->next = NULL;
		delete(temp);
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

	int select;

	while(1){
            cout<<"\n";
        cout<<"\t\tLinked List Menu"<<"\n\n";
		cout<<"1    Create Linked List"<<"\n";
		cout<<"2    Insert node at the beginning of Linked List"<<"\n";
		cout<<"3    Insert node at the end of Linked List"<<"\n";
		cout<<"4    Insert node at any position of Linked List"<<"\n";
		cout<<"5    Delete node from beginning of Linked List"<<"\n";
		cout<<"6    Delete node from last position of Linked List"<<"\n";
		cout<<"7    Delete node from any position of Linked List"<<"\n";
		cout<<"8    Reverse Linked List"<<"\n";
		cout<<"9    Remove Duplicate from Linked List"<<"\n";
        cout<<"10   To exit the program"<<"\n\n";

		cin>>select;

		switch(select){
			case 1:
				create();
				display(); cout<<"\n";
				break;
			case 2:
				insertionAtBeginning();
				display();cout<<"\n";
				break;
			case 3:
				insertAtEnd();
				display();cout<<"\n";
				break;
			case 4:
				insertAtPosition();
				display();cout<<"\n";
				break;
			case 5:
				delFirstNode();
				display();cout<<"\n";
				break;
			case 6:
				delLastNode();
				display();cout<<"\n";
				break;
			case 7:
				delParticularNode();
				display();cout<<"\n";
				break;
			case 8:
				reverseList();
				display();cout<<"\n";
				break;
			case 9:
				removeDuplicate();
				display();cout<<"\n";
				break;
			case 10:
				exit(1);
				break;
			default:
				cout<<"Invalid selection"<<"\n";

		}
	}

	return 0;
}
