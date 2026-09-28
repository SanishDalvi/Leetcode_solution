class Solution {
    public int maxDepth(String s) {
        int curr=0,res=Integer.MIN_VALUE;
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(ch=='('){
                curr++;
                res=Math.max(curr,res);
            }
            if(ch==')'){
                curr--;
            }
        }
        res=Math.max(curr,res);
        return res;
    }
}