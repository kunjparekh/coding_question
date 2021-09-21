/*#include<iostream>

using namespace std;

int main()
{
    int num ,total ,start ,end ,count;
    cin >> num;
    total = 2 * num + 1;
    end   = num + 1;
    start = num;
    
    for(int i = 0 ; i < total ; i++)
    {
            count = 0;
            for(int j = 0 ; j < end ; j++)
            {
                    if(j >= start) 
                    {
                         if(j != start)cout << " "; // print blank
                         
                         cout << count; 
                         count = j < num ? count+1 : count-1;
                    }
                    else
                    {
                        cout << "  ";             
                    }
            }
            cout << endl; 
            if(i < num)
            {
                 start--;
                 end++;
            }
            else
            {
                start++;
                end--;
            }
    }
    cout << endl;
    
    //system("pause");
    return 0;
}
*/
#include<bits/stdc++.h>

#include <math.h>

using namespace std;


 

int main()
{
int n;

cin>>n;

int a[n];

for(int i=0;i<n;i++)

cin>>a[i];

int m;

cin>>m;

int c[m];

for(int i=0;i<m;i++)

cin>>c[i];

int b[101]={0};

    for(int i=0;i<n;i++)

    {

        for(int j=0;j<m;j++)

        {

            if(c[j]-a[i]>0)

            {   

                b[c[j]-a[i]]++;

            }   

        }

    }
    for(int i=1;i<=100;i++)
    {
        if(b[i]==n)
        {
            cout<<i<<" ";
        }
    }
}

