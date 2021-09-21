class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          vector<vector<int>> v;
          sort(nums.begin(), nums.end());

          for(int i = 0; i < nums.size(); i++){
            if(i != 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < nums.size(); j++){
              if(j != i + 1 && nums[j] == nums[j - 1]) continue;

              int k = j + 1;
              int l = nums.size() - 1;

              while(k < l){
                long long sum = nums[i] + nums[j];
                sum += nums[k] + nums[l];
                if(target == sum ){
                  v.push_back({nums[i], nums[j], nums[k], nums[l]});
                  k++;
                  while(k < l && nums[k] == nums[k - 1]) k++;
                }
                else if( sum < target) k++;
                else l--;
              }

            }
          }

          return v;
    }
};