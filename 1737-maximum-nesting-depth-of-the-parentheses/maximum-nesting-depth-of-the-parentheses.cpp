class Solution {
public:
    int maxDepth(string s) {
        int curr=0,result=INT_MIN;
    for(char ch:s){
        if(ch=='('){
            curr++;
            result=max(result,curr);
        }
        if(ch==')'){
            curr--;
        }
    }
    result=max(result,curr);
    return result;
    }
};