//https://codeforces.com/contest/79/problem/B

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main()
{
    ll n,m,k,t;
    cin >> n >> m >> k >> t;
    vector <ll> v1;
 
    for (ll i = 1; i <= k; i += 1){
        ll x, y;
        cin >> x >> y;
        ll c = (x - 1) * m + (y - 1);
        v1.push_back(c);
    }
	


    sort(v1.begin(),v1.end());
 
    while (t--){
        ll x,y;
        cin >> x >> y;
        ll c = (x - 1) * m + (y - 1);
        ll i = 0;
        for ( ; i < v1.size() && v1[i] < c; i += 1);
        if (i < v1.size() && v1[i] == c) cout << "Waste\n";
        else {
            ll a = (c - i) % 3;
            if (a == 0) cout << "Carrots\n";
            else if (a == 1) cout << "Kiwis\n";
            else cout << "Grapes\n";
        }
    }
    return 0;
}