#include<bits/stdc++.h>
using namespace std;


int longestConsSum(vector<int>& nums){
	set<int>hashset;
	for(int num:nums){
		hashset.insert(num);
	}

	int longestStreak=0;
	for(int num:nums){
		if(!hashset.count(num-1)){
			int currentnum=num;
			int currentStreak=1;
			while(hashset.count(currentnum+1)){
				currentnum+=1;
				currentStreak+=1;
			}

			longestStreak=max(longestStreak,currentStreak);
		}
	}

	return longestStreak;
}

int main(){



	return 0;
}