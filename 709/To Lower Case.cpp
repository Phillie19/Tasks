class Solution {
public:
	string toLowerCase(string str) {
		string line;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] >= 'A' && str[i] <= 'Z') line += 'a' + str[i] - 'A';
			else line += str[i];
		}
		return line;
	}
};
