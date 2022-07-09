// ques - https://leetcode.com/problems/is-graph-bipartite/submissions/

/*
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color;
        color.assign(n , 0);
        for(int i=0;i<n;i++){
            if(color[i]==1 || color[i]==-1){
                continue;
            }
            color[i] = 1;
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int front  = q.front();
                for(int it :graph[front]){
                    if(color[it] == 0){
                        color[it] = -color[front];
                        q.push(it);
                    }
                    else if(color[it] == color[front]){
                        return false;
                    }
                }
                q.pop();
            }
        }
        return true;
    }
};

*/