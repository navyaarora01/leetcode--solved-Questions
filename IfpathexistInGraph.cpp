//ques - https://leetcode.com/problems/find-if-path-exists-in-graph/
/*
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        unordered_map<int,vector<int>> umap;
        for(auto x:edges){
            vector<int> temp = x;
            int u = temp[0];
            int v = temp[1];
            umap[u].push_back(v);
            umap[v].push_back(u);
        }
        vector<bool> visited(n+1 , false);
        queue<int> q;
        q.push(start);
        visited[start] = true;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            // if(curr == end){
            //     return true;
            // }
            vector<int> temp = umap[curr];
                for(int j=0;j<temp.size();j++){
                    int vertex = temp[j];
                    if(visited[vertex] == 0){
                        visited[vertex] =1;
                        q.push(vertex);
                    }
                }
        }
        return visited[end];
    }
}; */