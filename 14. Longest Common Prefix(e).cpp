#include <iostream>
#include <vector>
#include <string>
using namespace std;

/* My ans
 * Time: O(MN)
 * space: O(1)
 */
//string longestCommonPrefix(vector<string>& strs) {
//    char pre;
//    string ans="";
//    int min_size=INT_MAX;
//
//    for(auto ele: strs){
//        if (ele.size() < min_size)
//            min_size = ele.size();
//    }
//
//    for(int i=0; i<strs.size(); i++) {
//        pre = strs[0][i];
//        for (auto ele: strs) {
//            if (ele[i]!=pre){
//                return ans;
//            }
//        }
//        ans = ans+pre;
//    }
//    return ans;
//}

/* Optimize
 * Time: O(nlogn + M)
 */
string longestCommonPrefix(vector<string>& v) {
    string ans="";
    sort(v.begin(),v.end());
    int n=v.size();
    string first=v[0],last=v[n-1];
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]!=last[i]){
            return ans;
        }
        ans+=first[i];
    }
    return ans;
}