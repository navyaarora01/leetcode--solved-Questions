// ques - https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
#include<bits/stdc++.h>
int majorityElement(int a[], int size)
{ 
    // step 1
   int count = 1 ,res = 0;
   for(int i=1;i<size;i++){
       if(a[res] == a[i]){
           count++;
       }
       else{
           count--;
       }
       if(count == 0){
           count = 1;
           res = i;
       }
   }
//   step 2
    count = 0;
    for(int i=0;i<size;i++){
        if(a[res]==a[i]){
            count ++;
        }
    }
    if(count<=size/2){
        return -1;
    }
    else{
        return a[res];
    }
}