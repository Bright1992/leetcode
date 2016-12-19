#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define INF 0x7FFFFFFF

int glo475 = 0;

int findRadius(vector<int> &houses, vector<int> &heaters) {
	sort(houses.begin(), houses.end());
	sort(heaters.begin(), heaters.end());
	int s1 = houses.size(), s2 = heaters.size();
	int p = 0;
	int radius = 0;
	int rp = 0;
	for (int i = 0; i < s1; ++i) {
		while (p<s2&&houses[i] > heaters[p])	p++;
		if (p == 0)	rp = heaters[p] - houses[i];
		else if (p < s2) rp = min(heaters[p] - houses[i], houses[i] - heaters[p - 1]);
		else rp = houses[i] - heaters[p - 1];
		radius = max(radius, rp);
	}
	return radius;
}

//int main() {
//	vector<int> houses = { 25921153, 510616708 }, heaters = { 771515668, 357571490, 44788124, 927702196, 952509530 };
//	glo = glo + houses.size();
//	cout << findRadius(houses,heaters) << endl;
//	system("Pause");
//	return 0;
//}