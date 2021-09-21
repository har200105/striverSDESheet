#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& a)
{
    int N = a.size();
    vector <int> result;
    unordered_map <int , int> frequency;
    for(int &x : a)
        frequency[x]++;
    for(auto &x : frequency)
        if(x.second > N / 3)
            result.emplace_back(x.first);
    return result;
}
int main()
{
    vector <int> a = {1 , 2 , 3 , 3 , 2};
    vector <int> result = majorityElement(a);
    if(result.empty())
        cout << "No majority elements\n";
    else
        for(int &x : result)
            cout << x << " ";
    return 0;
}