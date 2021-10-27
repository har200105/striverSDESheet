 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        if(intervals.size() == 0) {
            return mergedIntervals; 
        }
        sort(intervals.begin(), intervals.end());
        vector<int> tempInterval = intervals[0]; 
     
        for(auto it : intervals) {

            //consider the case  
            // tempInterval->[1,8],
            // it-> [6,7]
            //here it[0]<tempInterval[1]
            // so we make tempInterval[1] equal to it[1]
            if(it[0] <= tempInterval[1]) {
                tempInterval[1] = max(it[1], tempInterval[1]); 
            }
            // else we push the tempInterval in this case
            // tempInterval->[1,6],
            // it-> [7, 9]

             else {
                mergedIntervals.push_back(tempInterval); 
                tempInterval = it; 
            }
        }
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals; 
    }