class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		for (auto& row : A) {
			reverse(row.begin(), row.end());

			for (auto& pix : row) {
				pix = !pix;
			}
		}
		return A;
	}
};
