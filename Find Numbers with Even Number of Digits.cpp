class Solution {
public:
	int findNumbers(vector<int>& nums) {
		int n = 0;
		for (int i = 0; i < nums.size(); i++) {
			int count = 0;
			while (nums[i]) {
				count++;
				nums[i] /= 10;
			}
			if (count % 2 == 0) n++;
		}
		return n;
	}
};