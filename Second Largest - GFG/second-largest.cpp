// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    if(n==0 || n==1)
	        return -1;
	    
	    int i;
	    int k;
	    int max1 = arr[0];
	    
	    for(i=1;i<n;i++){
	        if(max1<=arr[i]){
	        max1=arr[i];
	        k = i;
	       }
	    }
	        
	    int max2 = -1;
	    
	    for(i=0;i<n;i++){
	        if(arr[i]!=max1){
	            max2 = max(arr[i],max2);
	        }
	    }
	    
	    return max2;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends