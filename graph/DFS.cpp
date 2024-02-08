#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// good connected components
// components of graph
// no. of provinces

// simple traversal
int DFS_recursive(int i,vector<int> adj[],vector<int>& status)
{
    status[i]=1;
    cout << i << " ";
    for(int j=0;j<adj[i].size();j++)
        if(status[adj[i][j]]==0)
            DFS_recursive(adj[i][j],adj,status);
    return 0;
}
int DFS_traversal(vector<int> adj[],int n)
{
    // int n=adj.size();
    vector<int> status(n,0);
    for(int i=0;i<n;i++)
        if(status[i]==0)
            DFS_recursive(i,adj,status);
    return 0;
}

int DFS_Recursion_cycle(int i,const vector<int> adj[],vector<int>& status,vector<int>& Inrec)
{
    status[i]=1;
    Inrec[i]=1;
    for(size_t j=0;j<adj[i].size();j++)
    {
        if(status[adj[i][j]]==0)
        {
            int c=DFS_Recursion_cycle(adj[i][j],adj,status,Inrec);
            if(c==1)
                return 1;
        }
        else if(Inrec[adj[i][j]]==1)
            return 1;
    }
    Inrec[i]=0;
    return 0;
}
int DFS_cycle(vector<int> adj[],int n)
{
    
    vector<int> status(n,0);
    vector<int> Inrec(n,0);
    for(int i=0;i<n;i++)
    {
        if(status[i]==0)
        {
            int c=DFS_Recursion_cycle(i,adj,status,Inrec);
            if(c==1)
                return 1;
        }
    }
    return 0;
}
`
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,e;
    cin>>n>>e;

    vector<int> adjList[n];
    vector<int> inDeg(n);
    vector<int> outDeg(n);

    for(int i=0;i<e;i++)
    {
        int a,b;
        cin >> a >> b;
        adjList[a].push_back(b);
        outDeg[a]++;
        inDeg[b]++;
    }

    cout << "OUT DEGREE"<<endl;
    for(int i=0;i<n;i++)
    {
        cout << i << ":" << outDeg[i]<<endl;
    }
    cout<<endl;

    cout << "IN DEGREE" << endl;
    for(int i=0;i<n;i++)
    {
        cout << i << ":" << inDeg[i]<<endl;
    }

    cout << endl<<endl;
    // for traversal
    DFS_traversal(adjList,n);

    //for cycle detection
    cout << endl << endl;
    if(DFS_cycle(adjList,n))
        cout << "cycle found";
    else 
        cout << "cycle not found";
    return 0;
}




