// Problem is too easy but it's O(n)/ O(1) sol.
/* question:
You're given strings jewels representing the types of stones that are jewels, and stones 
representing the stones you have. Each character in stones is a type of stone you have. 
You want to know how many of the stones you have are also jewels.
Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>set;
        for(auto i:jewels)
            set.insert(i);
        int count=0;
        for(auto i:stones)
            if(set.find(i)!=set.end())
                count++;
            return count;
    }
};