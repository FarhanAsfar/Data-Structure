#include <bits/stdc++.h>
using namespace std;
int graph[60][60];
int nodes, edges;

void createGraph(){
	cout<<"Number of Edges: ";
	cin>>edges;
	for(int i=1;i<=edges;i++){
		int x,y;
		cout<<"\n"<<"Enter two end points of the edge: ";
		cin>>x>>y;
		graph[x][y]=1;
		graph[y][x]=1;
	}
}

void addEdge(){
	cout<<"Enter end points: ";
	int x,y;
	cin>>x>>y;
	if(x<=nodes && y<=nodes){
		graph[x][y]=1;
		graph[y][x]=1;
	}
	edges++;
}

void addVertex(){
	cout<<"Enter new vertex: ";
	int x,y;
	cin>>x;
	nodes++;
}

void displayGraph(){
	cout<<"Number of Nodes "<<nodes<<"\n";
	cout<<"Number of Edges "<<edges<<"\n";

	for(int i=1;i<=nodes;i++){
		for(int j=1;j<=nodes;j++){
			cout<<graph[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0),cin.tie(0);

	int select;

	while(1){
		cout<<"1. Create Graph"<<"\n";
		cout<<"2. Add New Edge"<<"\n";
		cout<<"3. Add New Vertex"<<"\n";
		cout<<"4. Display Graph"<<"\n";
		cout<<"5. To exit the program"<<"\n";

		cin>>select;

		switch(select){
			case 1:
				createGraph();
				break;
			case 2:
				addEdge();
				break;
			case 3:
				addVertex();
				break;
			case 4:
				displayGraph();
				break;
			case 5:
				exit(1);
				break;
			default :
				cout<<"Invalid Selection"<<"\n";
		}
	}



	return 0;
}