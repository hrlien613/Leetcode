#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n=nums.size();

    //sort nums
    sort(nums.begin(),nums.end());

    for(int i=0; i<n-2; i++){

        if (i>0 && (nums[i]==nums[i-1]))
            continue;

        int left = i+1;
        int right = n-1;

        while(left<right){
            int sum = nums[i] + nums[left] + nums[right];
            if (sum<0) {
                left++;
            }
            else if(sum>0) {
                right++;
            }
            else{
                ans.push_back({nums[i],nums[left],nums[right]});
                //only shift 1 pointer, other condition wil check other pointer
                //because one value only get 1 solution for the sum
                left++;
                //avoid duplicate
                while(left<right&& (nums[left]==nums[left-1])) left++;
            }
        }
    }
    return ans;
}