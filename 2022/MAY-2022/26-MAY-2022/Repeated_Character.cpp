#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        int hash[26]={0};
        // for(auto x:hash) cout<<x<<" ";
        
        for(int i=0;i<s.length();i++){
            hash[s[i]-97]++;
        }
        
        for(int i=0;i<s.length();i++){
            if(hash[s[i]-97]>1) return s[i];
        }
        
        return '#';
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}


  // } Driver Code Ends
