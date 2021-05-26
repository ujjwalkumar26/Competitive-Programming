#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll z=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='0'){
                z++;
            }
       }
      if(z==1 || z%2==0){
          cout <<"BOB"<<endl;
      }
      else {
          cout <<"ALICE"<<endl;
      }
      //else NO draw 
}
}