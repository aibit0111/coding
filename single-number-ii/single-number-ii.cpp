class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int result = 0;
        int bits[32] = {0};
        int temp;
        
        for(int i =0; i<32; i++){
            
            for(int j =0; j<nums.size(); j++){
                
                //bits[i] = bits[i] + ((nums[j] >> i) & 1);
                //bits[i] = bits[i] % 3;
                
                temp = nums[j] >> i;
                bits[i] = bits[i] + (temp & 1);
                bits[i] = bits[i] % 3;
            }
            
        }
        
        for(int i =0; i<32; i++) cout<<bits[i];
        //cout<<"hell";
        
        for(int i =0; i<32; i++){
            //cout<<(bits[i] *  pow (2,i+1));
            result = result | (bits[i]<<i); 
            //cout<< result;
        }
        
        return result;
        
        
        
    }
};