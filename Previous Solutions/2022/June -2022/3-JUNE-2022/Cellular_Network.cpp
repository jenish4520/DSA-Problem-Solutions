#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
#define ll long long
#define vll vector<ll>
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define fl(variable,start_index,end_index) for(auto variable=(start_index)-((start_index)>(end_index));variable!=(end_index)-((start_index)>(end_index));((start_index)<(end_index)?variable++:variable--))

bool checkRange(vll &city, vll &tower, ll rng){

    ll j=0;
    ll i=0;

    for(i=0;i<city.size()&&j<tower.size();){
        while(i<city.size() && j<tower.size() && ((tower[j]-rng)<=city[i])&&(city[i]<=(tower[j]+rng))){
            i++;
        }
        j++;
        if(j>=tower.size()) break;
    }

    return i>=(city.size());
}

void solve(){
    ll n,m;
    cin>>n>>m;

    vll city(n);
    vll tower(m);

    fl(i,0,n) cin>>city[i];
    fl(i,0,m) cin>>tower[i];

    ll start=0;
    ll end=2e9;

    while(start<=end){
        ll mid=(start+end)/2;

        if(checkRange(city,tower,mid)) end=mid-1;
        else start=mid+1;
    }

    cout<<start;

}

int main()
{
    fast_io;

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}