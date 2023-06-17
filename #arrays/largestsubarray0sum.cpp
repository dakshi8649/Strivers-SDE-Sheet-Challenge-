/*Problem Link
https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
*/
class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        // Your code here
        int pre[n];pre[0]=a[0];
        map<int,set<int>> m;
        m[pre[0]].insert(0);
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+a[i];
            m[pre[i]].insert(i);
        }
        int ans=0;
        for(auto it:m){
            if(it.second.size()>1 && it.first!=0){
                int len = *(--it.second.end())-*it.second.begin();
                ans=max(ans,len);
            }
            if(it.first==0){
                int len = *(--it.second.end())+1;
                ans=max(ans,len);
            }
        }
        return ans;
    }
};
