#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        set<int>ans;
        vector<int>anss;
        int j=0; 
        sort(arr,arr+n);
        
        for(int i=0;i<n;i++){
            j=i;
            while(arr[j]==arr[j+1]){
                j++;
            }
            if((j-i)>0) ans.insert(arr[i]);
            i=j;
        }
        for(auto x:ans) anss.push_back(x);
        
        if(!anss.size()) anss.push_back(-1);
        return anss;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
