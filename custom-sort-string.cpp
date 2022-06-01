// question - https://leetcode.com/problems/custom-sort-string/
// #include <bits/stdc++.h> 
// class Solution {
// public:
//     string customSortString(string order, string s) {
//         unordered_map<char,int> mp;
//         string ans;
//         for(int i=0;i<s.size();i++){
//             mp[s[i]]++;
//         }
//         for(int i=0;i<order.size();i++){
//             if(mp.find(order[i])!=mp.end()){
//                 for(int j=0;j<mp[order[i]];j++){
//                     ans = ans+order[i];
//                 }
                
//             }
//             mp.erase(order[i]);
//         }
//         for(auto x : mp){
//             for(int i=0;i<x.second;i++){
//                 ans = ans+ x.first;
//             }
//         }
//         return ans;
//     }
// };
