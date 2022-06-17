#include <bits/stdc++.h>
using namespace std;
class Solution{
   public:
   int doUnion(int a[], int n, int b[], int m)  {
       //code here
      map<int,int> m1;
      for(int i=0;i<n;i++){
          m1[a[i]]=1;
      }
      for(int i=0;i<m;i++){
          m1[b[i]]=1;
      }
      int ans=0;
      for(auto it:m1){
          if(it.second==1)
            ans++;
      }
      return ans;
   }
};