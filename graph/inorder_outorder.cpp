#include<iostream>
#include <bits/stdc++.h>
using namespace std;

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
    return 0;
}