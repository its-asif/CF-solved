#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

#define fi(n) for(ll i=0; i<n; i++)
#define fj(n) for(ll j=0; j<n; j++)
#define rfi(n) for(ll i = n-1; i >=0; --i)
#define fa(n) for(auto i:n)
#define fa2(n) for(auto i:n) cout<<i<<' ';
#define llt ll t; cin>>t; while(t--)
#define lln ll n; cin>>n;
#define llnm ll n,m; cin>>n>>m;
#define llx ll x; cin>>x;
#define llxy ll x,y; cin>>x>>y;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pbx ll xx; cin>> xx; v.pb(xx);
#define pbs string xx; cin>> xx; v.pb(xx);
#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define rsrt(x) sort(all(x),greater<ll>())
#define veccin(n) vll v(n); fi(n) cin>>v[i];

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/__gcd(a,b)))

#define endl "\n"
#define nl <<endl
#define sp <<' '
#define sps <<' '<<
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define C(x) cout<< x <<endl;
#define F i.first
#define S i.second

using namespace std;
int main(){
    llt{
        lln;
        ll x=1,temp=(n*(n+1))/2;
        while(x<=n){
            // C(x);
            temp-=2*x;
            x *= 2;
        }
        C(temp);
    }
} 