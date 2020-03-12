class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int N = 0;
		unordered_multiset <char> st;
		for (int i = 0; i < S.length(); i++) {
			st.insert(S[i]);
		}
		for (int i = 0; i < J.length(); i++) {
			N += st.count(J[i]);
		}
		return N;
	}
};
