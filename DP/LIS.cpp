#include<bits/stdc++.h>
using namespace std;

int lis(int arr[],int n){
	vector<int>seq;
	seq.push_back(arr[0]);
	for(int i=1;i<n;i++){
		if(seq.back()<arr[i]){
			seq.push_back(arr[i]);
		}
		else{
			int ind = lower_bound(seq.begin(),seq.end(),arr[i])-seq.begin();
			seq[ind]=arr[i];
		}
	}

	return seq.size();
}


int main(){

	int arr[]={1,32,5,3,7,6,8};
	int n=7;
	cout<<lis(arr,n)<<endl;



	return 0;
}