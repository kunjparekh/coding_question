// https://codeforces.com/problemset/problem/352/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,c=0,x=0,d=0,t=0,q=0;
    cin>>n;
    ll a[n];
    map< int, vector<int> >mp;
    unordered_map<int,int>mp1;
    map<int,int>mp2;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]].push_back(i);
        mp1[a[i]]++;
    }
    /*for(auto i:mp)
    {
        cout<<i.first<<" ";
        for(auto j:i.second)
        {
            cout<<j;
        }
        cout<<"\n";
    }*/
    for(auto i:mp)
    {
        if(mp1[i.first]>1){
        q=0;
        t=0;
        for(auto j = 0;j< i.second.size()-1 ;j++)
        {
            //cout<<i.second[j];
            if(t==0){
            d= i.second[j+1] - i.second[j];
            t=1;
            }
            //cout<<d;
            if(d!= i.second[j+1] - i.second[j])
            {
                q=1;
                break;
            }
            
        }
        if(q==0)
        {
            
            mp2.insert({i.first,d});
            
        }
        }
        else{
            
            mp2.insert({i.first,0});
        }
        
    }
    cout<<mp2.size()<<"\n";
    for(auto i:mp2)
    {
        cout<<i.first<<" "<<i.second<<"\n";
    }
    return 0;
}