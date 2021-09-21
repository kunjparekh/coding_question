/*
Given an integer array nums, find the contiguous subarray(containing atleast one number ) which has the largest 
sum and returns its nums

Ex. 
Inp: [-2,1,-3,4,-1,2,1,-5,4]
Op : 6
Explanation: [4,-1,2,1]
--> This problem approach using Kadane's algorithm.
*/ 

#include<bits/stdc++.h>
using namespace  std;
int max_sum(int* v,int n)
{
    int s = 0;
    int maxi = v[0];
    for(int i=0;i<n;i++)
    {
        s += v[i];
        if(s<0) s=0;
        if(s>maxi) maxi = s;
    }
    return maxi;
}

int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int r = max_sum(v,n);
    cout<<r<<endl;
    return 0;
}
