#include <bits/stdc++.h>
using namespace std;

#define HASH_SIZE 10

int h[HASH_SIZE]={NULL};

void insert(){

     int key,index,i;
     int flag=0,hash1,hash2;

     cout<<"\nEnter a value to insert into the Hash Table:\n";
     cin>>key;

     hash1=key%HASH_SIZE;
     hash2 = 8-(key %8);

     for(i=0;i<HASH_SIZE;i++){

        index=(hash1 + i*hash2) % HASH_SIZE;

        if(h[index] == NULL){
            h[index]=key;
            break;
        }
     }
     if(i == HASH_SIZE){
        cout<<"\nHash Table is Full!\n";
     }

}
void search(){

    int key,index,i;
    int flag=0,hash1,hash2;

    cout<<"\nEnter an element to search: \n";
    cin>>key;

    hash1 = key % HASH_SIZE;
    hash2 = 8-(key % 8);

    for(i=0;i<HASH_SIZE; i++){

        index=(hash1+i*hash2)%HASH_SIZE;
        if(h[index]==key){
          cout<<"Value "<<key<<"is found at index "<<index;
          break;
        }
      }
      if(i == HASH_SIZE)
        cout<<"\nValue is not found!\n";
}
void display(){
  int i;
  cout<<"\nElements in the Hash Table: \n";

  for(i=0;i<HASH_SIZE;i++){
    cout<<"\nIndex "<<i<<"\t\tValue = "<<h[i];
  }
  cout<<"\n";

}
int main(){

    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

    system("COLOR 0B");

    int select,
    i;
    while(1)
    {
        printf("\t\t\t--------------\n\t\t\tDouble Hashing\n\t\t\t--------------\nSelect:\n\t 1. Insert\n\t 2. Display \n\t 3. Search \n\t 4. Exit \n");
        cin>>select;

        switch(select)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
        }
    }
}

