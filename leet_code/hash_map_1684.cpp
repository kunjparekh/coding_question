/*
You are given a string allowed consisting of distinct characters and an array of strings words.
 A string is consistent if all characters in the string appear in the string allowed.
Return the number of consistent strings in the array words.
Example 1:
Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2
Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.
*/
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        //Making a map to keep the allowed character as keys 
        unordered_map<char, bool> mp;
        for(auto x: allowed){
            if(!mp[x]) mp[x] = 1;
        }
        
        // Output count initialized with zero
        int count = 0;
        
        //Traversing through each character in words
        for(auto x: words){
            bool flag = 1;
            for(auto y: x){
                if(mp.find(y) == mp.end()) { // Checking if the character isn't present as key in the map
                    flag=0;
                    break;
                }
            }
            if(flag == 1) count++; // If the flag remained 1 through whole char traversal, count it!
        }
        
        return count;
    }
};



