#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


// sr/sc - > source row/source column
vector<string> getMazePaths(int sr, int sc, int dr, int dc)
{
	if (sr == dr && sc == dc) {
		vector<string> bres;
		bres.push_back("");
		return bres;
	}

	vector<string> hpaths;
	vector<string> vpaths;

	if (sc < dc) {
		hpaths = getMazePaths(sr, sc + 1, dr, dc);
	}
	if (sr < dr) {
		vpaths = getMazePaths(sr + 1, sc, dr, dc);
	}

	vector<string> paths;

	for (string hpath : hpaths)
		paths.push_back("h" + hpath);
	for (string vpath : vpaths)
		paths.push_back("v" + vpath);

	return paths;
}

int main() {
	inputOutput();

	int n; cin >> n;
	int m; cin >> m;
	vector<string> paths = getMazePaths(1, 1, n, m);
	cout << "[";
	for (int i = 0; i < paths.size(); i++)
	{
		cout << paths[i];
		if (i != paths.size() - 1)
			cout << ", ";
	}
	cout << "]";

	return 0;
}



