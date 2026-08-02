class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a,b,asum=0;
        unordered_set<int> set;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                asum+=grid[i][j];
                if(set.find(grid[i][j])!=set.end()){
                    a=grid[i][j];
                }
                set.insert(grid[i][j]);
            }
        }
        n*=n;
        int sum=n*(n+1)/2;
        b=sum -(asum-a);
        return {a,b} ;
    }
};