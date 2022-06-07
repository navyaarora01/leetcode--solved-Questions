ques - https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
#include <bits/stdc++.h>
bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set <int> uset;
        int pre_sum = 0;
        for(int i=0;i<n;i++){
            pre_sum += arr[i];
            if(pre_sum == 0){
                return true;
            }
            if(uset.find(pre_sum)!=uset.end()){
                return true;
            }
            uset.insert(pre_sum);
            
        }
        return false;
    }