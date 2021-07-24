class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0;
        int j = height.size()-1;
        int maxarea = INT_MIN;
        int smaller,currarea;
        
        while(i<j){
           
            smaller = min(height[i],height[j]);
            currarea = (j-i) * smaller;
            maxarea = max(maxarea,currarea);
             if(height[i] > height[j]){
               j--;
            }
            else {
                i++;
            }
          
        }
        
        return maxarea;
        
    }
};