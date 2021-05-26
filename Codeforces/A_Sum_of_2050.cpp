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
        ll ans=0;
        if(n%2050!=0){
            cout << -1 <<endl;
            continue;
        }
        else{
            n/=2050;
            ll ans=0;
            while(n>0){
                ans+=n%10;
                n/=10;
            }
            cout <<ans <<endl;
        }

    }
}