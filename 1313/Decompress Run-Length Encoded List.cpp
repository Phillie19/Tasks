class Solution {
public:
	vector<int> decompressRLElist(vector<int>& nums) {
		vector <int> decompressed;
		vector <int> ::iterator it1;
		vector <int> ::iterator it2;
		for (it1 = nums.begin(), it2 = it1 + 1; it1 != nums.end(); advance(it1, 2), advance(it2, 2)) {
			for (int i = 0; i < *it1; i++) {
				decompressed.push_back(*it2);
			}
		}
		return decompressed;
	}
};
