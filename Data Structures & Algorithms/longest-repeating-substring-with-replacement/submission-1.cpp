class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        unordered_map<int,int>umap;
        int maxlen=0;
        int maxfreq=0;

        for(int j=0; j<s.size();j++){
            umap[s[j]]++;
            maxfreq=max(maxfreq, umap[s[j]]);
        

            int changes= (j-i+1) - maxfreq;

            while(changes>k){
                umap[s[i]]--;
                i++;
                changes = (j-i+1) - maxfreq;
            }
            maxlen= max(maxlen, j-i+1);
        }       
        return maxlen;

    }
};
