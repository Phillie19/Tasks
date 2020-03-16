class Solution {
public:
	int balancedStringSplit(string s) {
		int answer = 0;
		int count = 0;
		for (auto l : s) {
			if (l == 'R') {
				count++;

			}
			else count--;
			if (count == 0) answer++;
		}
		return answer;
	}
};
