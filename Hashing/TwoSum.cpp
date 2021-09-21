
	vector<int>twoSums(vector<int>&nums,int target){
		vector<int>ans;
		unordered_map<int,int>m;
		for(int i=0;i<nums.size();i++){
			if(m.find(target-nums[i])!=m.end()){
				ans.push_back(m[target-nums[i]]);
				ans.push_back(i);
				return ans;
			}
		}

		m[nums[i]]=i;

		return ans;
	}

