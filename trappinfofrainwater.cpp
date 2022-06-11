// // ques -- https://leetcode.com/problems/trapping-rain-water/
// #include <vector>
// #include <bits/stdc++.h>
// class Solution {
// public:
//     int trap(vector<int>& height) {
//        int n =  height.size();
//         vector<int> lmax;
//         lmax[0] = height[0];
//         for(int i=1;i<n;i++){
//             int temp = max(height[i], lmax[i-1]);
//             lmax[i] = temp;
//         }
//         vector<int> rmax;
//         rmax[n-1] = height[n-1];
//         for(int i=n-2;i>=0;i++){
//             int temp = max(height[i], rmax[i+1]);
//             rmax[i] = temp;
//         }
//         int water = 0;
//         for(int i=0;i<n;i++){
//             water+= min(lmax , rmax)- height[i];
//         }
//         return water;
//     }
// }; 
