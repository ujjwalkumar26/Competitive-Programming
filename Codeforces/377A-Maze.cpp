//https://codeforces.com/contest/377/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int rem;
vector< pair <int,int> > adj[500][500];
bool vis[500][500];
void dfs(int x,int y)
{
    if (vis[x][y])
        return;
        if(rem==0)
        return;
    vis[x][y] = true;
    rem--;

    for(int i=0;i<adj[x][y].size();i++)
        dfs((adj[x][y])[i].first,(adj[x][y])[i].second);
}
int main()
{
    int r,c,k,s=0;
    cin >> r >> c >> k;
    char a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> a[i][j];
        }
    }
    int x,y,flag=1;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='.')
            {
                s++;
                if((i-1)>=0 && a[i-1][j]=='.')
                {
                    adj[i][j].push_back(make_pair(i-1,j));
                    adj[i-1][j].push_back(make_pair(i,j));

                }
                if((i+1)<r && a[i+1][j]=='.')
                {
                    adj[i][j].push_back(make_pair(i+1,j));
                    adj[i+1][j].push_back(make_pair(i,j));
                }
                if((j-1)>=0 && a[i][j-1]=='.')
                {
                    adj[i][j].push_back(make_pair(i,j-1));
                    adj[i][j-1].push_back(make_pair(i,j));
                }
                if((j+1)<c && a[i][j+1]=='.')
                {
                    adj[i][j].push_back(make_pair(i,j+1));
                    adj[i][j+1].push_back(make_pair(i,j));
                }
            }
        }
    }
    if(s==0 || k==0)
    {
         for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
    }

    rem=s-k;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='.')
                {
                    x=i;
                    y=j;
                    flag=-1;
                    break;
                }

        }
        if(flag==-1)
            break;
    }
    dfs(x,y);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='.')
            {
                if(vis[i][j]==false)
                    a[i][j]='X';
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}
