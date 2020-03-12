class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
   	vector <int> sorted(101);
    vector <int> output;
			for (auto a : nums) {
            sorted[a]++;
		}
        for (int i = 1; i <= 100; i++) {
            
            sorted[i] += sorted[i-1];
        }
		for (auto a : nums) {
            if (a == 0) output.push_back(0);
            else     	output.push_back(sorted[a-1]);
			}
		return output;
	}
};
