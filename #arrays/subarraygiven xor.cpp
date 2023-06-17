/*Problem link
https://www.interviewbit.com/problems/subarray-with-given-xor/
*/
int Solution::solve(vector<int> &A, int k) {
    int n=A.size();
    map<int,int> m;
    int cnt=0,xr=0;
    m[0]=1;
 for(int i=0;i<n;i++){
     xr^=A[i];
     cnt+=m[xr^k];
     m[xr]++;
 }   
 return cnt;
}
