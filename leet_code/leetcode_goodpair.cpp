#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int a=0;//
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j] && i<j)
                a++;
            }
        }
        return a;
    }
};
int main()
{
    Solution S;
    int s,i=0;
    //cin>>s;
    vector<int> nums;
        nums.push_back(1);
        nums.push_back(1);
        nums.push_back(3);
        nums.push_back(1);
        nums.push_back(2);
        nums.push_back(3);
    int r = S.numIdenticalPairs(nums);
    cout<<r<<endl;
    return 0;
}