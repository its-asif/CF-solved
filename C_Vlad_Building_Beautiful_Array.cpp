/*
        Codeforces Round 874 (Div. 3)
        Codeforces 1833C
        Vlad Building Beautiful Array
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES"<<endl
#define no cout << "NO" << endl

int main() {
    int t; cin>>t; 
    for(int test=1;test<=t;test++){
        ll n ; cin >> n; 
        vector < ll > even, odd;
        for (int i = 0; i < n; i++)
        {
            ll x; cin >> x;
            if( x % 2) odd.pb(x);
            else even.pb(x);
        }
        if(odd.size()==0 || even.size()==0) yes;
        else{
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());
            if(odd[0] < even[0]) yes;
            else no;
        }
    }
}