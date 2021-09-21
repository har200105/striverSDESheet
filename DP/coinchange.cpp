#include<bits/stdc++.h>
using namespace std;


int count(int ind , int sum , int s[], int n , vector<vector<int>>&dp){
	if(sum==0){
		return 1;
	}

	if(ind>=n || sum < 0){
		return 0;
	}

	if(dp[ind][sum]!=-1){
		return dp[ind][sum];
	}

	int left = count(ind,sum-s[ind],s,n);
	int right = count(ind+1,sum,s,n);


	return dp[ind][sum]=left+right;
}


int main(){

	int s[]={1,2};
	int sum=4;
	int n=2;
	vector<vector<int>>dp(n,vector<int>(sum+1,-1));

	cout<<count(0,sum,s,n,dp)<<endl;


	return 0;
}