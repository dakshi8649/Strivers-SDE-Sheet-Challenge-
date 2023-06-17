/*Problem link
https://leetcode.com/problems/longest-substring-without-repeating-characters/
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int j=0;
        int ans=0,len=0;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end()){
                m[s[i]]=i;
                len = m.size();
                ans=max(ans,len);
            }
            else{
                int pos = m[s[i]];
                while(j<=pos){
                    m.erase(m.find(s[j]));
                    len--;
                    j++;
                }
                m[s[i]]=i;
                len=m.size();
                ans=max(len,ans);
            }
        }
        ans=max(len,ans);
        return ans;
    }
};