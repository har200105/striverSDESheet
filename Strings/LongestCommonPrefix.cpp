    string longestCommonPrefix(vector& strs) {
        assert(strs.size() > 0);
        
        string result = strs[0];
        
        for (int i = 1; i < strs.size(); i++)
        {
            for (int j = 0; j < result.size(); j++)
            {
                if (result[j] != strs[i][j])
                {
                    result.erase(j, result.size() - j);
                }
            }
        }
        
        return result;
    }
