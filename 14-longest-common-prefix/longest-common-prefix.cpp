class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        for(int i=0;i<s[0].length();i++){
            for(int j=0;j<s.size()-1;j++){
                if(s[j][i]!=s[j+1][i])
                  return ans;
            }
                    ans +=s[0][i];
                
            
        }
        return ans;
    }
};