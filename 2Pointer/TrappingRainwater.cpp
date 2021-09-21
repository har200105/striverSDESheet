#include<bits/stdc++.h>
using namespace std;

int main(){

	int water(vector<int> &height){
		int left=0;
		int right=n-1;
		int res=0;
		int maxLeft=0;
		int maxRight=0;


		while(left<=right){
			if(height[left]<=height[right]){
				if(height[left]<=maxLeft){
					maxLeft=height[left];
				}else{
					res+=maxLeft-height[left];
				}
				left++;
			}else{
				if(height[right]>=maxRight){
					maxRight=height[right];
				}else{
					res+=maxRight-height[right];
				}
				right--;
			}
		}

		return res;
	}

	return 0;
}