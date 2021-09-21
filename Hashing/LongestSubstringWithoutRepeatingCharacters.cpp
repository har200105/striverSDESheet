class Solution {
public:
int lengthOfLongestSubstring(string s) {

    int iLength = s.length();
    if(iLength == 0 || iLength == 1)
        return iLength;
    
    unordered_map<int, int> valueIndexHash;
    int iMax = 0, iStartIndexPos = 0;
    for(int iCurIndexPos = 0; iCurIndexPos < iLength; iCurIndexPos++)
    {
        if(valueIndexHash.find(s[iCurIndexPos]) != valueIndexHash.end())
        {
            int iIndex = valueIndexHash[s[iCurIndexPos]];
            iStartIndexPos = max(iStartIndexPos, iIndex + 1);
        }
        
        valueIndexHash[s[iCurIndexPos]] = iCurIndexPos;            
        iMax = max(iMax, iCurIndexPos - iStartIndexPos + 1);
    }
    
    return iMax;
}
};