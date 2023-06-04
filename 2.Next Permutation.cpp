#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
   int i;
   for(i=n-1;i>=0;i--){
       if(i==0){
           reverse(permutation.begin(),permutation.end());
           return permutation;
       }
       if(permutation[i]>permutation[i-1]){
           break;
       }
   }
   int tmp=permutation[i-1];
   int x;
   for(x=n-1;x>i;x--){
       if(permutation[x]>tmp)break;
   }
   swap(permutation[x],permutation[i-1]);
   reverse(permutation.begin()+i,permutation.end());
   return permutation;
}
