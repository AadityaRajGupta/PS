#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int ll

void solve()
{
    int l,temp;
    vector<int> v;
    cin >> l;
    for(int i=0;i<l;i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    int sum=0;
    for(int i=0;i<l;i++)
    {
        for(int j=i;j<l;j++)
        {
            if(v[i]%3==v[j]%3 && i!=j)
                sum += (v[i]^v[j]);
        }
    }
    cout << sum;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    // cout << t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
