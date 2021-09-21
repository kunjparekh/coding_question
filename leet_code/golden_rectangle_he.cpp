// he for hackerearth
#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	ll n,c=0;
	cin>>n;
	ll h[n],w[n];
	for(ll i=0;i<n;i++)
	{
		cin>>w[i]>>h[i];
	}
	for(ll i=0;i<n;i++)
	{
		float r = (float)w[i]/h[i];
		cout<<"r:"<<r<<endl;
		if(r>=1.6 && r<=1.7)
		{
			c+=1;
		}
		cout<<"c:"<<c<<endl;
	}
	cout<<c<<endl;

	return 0;
}