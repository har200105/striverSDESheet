#include <bits/stdc++.h>

using namespace std;

unordered_set<string> dict;

void printResult(vector<string> A)
{
	for (int i = 0; i < A.size(); i++)
		cout << A[i] << '\n';
}


vector<string> combine(vector<string> prev, string word){
	
	// Loop to find the append string
	// which can be broken into
	for (int i = 0; i < prev.size(); i++) {
		prev[i] += " " + word;
	}
	return prev;
}

// Utility function for word Break
vector<string> wordBreakUtil(string s)
{
	// Condition to check if the
	// subproblem is already computed
	if (mp.find(s) != mp.end())
		return mp[s];
	vector<string> res;
	

	if (dict.find(s) != dict.end())
		res.push_back(s);
	
	// Loop to iterate over the substring
	for (int i = 1; i < s.length(); i++) {
		string word = s.substr(i);
		if (dict.find(word) != dict.end()) {
			string rem = s.substr(0, i);
			vector<string> prev =
			combine(wordBreakUtil(rem), word);
			res.insert(res.end(),
				prev.begin(), prev.end());
		}
	}

	mp[s] = res;
	return res;
}


vector<string> wordBreak(string s,vector<string>& wordDict)
{
	// Clear the previous stored data
	mp.clear();
	dict.clear();
	dict.insert(wordDict.begin(), wordDict.end());
	return wordBreakUtil(s);
}

int main()
{
	vector<string> wordDict1 = {
		"cat", "cats", "and", "sand", "dog" };
	printResult(wordBreak("catsanddog", wordDict1));
	return 0;
}
