#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minJumps(int arr[], int n){
        if(n<=1)
            return 0;
        else if(arr[0]==0){
            return -1;
        }else{
            int jump=1,max_reach=arr[0],step=arr[0];
            for(int i=1;i<n;i++){
                if(i==n-1)
                return jump;
                max_reach=max(arr[i]+i,max_reach);
                step--;
                if(step==0){
                    jump++;
                    if(i>=max_reach){
                        return -1;
                    }
                    step=max_reach-i;
                }
            }
            return jump;
        }
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}