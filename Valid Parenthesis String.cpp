class Solution {
public:
	bool checkValidString(string s) {
		stack <char> res;
		int cnt = 0;
		for (auto ch : s) {
			// (
			if (ch == '(') res.push(ch);
			// )
			else if (ch == ')') {
				if (res.top() == '(') res.pop();
				else if (cnt > 0) cnt--;
				else return false;
			}
			// *
			else cnt++;
		}
		if (res.empty() || res.size() <= cnt) return true;
		else return false;
	}
};