class Solution {
public:
	int findComplement(int num) {
		int ans = 0;
		vector <int> d;
		while (num > 0) {
			if (num % 2) d.push_back(0);
			else d.push_back(1);
			num >>= 1;
		}
		for (int i = 0; i < d.size(); i++) {
			ans += pow(2, i) * d[i];
		}
		return ans;
	}
};