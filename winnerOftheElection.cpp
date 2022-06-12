// ques https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1
// class Solution{
//   public:
  
//     //Function to return the name of candidate that received maximum votes.
//     vector<string> winner(string arr[],int n)
//     {
//         unordered_map <string ,int> umap;
//         for(int i=0;i<n;i++){
//             umap[arr[i]]++;
//         }
//         string name = "";
//         int maxno = 0;
//         for(auto it = umap.begin() ; it!=umap.end() ; it++){
//             string key = it->first;
//             int value = it->second;
//             if(value>maxno){
//                 maxno = value;
//                 name = key;
//             }
//             else if(value == maxno){
//                 if(key<name){
//                     name = key;
//                 }
//             }
//         }
//         vector<string> ans;
//         ans.push_back(name);
//         string temp = to_string(maxno);
//         ans.push_back(temp);
//         return ans;
        
//     }
// };