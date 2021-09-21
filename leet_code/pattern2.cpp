#include <iostream>

using namespace std;

int main() {
	int r,c,ci,cj,i,j;
	cin>>r>>c>>ci>>cj;
	int x,y;
	x = ci;
	y = cj;
	if(r%2!=0)
	{
	for(i=0;i<r;i++)
	{
		int k=0;
		if(i<=r/2)
		{
			//k=0;
		for(j=0;j<i;j++)
		{
			cout<<x-j<<" ";
		}
		for(j=i;j<r-i;j++)
		{
			cout<<y<<" ";
		}
		for(j=r-i;j<c;j++)
		{
			cout<<y+1+k<<" ";
			k++;
		}
		y--;
		if(y==-1)
		y=1;
		}
		else
		{
		//k=ci;
		for(j=0;j<r-i;j++)
		{
			cout<<x-j<<" ";
		}
		for(j=r-i;j<i;j++)
		{
			cout<<y<<" ";
		}
		for(j=i;j<c;j++)
		{
			cout<<y+k<<" ";
			k++;
		}
		y++;
		}
		cout<<endl;
	}
	}
	else
	{
	for(i=0;i<r;i++)
	{
		int k=0;
		if(i<=r/2)
		{
			//k=0;
		for(j=0;j<i;j++)
		{
			cout<<x-j<<" ";
		}
		for(j=i;j<=r-i;j++)
		{
			cout<<y<<" ";
		}
		for(j=r-i+1;j<c;j++)
		{
			cout<<y+k-1<<" ";
			k++;
		}
        cout<<"y: " <<y<<endl;
		y--;
		if(y==-1)
		y=1;
		}
		else
		{
		//k=ci;
		for(j=0;j<r-i;j++)
		{
			cout<<x-j<<" ";
		}
		for(j=r-i;j<i;j++)
		{
			cout<<y<<" ";
		}
		for(j=i;j<c;j++)
		{
			cout<<y+k<<" ";
			k++;
		}
		y++;
		}
		cout<<endl;
	}
	}

	return 0;
}