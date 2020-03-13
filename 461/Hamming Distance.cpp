class Solution {
public:
	int hammingDistance(int x, int y) {
		int count = 0;
		vector <int> num1(31);
		vector <int> num2(31);
		vector <int> ::reverse_iterator rit1 = num1.rbegin();
		vector <int> ::reverse_iterator rit2 = num2.rbegin();
		while (x != 0) {
			int temp;
			temp = x % 2;
			*rit1 = temp;
			rit1++;
			x /= 2;
		}
		while (y != 0) {
			int temp;
			temp = y % 2;
			*rit2 = temp;
			rit2++;
			y /= 2;
		}
		for (int i = 0; i < 31; i++) {
			if (num1[i] != num2[i]) count++;
		}
		return count;
	}
};
