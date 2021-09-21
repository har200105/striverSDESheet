int solve(vector<int>&a,int b){
	map<int,int>freq;

	int c=0;
	int xorr=0;

	for(auto it:a){
		xorr=xorr^it;

	if(xorr==b){
		c++;
	}

	if(freq.find(xorr^b)!=freq.end()){
		c+=freq[xorr^b];
	}

	freq[xorr]+=1;
}


return c;
}