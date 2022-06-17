#include<bits/stdc++.h>
using namespace std;
//counting sort
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int maxi=arr[0];
        for(int i=0;i<=r;i++){

            if(maxi<arr[i]){
                maxi=arr[i];
            }
        }
        // return maxi;
        int count_array[maxi];
        for(int i=0;i<=maxi;i++){
            count_array[i]=0;
        }
        for(int i=0;i<=r;i++){
            // cout<<arr[i]<<"\n";
            count_array[arr[i]]+=1;
        }
        for(int i=1;i<=maxi;i++){
            count_array[i]+=count_array[i-1];
        }
        int sorted_array[r];
        for(int i=r;i>=l;i--){
            count_array[arr[i]]-=1;
            sorted_array[count_array[arr[i]]]=arr[i];
        }
        return sorted_array[k-1];
       
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends