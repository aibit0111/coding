class Solution {
public:
    
    bool dfs(int s, vector<vector<int>> &adj, vector<int> &visited ){
        cout<<"h";
        
        if(visited[s] == 1) return false;
        if(visited[s] == 2) return true;
        
        visited[s] = 1;
        
        for(int i : adj[s]){
            cout<<"k";
            if(!dfs(i,adj,visited)){
                return false;
            }
        }
        visited[s] = 2;
        return true;
    }
    
    
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> adj(numCourses);
        vector<int> visited(numCourses , 0);
        /*for(int i =0; i<prerequisites.size(); i++){
            adj[i].push_back(prerequisites[i][1]);
        }*/
       
        
         for(vector<int> &pre: prerequisites){
            adj[pre[0]].push_back(pre[1]);
        }
         //cout<<adj[1][0];
        
        
        
        for(int i = 0; i<numCourses; i++){
            if(visited[i] == 0){
                cout<<i;
                if(dfs(i, adj, visited) == false) return false;
            }
        }
        return true;
        
    }
};