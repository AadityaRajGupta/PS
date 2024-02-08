#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <bits/stdc++.h>       
using namespace std;


int32_t main()
{
    
    int n,m;
    cin >> n >> m;
    
    vector<int> adj[n+1];
    vector<int> indeg(n+1);
    vector<int> temp_deg(n+1);
    vector<int> given(n+1);
    vector<int> ans(n+1);
    set<int> s;     
    
    while(m--)
    {
        int u,v;
        cin >> u>>v;
        adj[u].push_back(v);
        indeg[v]++;
        temp_deg[v]++;
    }
    
    for(int i=1;i<=n;i++)
    {
        cin >> m;
        given[i]=m;
        if(indeg[i]==0)
            s.insert(i);
    }
    
    int possibility=-1;
    for(int i=1;i<=n;i++)
    {
        auto it=s.lower_bound(given[i]);
        // cout << i <<endl;
        assert(it!=s.end() && *it==given[i]);
        int temp=*it;
        it++;
        if(it!=s.end())
            possibility=i;
        s.erase(temp);
        for(auto j:adj[temp])
            if(--temp_deg[j]==0)   s.insert(j);
    }
    if(possibility==-1)
    {
        cout << "-1";
        return 0;
    }
    
    s.clear();
    for(int i=1;i<=n;i++)
        if(indeg[i]==0)
            s.insert(i);
    

    for(int i=1;i<=n;i++)
    {
        int temp;
        if(i<possibility)
            temp=given[i];
        else if (i==possibility)
            temp=*s.upper_bound(given[i]);
        else 
            temp=*s.begin();
        
        ans[i]=temp;
        s.erase(temp);
        for(auto j:adj[temp])
            if(--indeg[j]==0)
                s.insert(j);
    }

    for(int i=1;i<=n;i++)
        cout << ans[i] << " ";
    
    return 0;
}
