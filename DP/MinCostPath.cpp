#include<bits/stdc++.h>
using namespace std;

int main(){

	int arr1[]={2,2,5,4,8};
	int arr2[]={2,2,6,8,8};

	int n=5;

	set<int>ans;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr1[i]==arr2[j]){
				ans.insert(arr1[i]);
			}
		}
	}

	for(auto it=ans.begin();it!=ans.end();it++){
		cout<<*it<<endl;
	}

}