class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            ans^=(int)s[i];
        }
        for(int i=0;i<t.length();i++){
            ans^=(int)t[i];
        }
        return (char)ans;
    }
};