#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int current_sum=arr[0],max_sum=arr[0];
        for(int i=1;i<n;i++){
           current_sum=max(current_sum+arr[i],arr[i]);
           max_sum=max(current_sum,max_sum);
        }
        return max_sum;
    }
};
int main()
{
    int t,n;
    cin>>t; //input testcases
    while(t--) //while testcases exist
    { 
        cin>>n; //input size of array
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        Solution ob;
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}