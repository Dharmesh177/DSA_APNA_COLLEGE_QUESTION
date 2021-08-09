#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<stack>
#include<vector>
using namespace std;
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
         vector<pair<int,int>> v;
         vector<int> vis(n);
         
         for(int i=0; i<v.size(); i++){
             if(arr[i]-k>=0){
                 v.push_back({arr[i]-k,i});
             }
             v.push_back({arr[i]+k,i});
         }
         
         sort(v.begin(),v.end());  
         int ele=0;
         int l=0;
         int r=0;
         while(ele<n && r<v.size()){
             if(vis[v[r].second]==0){
                 ele++;
             }
             vis[v[r].second]++;
             r++;
         }
         
         int ans=v[r-1].first - v[l].first;
         while(r<v.size()){
             if(vis[v[l].second]==1){
                 ele--;
             }
             vis[v[l].second]--;
             l++;
             
             while(ele<n && r<v.size()){
             if(vis[v[r].second]==0){
                 ele++;
             }
             vis[v[r].second]++;
             r++;
             
             }
             
             if(ele==n){
                 ans = min(ans,v[r-1].first - v[l].first);
             }else{
                 break;
                 
             }
         }
         return ans;
            
         
    }
};

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    Solution s;
    auto ans = s.getMinDiff(a,n,k);
    cout << ans << endl;

}