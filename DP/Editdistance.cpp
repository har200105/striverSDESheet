#include<bits/stdc++.h>
using namespace std;


int editDist(int i , int j ,string s1 , string s2){
	if(i==s1.size()){
		return  s2.size()-j; 
	}

	if(j==s2.size()){
		return s1.size()-i;
	}

	if(s1[i]==s2[j]){
		return dp[i][j]=editDist(i+1,j+1,s1,s2);
	}

	else{
		int left=1+editDist(i,j+1,s1,s2);
		int mid=1+editDist(i+1,j,s1,s2);
		int right=1+editDist(i+1,j+1,s1,s2);

		return min({left,mid,right});
	}
}



int main(){

	string s1,s2;
	cin>>s1>>s2;
	int n=s1.size();
	int m=s2.size();

	cout<<editDist(0,0,s1,s2)<<endl;

	return 0;
}