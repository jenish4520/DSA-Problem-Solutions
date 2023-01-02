//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string checkit(string pre, string s){
        string ans="";
        int length=min(pre.length(),s.length());
        
        for(int i=0;i<length;i++){
            if(pre[i]!=s[i]) break;
            ans+=pre[i];
        }
        
        return ans;
    }
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string prefix=arr[0];
        for(int i=1;i<N;i++){
            prefix=checkit(prefix,arr[i]);
        }
        
        if(prefix.length()==0) return "-1";
        return prefix;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
