#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n,e;
    cin>>n>>e;
    vector<int> v[n];
    int b,c;
    while(e--)
    {
cin>>b>>c;
v[b].push_back(c);
v[c].push_back(b);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(v[x].empty()) cout<<"-1"<<endl;
        else
        {
            sort(v[x].begin(),v[x].end(),greater<int>());
            for(int y:v[x]) cout<<y<<" ";
            cout<<endl;
        }
    }
}