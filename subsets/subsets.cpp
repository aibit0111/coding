class Solution {
public:
    
     void subseta(vector<vector<int>> &results, vector<int> result, vector<int> input, int i){
        vector<int> op1;
        vector<int> op2;
        //cout<<i;
        if(i == input.size()){
            results.push_back(result);
            //cout<<endl;
            return;
        }
        
        op1 = result;
        op2 = result;
        op1.push_back(input[i]);
        subseta(results, op1, input, i+1);
        subseta(results, op2, input, i+1);
        return;
        
    }

   
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> result;
        vector<vector<int>> results;
        subseta(results, result, nums,0);
        return results;
        
    }
    
     
    
    
};