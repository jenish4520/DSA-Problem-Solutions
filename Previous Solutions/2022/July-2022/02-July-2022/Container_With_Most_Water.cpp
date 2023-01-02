class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int i=0, j=n-1;
        int maxarea=INT_MIN;
        
        if(n==2) return min(h[0], h[1])*min(h[0], h[1]);
        
        while(i<j){
            int current=(j-i)*min(h[i],h[j]);
            maxarea=max(maxarea, current);
            
            // We know that width is going to decrease by 1 for sure
            // So why to leave taller building, just keep it for future
            // Incase it help, but keeping shorter bui;ding will not help in future
            // [1,3,2,5,25,24,5] trace it!!!
            if(h[i]<h[j]) i++;
            else j--;
        }
        
        return maxarea;
    }
};