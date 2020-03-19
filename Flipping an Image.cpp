class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		for (auto& row : A) {
			for (int i = 0, j = row.size() - 1; i < row.size() / 2; i++, j--) {
				swap(row[i], row[j]);
			}
			for (auto& pix : row) {
				pix = !pix;
			}
		}
		return A;
	}
};