class Solution {
public:
	int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
		int minindex = -1;
		for (int i = 0; i < binaryMatrix.dimensions()[0]; i++) {
			int right = binaryMatrix.dimensions()[1] - 1;
			int left = 0;
			if (binaryMatrix.get(i, right) < 1) continue;
			else {
				while (right - left > 0) {
					int search = (left + right) / 2;
					if (binaryMatrix.get(i, search) < 1) left = search + 1;
					else right = search;
				}
				if (minindex < 0 || left < minindex) minindex = left;
			}
		}
		return minindex;
	}
};