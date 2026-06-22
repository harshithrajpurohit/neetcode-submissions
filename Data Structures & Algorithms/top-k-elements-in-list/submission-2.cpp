class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Frequency count kar
        unordered_map<int,int> umap;
        for (int i = 0; i < nums.size(); i++) {
            umap[nums[i]]++;
        }

        // Step 2: Min-heap bana - {frequency, number} pairs store karega
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;

        for (auto& p : umap) {
            int num = p.first;
            int freq = p.second;
            minHeap.push({freq, num});

            // Step 3: Agar heap size k se zyada ho gaya, sabse chhota nikaal do
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        // Step 4: Heap se sab numbers nikaal lo
        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return result;
    }
};