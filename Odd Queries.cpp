#include<bits/stdc++.h>
using namespace std;
#define start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define tc ll t; cin>>t; while(t--)
#define pb(a) push_back(a)

void solve()
{
    ll n,q;
    cin>>n>>q;
    ll arr[n+123];
    ll sum = 0;
    vector<ll> v;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
        v.pb(sum);
    }
    //for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    //cout<<endl;
    for(ll i=0; i<q; i++)
    {
        ll l,r,k,res;
        cin>>l>>r>>k;
        if(l==1)
        {
            res = (k*((r-l)+1) + 0) - v[r-1];
            res += v.back();
        }
        else
        {
            res = (k*((r-l)+1) + v[l-2]) - v[r-1];
            res += v.back();
        }

        if(res % 2 != 0) cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

int main()
{
    tc
    {
        solve();
    }
}
