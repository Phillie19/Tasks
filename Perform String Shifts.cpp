class Solution {
public:
	string stringShift(string s, vector<vector<int>>& shift) {
		int len = s.size();
		int pos = 0;
		for (int i = 0; i < shift.size(); i++) {
			pos = (shift[i][0] == 0) ? pos - shift[i][1] : pos + shift[i][1];
		}
		pos = (pos > 0) ? len - pos % len : abs(pos) % len;
		string ans;
		for (int j = pos; j < len; j++) {
			ans.push_back(s[j]);

		}
		for (int j = 0; j < pos; j++) {
			ans.push_back(s[j]);

		}
		return ans;
	}
};