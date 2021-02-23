/*Graph Representation and Traversal */

#include<bits/stdc++.h>
#define n 6
using namespace std;

void addEdge(vector <int> adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void BFS(vector <int> adj[],int s)
{
	bool visited[n];
	for(int i=0;i<n;i++)
	visited[i]=false;
	
	queue <int> q;
	q.push(s);
	visited[s]=true;
	
	while(q.empty()==false)
	{
		int curr=q.front();
		q.pop();
		
		cout<<curr<<" ";
		
		for(auto x:adj[curr])
		{
			if(visited[x]==false){
			q.push(x);
			visited[x]=true;
		}	
		}	
	}	
}
void DFS(vector <int> adj[],int s,bool visit[])
{
	if(visit[s]==true)
	return;
	
	visit[s]=true;
	cout<<s<<" ";	
	
	for(int x:adj[s])
	{
		if(visit[x]==false)
		DFS(adj,x,visit);
	}
}
	
int main()
{
	vector <int> adj[n];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,1,5);
	addEdge(adj,2,4);
	addEdge(adj,2,3);
	
	bool visited[n];
	for(int i=0;i<n;i++)
	visited[i]=false;
	
		BFS(adj,0);cout<<endl;
		DFS(adj,0,visited);
	return 0;
}

