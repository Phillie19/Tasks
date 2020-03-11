class Solution {
public:
	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
		vector <int> sort(101);
		vector <int> output(nums.size());

		for (int i = 0; i < nums.size(); i++) {
			sort[nums[i]] += 1;
		}
		for (int i = 0; i < nums.size(); i++) {
			for (int j = 0; j < nums[i]; j++) {
				output[i] += sort[j];
			}
		}
		return output;
	}
};