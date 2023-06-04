#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>ans(n);
  for(int i=1;i<=n;i++){
    ans[i-1].resize(i);
    ans[i-1][0]=1;
    ans[i-1][i-1]=1;
    for(int j=1;j<i-1;j++){
      ans[i-1][j]=ans[i-2][j-1]+ans[i-2][j];
    }
  }
  return ans;
}
