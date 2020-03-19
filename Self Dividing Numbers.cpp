class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector <int> ans;

		for (int i = left; i <= right; i++) {
			int num = i;
			bool div = true;
			while (num) {
				int d = num % 10;
				if (d == 0 || i % d != 0) {
					div = false;
					break;
				}
				num /= 10;
			}
			if (div) ans.push_back(i);
		}
		return ans;
	}
};