/* implementation of code with the concept of boyer mooore algorithm*/
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int count1 = 0,element1 = 0,count2 = 0,element2 = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(count1==0)
            {
                element1 = nums[i];
                count1++;
            }
            else if(element1 == nums[i])
                count1++;
            else if(count2 == 0)
            {
                element2 = nums[i];
                count2++;
            }
            else if(element2 == nums[i])
                count2++;
            else 
            {
                count2--;
                count1--;
            }
        }
        count1 = 0;count2 = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(element1 == nums[i])
                count1++;
            else if(element2 == nums[i])
                count2++;
        }
      return (count1==(nums.size()/2))?element1:element2;   
    }
};