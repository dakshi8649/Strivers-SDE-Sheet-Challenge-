/*Problem Link
https://leetcode.com/problems/longest-consecutive-sequence/description/
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int curr=0;
        int ans=1;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        if(nums[1]!=(nums[0]+1)){
            curr=0;
        }
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==(nums[i-1]+1)){
                if(curr==0) curr=1;
                curr++;
                cout<<nums[i]<<" ";
                ans=max(ans,curr);
            }
            else{
                curr=0;
            }
            ans=max(ans,curr);
        }
        ans=max(ans,curr);
        return ans;
    }
};