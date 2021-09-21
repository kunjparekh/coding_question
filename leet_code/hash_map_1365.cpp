// O(n) solution: 
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> freq(101,-1);
        int s = nums.size();
        for(int i=0;i<s;i++)
        {
            freq[nums[i]]++;
        }
        vector<int> t;
        for(int i=1;i<101;i++)
        {
            t[i]=t[i-1]+freq[i-1];
        }
        vector<int> result;
        for(int i=0;i<s;i++)
        {
           result.push_back(t[nums[i]]);
        }
        return result;
    }
};