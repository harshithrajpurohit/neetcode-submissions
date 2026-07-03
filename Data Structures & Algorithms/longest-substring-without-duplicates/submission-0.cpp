class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>uset;
        int i = 0;
        int maxlen=0;
        int n=s.size();
        for(int j=0;j<n;j++){
            while(uset.count(s[j])){
                uset.erase(s[i]);
                i++;
            }
            uset.insert(s[j]);
            maxlen=max(maxlen, j-i+1);
        }
        return maxlen;
    }
};
