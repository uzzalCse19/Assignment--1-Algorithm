#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n,e;
    cin>>n>>e;
    int mt[n][n];
    memset(mt,0,sizeof(mt));
    int b,c;
    while(e--)
    {
cin>>b>>c;
mt[b][c]=1;
    }
    int t;
    cin>>t;
    while(t--)
    {
        cin>>b>>c;
        if(b==c && n>b) cout<<"YES"<<endl;
        else if(mt[b][c]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
