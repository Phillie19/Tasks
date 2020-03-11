class Solution {
public:
	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
		multiset <int> sol;
		vector <int> out;
		for (int i = 0; i < nums.size(); i++) {
			sol.insert(nums[i]);
		}
		for (int i = 0; i < nums.size(); i++) {
			out.push_back(distance(sol.begin(), sol.lower_bound(nums[i])));
		}
		return out;
	}
};
