
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s[] = {"i", "like", "this", "program", "very", "much"};
										
	string ans = "";
	for (int i = 5; i >= 0; i--)
	{
		ans += s[i] + " ";
	}
	cout << ("Reversed String:") << endl;
	cout << (ans.substr(0, ans.length() - 1)) << endl;

	return 0;
}
