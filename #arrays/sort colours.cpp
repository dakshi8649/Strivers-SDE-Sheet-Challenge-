/*Problem Link
https://leetcode.com/problems/sort-colors/description/
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int H[3]={0};
        
        for(int i=0;i<nums.size();i++){
            H[nums[i]]++;
        }
        int n1 = H[0]+H[1];
        int n2 = H[0]+H[1]+H[2];
        for(int i=0;i<H[0];i++){
            nums[i]=0;
        }
        for(int i=H[0];i<n1;i++){
            nums[i]=1;
        }
        for(int i=n1;i<n2;i++){
            nums[i]=2;
        }
    }
};