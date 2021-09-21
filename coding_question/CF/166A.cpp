#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define gcd(x,y) __gcd(x,y)

bool comp(int a,int b)
{
    return (a<b);
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,k;
	cin>>n>>k;
	vector< pair<int,int> > p;
	pair<int,pair<int,int>> m[n];
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        p.push_back({x,y});
    }
    sort(p.rbegin(),p.rend());
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(p[i] == p[j])
            c++;
        }
        //cout<<"c:"<<c<<endl;
        m[i].first = c;
        m[i].second = p[i];
        for(int j=0;j<n;j++)
        {
            if(p[i] == p[j])
           {
               m[j].first = c;
               m[j].second =make_pair(p[j].first,p[j].second);
           }
           cout<<m[i].first<<" "<<m[i].second.first<<" "<<m[i].second.second<<endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        p.push_back({x,y});
    }
    cout<<m[k-1].first<<"\n";
   return 0;
}
