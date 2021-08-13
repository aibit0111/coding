class Solution {
public:
    
    static bool cmp(vector<int> temp1, vector<int> temp2){
        if(temp1[1] > temp2[1]) return true;
        return false;
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        int result = 0;
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        for(int i =0; i<boxTypes.size(); i++){
            int boxno = boxTypes[i][0];
            while(truckSize && boxno){
                result = result + boxTypes[i][1];
                truckSize--;
                boxno--;
            }
            if(truckSize == 0) break;
        }
        return result;
    }
};