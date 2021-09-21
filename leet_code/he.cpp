#include <bits/stdc++.h>
using namespace std;
// bool comp(int a,int b)
// {
// 	return a<b;
// }
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int n,a,b;
	cin>>n>>a>>b;
	vector<int> v;
	for(int i=0;i<=n;i++)
	{
		int e = (i*i*a) +((n-i)*(n-i)*b);
        cout<<"e: "<<e<<endl;
		v.push_back(e);
	}
	//int *m  = std::min_element(v.begin(),v.end(),comp);
	cout<< *min_element(v.begin(), v.end())<<endl;
	}
	return 0;
}