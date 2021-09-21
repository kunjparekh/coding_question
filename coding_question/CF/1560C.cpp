#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a=sqrt(n);
        //cout<<a<<" ";
        long long x,y;
        long long r=n-a*a;
        if(r==0){
            y=1;
            x=a;
        }
        else if(r<a+1){
            y=a+1;
            x=r;
        }
        else{
            x=a+1;
            y=2*(a+1)-r;
        }
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}

