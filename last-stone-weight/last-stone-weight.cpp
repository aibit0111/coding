class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> maxh;
        
        for(int i =0; i<stones.size(); i++){
            maxh.push(stones[i]);
        }
        int stone1, stone2;
        while(maxh.size()>1){
            stone1 = maxh.top();
            maxh.pop();
            stone2 = maxh.top();
            maxh.pop();
            if(stone1 > stone2){
                maxh.push(stone1-stone2);
            }
            else if(stone1 < stone2){
                maxh.push(stone2-stone1);
            }
        }
        if(maxh.size()==0) return 0;
        return maxh.top();
        
    }
};