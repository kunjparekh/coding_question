// This is improved time complexity solution , I mean the solution which is taking less time just class implementation
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<int,int>m;
        int len=0;
        for(int i=0;i<chars.length();i++)
            m[chars[i]]++;
        for(int i=0;i<words.size();i++)
        {
            int flag=1;
            for(int j=0;j<words[i].length();j++)
            {
                int countChar=std::count(words[i].begin(),words[i].end(),words[i][j]);
                if(m.find(words[i][j])==m.end() || countChar > m[words[i][j]])
                {
                    flag=0;
                    break; 
                }                   
            }
            if(flag==1)
                len+=words[i].length();
        }
        return len;
    }
};