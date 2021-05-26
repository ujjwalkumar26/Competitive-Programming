#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++)cin >> a[i];
        ll min=a[0];
        for(ll i=0;i<n;i++){
            if(a[i]<min)
                min=a[i];
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            if(a[i]!=min)
                ans++;
        }
        cout <<ans<<endl;

    }
	return 0;
}