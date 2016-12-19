#include <iostream>
#include <string>
#include <vector>
using namespace std;

string convert(string text, int nRows) {
	string ret = "";
	int s = text.size();
	int T = nRows * 2 - 2;
	if (nRows == 1)	return text;
	if (s == 0)	return "";
	int n = (s-1) / T, r = (s-1)%T+1;
	vector<int> q = vector<int>(nRows,0);
	for (int i = 0; i < nRows; ++i) {
		if (i == 0 || i == nRows - 1) {
			q[i] = n;
			if (i == 0)	q[i] = q[i] + 1;
			if (i == nRows - 1 && r >= nRows)	q[i] = q[i] + 1;
		}
		else {
			q[i] = 2 * n;
			if (r > i)	q[i] = q[i] + 1;
			if (r >= 2 * nRows - i - 1)	q[i] = q[i] + 1;
		}
	}
	for (int i = 0; i < nRows - 1; ++i)
		q[i + 1] = q[i] + q[i + 1];
	q.insert(q.begin(), 0);
	ret = string(s, '0');
	for (int i = 0; i < s; ++i) {
		int pr = i%T+1, pn = i / T;
		if (pr != 1 && pr != nRows)	pn *= 2;
		if (pr <= nRows)	ret[q[pr - 1] + pn] = text[i];
		else	ret[q[2 * nRows - pr - 1] + pn + 1] = text[i];
	}
	return ret;
}

//int main() {
//	cout<<convert("abcdefghijklmnopqrstuvwxyz",1)<<endl;
//	system("Pause");
//	return 0;
//}