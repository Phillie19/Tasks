class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector <int> ans;
		for (int i = left; i <= right; i++) {
			if (IsSelfDividing(i)) ans.push_back(i);
		}
		return ans;
	}
	bool IsSelfDividing(int num) {
		int temp = num;
		while (temp) {
			int d = temp % 10;
			if (d == 0 || num % d != 0) return false;
			temp /= 10;
		}
		return true;
	}
};
