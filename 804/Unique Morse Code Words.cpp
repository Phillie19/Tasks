class Solution {
public:
	int uniqueMorseRepresentations(vector<string>& words) {
		unordered_set <string> coded;
		unordered_map <char, string> morse = { {'a', ".-"},{'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"}, {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"}, {'z', "--.."} };
		for (auto word : words) {
			string encoded = "";
			for (auto letter : word) {
				encoded += morse[letter];
			}
			coded.insert(encoded);
		}

		return coded.size();
	}
};
