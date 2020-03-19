class Solution {
public:
	bool judgeCircle(string moves) {
		int cy = 0;
		int cx = 0;
		for (auto &c : moves) {
			if (c == 'U') cy++;
			else if (c == 'D') cy--;
			else if (c == 'R') cx++;
			else if (c == 'L') cx--;
		}
		return (cx == 0 && cy == 0);
	}
};
