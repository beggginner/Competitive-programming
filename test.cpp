#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define mod 1000000007
#define debug(x) cout<<#x<<" = "<<x<<"\n"
typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;
const int N=2e5+1;

// vector <vector<int>> adj(N);
// vector <bool> visited(N);
// vector <bool> paired(N);
// int c;

void solve()
{
   int n;
   cin>>n;

   if(n==2 || n==3)
   {
        cout<<"NO SOLUTION";
        return;
   }

   if(n&1)
   {
        for(int i=n-1;i>=2;i-=2)
            cout<<i<<" ";
        for(int i=n;i>=1;i-=2)
            cout<<i<<" ";
   }
   else
   {
        for(int i=n-1;i>=1;i-=2)
            cout<<i<<" ";
        for(int i=n;i>=2;i-=2)
            cout<<i<<" ";
   }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t=1;
    // cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;       
}
    
