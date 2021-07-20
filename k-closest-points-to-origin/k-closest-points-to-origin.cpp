class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<float, int>> maxh;
        
        for(int i = 0; i<points.size(); i++){
            maxh.push({points[i][0] *points[i][0] + points[i][1]*points[i][1] , i});
            if(maxh.size() >k ){
                maxh.pop();
            }
        }
        
        vector<vector<int>> ans;
        
        while(maxh.size()!=0)
        {
            ans.push_back(points[maxh.top().second]);
            maxh.pop();
        }
        
        return ans;
        
        
    }
};