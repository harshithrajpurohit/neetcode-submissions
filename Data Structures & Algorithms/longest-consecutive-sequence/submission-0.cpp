class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>uset;
        for(int i=0;i<n;i++){
            uset.insert(nums[i]);
        }

        int maxi=0;

        for(int i=0;i<n;i++){
            if(uset.count(nums[i]-1)==0){
                int stpoint = nums[i];
                int cnt=1;

                while(uset.count(stpoint + 1)==1){
                    cnt++;
                    stpoint++;
                }
                maxi = max(maxi, cnt);
            }
             
        }
        return maxi;
    }
};
