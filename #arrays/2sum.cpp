/*Problem Link
https://leetcode.com/problems/two-sum/
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int i=0,j=nums.size()-1;
        int sum;
        while(i<j){
            sum=v[i].first+v[j].first;
            if(sum==target){
                return {v[i].second,v[j].second};
            }
            else if(sum>target){
                j--;
            }
            else{i++;}
        }
        return {};
    }
};