class Solution {
public:
    
    
    
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        
        unordered_map<double,double> umap;
        
        for(int i =0; i<rectangles.size(); i++){
            double width = rectangles[i][0];
            double height = rectangles[i][1];
            double ratio = width/height;
            //cout<<width<<height<<ratio;
            umap[ratio]++;
        }
        
        long long result =0;
        
        for(auto it: umap){
            long long count = it.second;
                cout<< count;
                //cout<< result;
                result = result + (count * (count-1)/2);
                cout<< result;
        }
        
        return result;
        
        
        
        
    }
};