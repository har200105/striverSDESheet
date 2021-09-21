int maxProfit(vector<int> &nums){
	int maxPro=0;
	int minPrice=INT_MAX;
	for(int i=0;i<nums.size();i++){
		minPrice =  min(minPrice,prices[i]);
		maxPro = max(maxPro,prices[i]-minPrice);
	}
	return maxPro;
}