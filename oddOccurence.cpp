// ques - https://leetcode.com/problems/unique-number-of-occurrences/
// #include <bits/stdc++.h>
// #include <vector>
//  bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int,int>mp;
//         for(auto it:arr){
//             mp[it]++;
//         }
//         set<int>st;
//         for(auto it:mp){
//             st.insert(it.second);
//         }
//         return mp.size()==st.size();
//     }