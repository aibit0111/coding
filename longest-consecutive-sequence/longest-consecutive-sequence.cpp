class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;
        
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        
        for(int i =0; i<nums.size(); i++){
            uset.insert(nums[i]);
        }
        
        int maxm = 1;
        
        int element;
        int prev, front;
        for(int i =0; i<nums.size(); i++){
            element = nums[i];
            
            if(uset.find(element) != uset.end()){
                uset.erase(element);
                prev = element-1;
                front = element+1;
                //cout<<prev<<" "<<front<<endl;
                while(uset.find(prev) != uset.end()){
                    //cout<<"hello";
                    uset.erase(prev);
                    prev = prev-1;
                
                }
            
                while(uset.find(front) != uset.end()){
                    uset.erase(front);
                    front = front + 1;
                
                }
                
                maxm = max(front-prev-1 , maxm);
                
            
                }
        }
        return maxm;
        
        
    }
};