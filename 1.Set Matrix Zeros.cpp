#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n=matrix.size();
	int m=matrix[0].size();

	int make_1st_row_zero=false;

	for(int col=0;col<m;col++){
	    if(matrix[0][col]==0)make_1st_row_zero=true;
		for(int row=1;row<n;row++){
			if(matrix[row][col]==0){
				matrix[row][0]=0;
				matrix[0][col]=0;
			}
		}
	}
    for(int col=m-1;col>=0;col--){
		for(int row=n-1;row>=1;row--){
			if(matrix[0][col]==0 || matrix[row][0]==0)matrix[row][col]=0;
		}
		if(make_1st_row_zero==true)matrix[0][col]=0;
	}
}
