// ques - https://leetcode.com/problems/find-the-town-judge/

/*
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> degree(n+1 , 0);
        for(auto x : trust){
            degree[x[0]]--;
            degree[x[1]]++;
        }
        for(int i=1;i<=n;i++){
            int x = degree[i];
            if(x == n-1){
                return i;
            }
        }
        return -1;
    }
};
*/