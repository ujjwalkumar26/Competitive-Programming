#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        if(b==1)
           {
               cout <<"NO"<<endl;
               continue;
           }
           cout <<"YES"<<endl;
        cout << a*b<<" "<<a<<" "<<a*(b+1)<<endl;
    }
}