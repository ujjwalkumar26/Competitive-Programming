#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,flag = 0;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]!= i+1)
            {
                flag = 1;
            }
        }
        if(flag ==0)
        {
            cout << 0 <<endl;
        }else if(a[n-1]==1 && a[0]==n)
        {
            cout << 3 <<endl;
        }else if(a[0] != 1 && a[n-1]!=n)
        {
             cout << 2 <<endl;
        }else{
            cout << 1 <<endl;
        }
    
       
    }
    return 0;
}