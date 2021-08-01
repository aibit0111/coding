class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long sum = 0;
        long max = 0;
        
        for(int i =0; i<milestones.size(); i++){
            
            if(milestones[i]>max){
                max = milestones[i];
            }
            sum = sum + milestones[i];
        }
        cout<<max<<sum;
        if(max == (sum-max)) return sum;
        
        if((sum-max) > max) {
            return sum;
        }
        
        return (sum-max)*2+1;
        
    }
};