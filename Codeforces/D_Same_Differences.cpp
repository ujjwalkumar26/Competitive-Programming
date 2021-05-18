#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin >> a[i];
            a[i]=a[i]-i-1;
        }
        unordered_map<ll,ll> m;
        for(ll i=0;i<n;i++){
            m[a[i]]++;
        }
        ll ans=0;
        
        for(auto x: m){
        ll count = x.second;
        ans+=(count*(count-1))/2;
        }
        cout << ans <<endl;
    }
	return 0;
}