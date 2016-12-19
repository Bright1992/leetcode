#include <iostream>

using namespace std;

int map52[100][100];
int ret52 = 0;

void check(int n,int x, int y) {
	for (int i = 0; i < n; ++i) {
		map52[x][i] = map52[x][i] + 1;
		map52[i][y] = map52[i][y] + 1;
		if (x + i < n&&y + i < n)
			map52[x + i][y + i] = map52[x + i][y + i] + 1;
		if (x + i < n&&y - i >= 0)
			map52[x + i][y - i] = map52[x + i][y - i] + 1;
		if (x - i >= 0 && y + i < n)
			map52[x - i][y + i] = map52[x - i][y + i] + 1;
		if (x - i >= 0 && y - i >= 0)
			map52[x - i][y - i] = map52[x - i][y - i] + 1;
	}
	map52[x][y] = map52[x][y] - 5;
}

void uncheck(int n, int x, int y) {
	for (int i = 0; i < n; ++i) {
		map52[x][i] = map52[x][i] - 1;
		map52[i][y] = map52[i][y] - 1;
		if (x + i < n&&y + i < n)
			map52[x + i][y + i] = map52[x + i][y + i] - 1;
		if (x + i < n&&y - i >= 0)
			map52[x + i][y - i] = map52[x + i][y - i] - 1;
		if (x - i >= 0 && y + i < n)
			map52[x - i][y + i] = map52[x - i][y + i] - 1;
		if (x - i >= 0 && y - i >= 0)
			map52[x - i][y - i] = map52[x - i][y - i] - 1;
	}
	map52[x][y] = map52[x][y] + 5;
}

void bt(int n,int p) {
	//cout << p << endl;
	if (p == n) {
		ret52 += 1;
		return;
	}
	for (int i = 0; i < n; ++i) {
		if (map52[p][i] == 0) {
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
			map52[i][j] = 0;
	bt(n, 0);
	return ret52;
}

//int main() {
//	totalQueens(3);
//	cout << ret52 << endl;
//	system("Pause");
//	return 0;
//}