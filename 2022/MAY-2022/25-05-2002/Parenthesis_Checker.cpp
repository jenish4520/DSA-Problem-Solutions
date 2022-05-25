#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        int n=x.length();
        stack<char>s;
        for(int i=0;i<n;i++){
            if(x[i]=='{' || x[i]=='(' || x[i]=='['){
                s.push(x[i]);
            }
            else if(x[i]==')' && (!s.empty())){
                if(s.top()=='(')
                    s.pop();
                else 
                    return false;
            }
            else if(x[i]=='}' && (!s.empty())){
                if(s.top()=='{')
                    s.pop();
                else 
                    return false;
            }
            else if(x[i]==']' && (!s.empty())){
                if(s.top()=='[')
                    s.pop();
                else 
                    return false;
            }
            else{
                return false;
            }
        }
        if(s.empty()==false) return false;
        return true;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
