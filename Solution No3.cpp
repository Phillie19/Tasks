class Solution {
public:
	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
		vector <int> output;
		unordered_map <int, int> mym;

		for (int i = 0; i < nums.size(); i++) {
			int count = 0;
			if (mym.find(nums[i]) == mym.end()) {
				for (int j = 0; j < nums.size(); j++) {
					if (nums[i] > nums[j]) {
						count++;
					}
				}
				mym.insert({ nums[i], count });
			}
		}
		for (int i = 0; i < nums.size(); i++) {
			output.push_back(mym[nums[i]]);
		}
		return output;
	}
};