#include <iostream>

using namespace std;

int map[100][100];
int ret = 0;

void check(int n,int x, int y) {
	for (int i = 0; i < n; ++i) {
		map[x][i] = map[x][i] + 1;
		map[i][y] = map[i][y] + 1;
		if (x + i < n&&y + i < n)
			map[x + i][y + i] = map[x + i][y + i] + 1;
		if (x + i < n&&y - i >= 0)
			map[x + i][y - i] = map[x + i][y - i] + 1;
		if (x - i >= 0 && y + i < n)
			map[x - i][y + i] = map[x - i][y + i] + 1;
		if (x - i >= 0 && y - i >= 0)
			map[x - i][y - i] = map[x - i][y - i] + 1;
	}
	map[x][y] = map[x][y] - 5;
}

void uncheck(int n, int x, int y) {
	for (int i = 0; i < n; ++i) {
		map[x][i] = map[x][i] - 1;
		map[i][y] = map[i][y] - 1;
		if (x + i < n&&y + i < n)
			map[x + i][y + i] = map[x + i][y + i] - 1;
		if (x + i < n&&y - i >= 0)
			map[x + i][y - i] = map[x + i][y - i] - 1;
		if (x - i >= 0 && y + i < n)
			map[x - i][y + i] = map[x - i][y + i] - 1;
		if (x - i >= 0 && y - i >= 0)
			map[x - i][y - i] = map[x - i][y - i] - 1;
	}
	map[x][y] = map[x][y] + 5;
}

void bt(int n,int p) {
	//cout << p << endl;
	if (p == n) {
		ret += 1;
		return;
	}
	for (int i = 0; i < n; ++i) {
		if (map[p][i] == 0) {
			check(n, p, i);
			bt(n, p + 1);
			uncheck(n, p, i);
		}
	}
}

int totalQueens(int n) {
	//check(8,5, 5);
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			map[i][j] = 0;
	bt(n, 0);
	return ret;
}

int main() {
	totalQueens(3);
	cout << ret << endl;
	system("Pause");
	return 0;
}