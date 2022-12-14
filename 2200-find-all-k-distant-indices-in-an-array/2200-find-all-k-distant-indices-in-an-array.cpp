class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int N = nums.size();
        set<int> S;
        
        for(int i = 0; i < N; i++) {
            if(nums[i] != key) continue;
            
            for(int j = 0; j < N; j++) {
                if(abs(i - j) <= k && nums[i] == key) {
                    S.insert(j);
                }
            }
        }
		// No need to create a new vector
        return vector<int> (S.begin(), S.end());
    }
};