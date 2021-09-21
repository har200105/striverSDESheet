#include<bits/stdc++.h>
using namespace std;



int knapsack(int ind , int W , int val[] , int wt[]  , int n, vector<vector<int>> &dp){
	if(ind>=n){
		return 0;
	}

	if(W==0){
		return 0;
	}

	if(wt[ind]<=W){
		int left=val[ind]+knapsack(ind+1,W-wt[ind],val,wt,n,dp);
		int right = knapsack(ind+1,W,val,wt,n,dp);

		return dp[ind][W]=max(left,right);
	}

	else{
		return dp[ind][W] = knapsack(ind+1,W,val,wt,n,dp);
	}
}


int main(){

	int wt[]={25,25,30};
	int val[]={100,100,180};
	int n=3;
	int weight=50;


	vector<vector<int>>dp(n,vector<int>(weight+1,-1));

	cout<<knapsack(0,weight,val,wt,n,dp)<<endl;



	return 0;
}