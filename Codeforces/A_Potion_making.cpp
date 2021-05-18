#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void reduceFraction(ll a, ll b)
{
    ll c=__gcd(a,b);
    a=a/c;
    b=b/c;
    cout << a+b<<endl;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll p;
        cin >> p;
     if(p==100){
          cout<<1<<endl;
      }  
      else if(p==0){
          cout<<1<<endl;
      }
      else{
          reduceFraction(p , 100-p);
      }
    }
    return 0;
}