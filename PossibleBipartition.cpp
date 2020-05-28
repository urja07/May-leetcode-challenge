class Solution {
    bool bipartite(vector<vector<int>>& adj, int n,int node, vector<int>&color){
        
        queue<int> q;
        q.push(node);
        color[node]=1;
        
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(int i:adj[curr])
            {
                if(color[i]==color[curr])
                    return false;
                if(color[i]==-1){
                    color[i]=1-color[curr];
                    q.push(i);
                }
            }
        }
        return true;
    }
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        int n = dislikes.size();
        vector<vector<int>> adj(N+1);
        for(int i=0;i<n;i++){
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        
        vector<int> color(N+1,-1);
        for(int i=1;i<=N;i++)
        {
            if(color[i]==-1){
                if(!bipartite(adj,N,i,color))
                    return false;
            }
        }
        return true;
    }
};

