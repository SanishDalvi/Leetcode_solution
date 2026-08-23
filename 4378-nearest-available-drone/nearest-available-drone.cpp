class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        pair<int,int> ans(-1,INT_MAX);
        for(int i=0;i<drones.size();i++){
            int dist=abs(target[0]-drones[i][0])+abs(target[1]-drones[i][1]);
            if(dist<=drones[i][2] && ans.second>dist){
                ans={i,dist};
            }
        }
        return ans.first;
    }
};