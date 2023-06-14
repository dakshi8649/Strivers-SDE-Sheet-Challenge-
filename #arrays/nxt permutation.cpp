/*Problem Link
https://leetcode.com/problems/next-permutation/description/'
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int sz=nums.size();
        if(sz==1) return;
        multiset<int> s;
        s.insert(nums[sz-1]);
        int j;bool flag=false;
        for(j=sz-2;j>=0;j--){
            if(s.upper_bound(nums[j])!=s.end()){
                int x = nums[j];
                s.insert(x);
                auto it=s.upper_bound(nums[j]);nums[j]=*it;
                s.erase(s.upper_bound(x));
                flag=true;
                break;
            }
            else {
                s.insert(nums[j]);
            }
        }
        j++;
        while(!s.empty()){
            nums[j++]=*s.begin();
            s.erase(s.begin());
        }
        
    }
};