#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int heap [MAX];
int size=0;

void heapInsert(int value)
{
    if(size==MAX){
        cout<<"Overloaded"<<"\n";
    }
    else{
        int parent = (size-1)/2;
        heap[size]=value;
        int i=size;

        while(i!=0 && heap[parent]<heap[i]){
            int h=heap[i];
            heap[i]=heap[parent];
            heap[parent]=h;

            i=(i-1)/2;
            parent=(i-1)/2;
        }
        size++;
    }
}

void deleteN()
{
    if(size!=0){
        cout<<heap[0];
        heap[0]=heap[size-1];
        size--;
    }
}

void displayHeap()
{
    for(int i=0; i<size; i++){
        cout<<heap[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int select,item;
	while( ){
		cout<<"\n";
        cout<<"\t\tHeap Menu"<<"\n\n";
		cout<<"1    Insert Node"<<"\n";
		cout<<"2    Delete Node"<<"\n";
		cout<<"3    Display Heap"<<"\n";
		cout<<"4    To Exit the program"<<"\n";

		cin>>select;

		switch(select){
			case 1:
				cin>>item;
				heapInsert(item);
				break;
			case 2:
				deleteN();
				break;
			case 3:
				displayHeap();
				break;
			case 4:
				exit(1);
				break;
			default :
				cout<<"Invalid Selection"<<"\n";
		}
	}

	return 0;
}