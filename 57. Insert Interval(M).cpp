/*
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

    vector<vector<int>> result;

    for (int i=0; i<intervals.size(); i++){
        //1. less than
        if (newInterval[1] < intervals[i][0]) {
            result.push_back(newInterval);
            newInterval = intervals[i];
        }
        // 2. bigger than
        else if (newInterval[0] > intervals[i][1]){
            result.push_back(intervals[i]);
        }
        //3. overlap
        else{
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
        }
    }
    result.push_back(newInterval);
    return result;
}