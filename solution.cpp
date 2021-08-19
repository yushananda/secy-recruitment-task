#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
#define pb push_back
using namespace std;
const ll N=1e6+5, inf=1e18;
ll n, arr[N], p[N], subt[N], arena[N], W=0;
vector<ll> adj[N];
void dfs(ll u)
{
    subt[u]=arr[u];
    for(auto v:adj[u])
    {
        if(v==p[u]) continue;
        p[v]=u;
        dfs(v);
        subt[u]+=subt[v];
        arena[u]=max(arena[u], subt[v]);
    }
    arena[u]=max(arena[u], W-subt[u]);
}

int main() {
    cin >> n;
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        W+=arr[i];
        subt[i]-0;
        arena[i]=-inf;
    }
    for(ll i = 0; i < n-1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    p[0]=1;
    dfs(0);
    ll mx=inf, mxi=-1;
    for(ll i = 0; i < n; i++)
    {
        //cout << arena[i] << endl;
        if(arena[i]<mx)
        {
            mx=arena[i];
            mxi=i;
        }
    }
    cout << mxi;
    return 0;
}
