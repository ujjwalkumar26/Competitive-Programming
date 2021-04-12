//https://codeforces.com/contest/1472/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll t;
   cin >> t;
   while(t--)
   {
       ll n;
       cin >> n;
       ll a[n+1];
       for(ll i=1;i<=n;i++)
        cin>> a[i];
       ll s[n+1];
       s[n]=a[n];
       for(ll i=n-1;i>=1;i--)
       {
           if(a[i]+i<=n)
            s[i]=a[i]+s[i+a[i]];
            else s[i]=a[i];
       }
        //for(ll i=1;i<=n;i++)
        //cout<< s[i]<<" ";
        ll maxel=s[1];
        for(ll i=1;i<=n;i++)
        {
            if(s[i]>maxel)
                maxel = s[i];
        }
        cout << maxel<<endl;
   }
}
