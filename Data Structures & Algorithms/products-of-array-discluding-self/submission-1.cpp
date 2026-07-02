class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result(nums.size(),1);

        //prefix
        int prefix=1;
        for(int i=0;i<nums.size();i++){
            result[i]=prefix;
            prefix=prefix*nums[i];
        }

        int suffix=1;
        for(int j = nums.size()-1; j>=0;j--){
            result[j]= result[j]*suffix;
            suffix = suffix * nums[j];
        }
        return result;
    }
};
