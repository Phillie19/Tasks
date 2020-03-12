class Solution {
public:
	string defangIPaddr(string address) {
		string line;
		for (int i = 0; i < address.length(); i++) {
			if (address[i] == '.') line += "[.]";
			else line += address[i];
		}
		return line;
	}
};
