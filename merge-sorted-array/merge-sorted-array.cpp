class Solution {
public:
    
    void changeposition(vector<int> &nums){
        //cout<<"hello";
        if(nums.size() ==1) return;
        if(nums[0] <= nums[1]) return;

        for(int i = 0 ;i<nums.size()-1; i++){
            if(nums[i]>=nums[i+1]){
                swap(nums[i], nums[i+1]);
            }
        }
        
       
        
    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(m==0){
            nums1 = nums2;
            return;
        }
        
        if(n==0) return;
        
        int i = 0;
        int j = 0;
        
        while(i<m){
            
            if(nums1[i] > nums2[j]){
                swap(nums1[i], nums2[j]);
              
                changeposition(nums2);
                  cout<<"h";
                i++;
            }
            else{
                i++;
            }
        }
        
        
        //cout<<i;
        //cout<<nums1.size();
        
        for(int k = i; k<nums1.size(); k++){
            nums1[k] = nums2[k-i]; 
        }
       
        
        
    }
};