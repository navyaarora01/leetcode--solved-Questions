// question -- https://leetcode.com/problems/relative-sort-array/
#include <bits/stdc++.h>
// #include <vector>
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map <int ,int> mp;
        vector<int> ans;
        for(auto x : arr1){
            mp[x]++;
        }
        for(auto temp : arr2){
            if(mp.find(temp)!=mp.end()){
                // auto x  = mp.find(temp);
                // int value  = x->first;
                // int key = x->second;
                while(mp[temp]>0){
                    ans.push_back(temp);
                    mp[temp]--;
                }
                
            }
        }
        for(auto x :mp){
            int ele = x.first;
            while(mp[ele]>0){
                ans.push_back(ele);
                mp[ele]--;
            }
        }
        return ans;
        
    }
};