class Solution {
public: 
	int numIslands(vector<vector<char>>& grid) {
		int islcnt = 0;
		for (int y = 0; y < grid.size(); y++) {
			for (int x = 0; x < grid[y].size(); x++) {
				if (grid[y][x] == '1') {
					islcnt++;
					sinkIsland(grid, x, y);
				}
			}
		}
		return islcnt;
	}
	void sinkIsland(vector<vector<char>>& grid, int x, int y) {
		if (grid[y][x] == '1') {
			grid[y][x] = '0';
			if (y > 0) sinkIsland(grid, x, y - 1);
			if (y < grid.size() - 1) sinkIsland(grid, x, y + 1);
			if (x > 0) sinkIsland(grid, x - 1, y);
			if (x < grid[0].size() - 1) sinkIsland(grid, x + 1, y);
		}
	}
};
