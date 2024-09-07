#include <bits/stdc++.h>

using namespace std;
int r,s;
 int n,m;
char b[1001][1001];
bool vis[1001][1001];
int test=0;
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
bool vd(int i,int j)
{
    if(i<0 || j<0 || i>=n || j=>m || b[i][j]=='#') return false;
    else return true;
}
void dfs(int si,int sj)
{
    if(b[si][sj]=='B') 
    {
        cout<<"YES"<<endl;
        test=2;
    }
    vis[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int ci=si+d[i].first;
        int cj=sj+d[i].second;
        if(vd(ci,cj)==true && vis[ci][cj]==false) 
        {
            dfs(ci,cj);
        }
    }
    
}
int main()
{
    // Write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 cin>>n>>m;
 int si,sj;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>b[i][j];
        if(b[i][j]=='A') si=i,sj=j;
        if(b[i][j]=='B') r=i,s=j;
    }
}
if(n==1 && m==1) cout<<"NO"<<endl;
else{
memset(vis,false,sizeof(vis));
dfs(si,sj);
if(test==0) cout<<"NO"<<endl;
}
    return 0;
}