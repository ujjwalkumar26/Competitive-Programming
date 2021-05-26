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
        sort(a,a+n);
        ll count=0,diff=1000000001,pos=0;
        for(ll i=0;i<n;i++){
        if(a[i]>0){
            pos=i;
            break;
        }
        else{
             count++;
            if(i!=0)diff=min((a[i]-a[i-1]),diff);
            }
        }
        if(count!=n)
        if(a[count]<=diff)count++;
        cout <<count<<endl;
        

    }
	return 0;
}