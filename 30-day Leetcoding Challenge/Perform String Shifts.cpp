class Solution {
public:
	string stringShift(string s, vector<vector<int>>& shift) {
		int len = s.size();
		int pos = 0;
		for (auto i : shift) {
			pos = (i[0] == 0) ? pos - i[1] : pos + i[1];
		}
		pos = (pos > 0) ? len - pos % len : abs(pos) % len;
		rotate(s.begin(), s.begin() + pos, s.end());
		return s;
	}
};
