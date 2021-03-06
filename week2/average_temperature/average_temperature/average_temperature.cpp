#include <algorithm>
#include <functional>
#include <cmath>
#include <limits>
#include <cfloat>
#include <cstdio>
#include <iomanip>
#include <ios>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>

using namespace std;

typedef int64_t I64;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int, int> pi;

#define fr(i,a,b) for (int i = a; i <= b; i++)
#define fr2(i,a,b) for (int i = a; i < b; i++)

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vi a(n);
	int avg = 0;
	for (auto& c : a) {
		cin >> c;
		avg += c;
	}
	avg /= n;

	vi b;
	fr2(i, 0, a.size()) {
		if (a[i] > avg) b.push_back(i);
	}

	cout << b.size() << "\n";
	for (auto i : b) cout << i << " ";

	return 0;
}
