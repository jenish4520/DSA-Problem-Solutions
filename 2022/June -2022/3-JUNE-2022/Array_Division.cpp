#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
#define ll long long
#define lmax LLONG_MAX
#define lmin LLONG_MIN
#define pb push_back
#define se second
#define fi first
#define vll vector<ll>
#define vi vector<int>
#pragma GCC target("avx2")
#define ull unsigned long long
#define vpll vector<pair<ll, ll>>
#define vpi vector<pair<int, int>>
#define _yes cout << "YES" << endl
#define _no cout << "NO" << endl
#pragma GCC optimization("Ofast")
#pragma GCC optimization("unroll-loops")
#define checkav(v) for (auto &x : v) cout << x << " ";
#define checkvp(v) for (auto &x : v) cout << x.fi << " " << x.se << endl;
#define Give_me_some_more_time ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define fl(variable,start_index,end_index) for(auto variable=(start_index)-((start_index)>(end_index));variable!=(end_index)-((start_index)>(end_index));((start_index)<(end_index)?variable++:variable--))
#define scanvec(v, start, end) for (int i = start; i < end; i++) { ll x; cin >> x; v.pb(x); }
#define scanarr(index_start, index_end, target_array) for (ll i = index_start; i < index_end; i++) cin >> target_array[i];
ll gcd(ll a, ll b){ll c;c = a % b;while (c != 0){a = b;b = c;c = a % b;}return b;}
ll fastPower(ll number, ll power) { ll res = 1, tmp = number; while (power > 0) { if ((power & 1) != 0) {res *= tmp; } power = power >> 1; tmp *= tmp; } return res;}
bool isPrime(ll n){ if (n == 1) return false; if (n == 2 || n == 3) return true; if (n % 2 == 0 || n % 3 == 0) return false; for (ll i = 5; i * i <= n; i += 6) if (n % i == 0 || (n % (i + 2)) == 0) return false; return true;}

bool canMakePartition(vll &v, ll mid, ll k){
    ll sum=0;
    ll worker=1;

    fl(i,0,v.size()){
        if(sum+v[i]<=mid){
            sum+=v[i];
        }
        else{
            worker++;
            sum=v[i];
        }
    }

    return worker<=k;
}

void solve(){
    ll n,k;
    cin>>n>>k;

    vll v(n);
    ll sum=0;
    ll mx=-1;

    fl(i,0,n){
        cin>>v[i];
        sum+=v[i];
        mx=max(mx,v[i]);
    }

    ll start=mx;
    ll end=sum;

    while(start<=end){
        ll mid=(start+end)/2;

        if(canMakePartition(v,mid,k)) end=mid-1;
        else start=mid+1;
    }

    cout<<start;
}

int main()
{
    Give_me_some_more_time;

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