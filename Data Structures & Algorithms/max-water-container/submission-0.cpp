class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea=0;
        
        int left=0;
        int right = heights.size()-1;

        while(left<right){
            
            int ht = min(heights[left], heights[right]);
            int wdt= right-left; 
            int area = ht*wdt;
            maxarea=max(maxarea, area);
            if(heights[left]<heights[right]){
                left++;
            }
            else right--;
        }
        return maxarea;
    }
};
