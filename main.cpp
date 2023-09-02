#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> vv(n + 2, vector<int>(m + 2));
	for (int i = 1; i <= n; i++) 
	for (int j = 1; j <= m; j++) {
		char c; cin >> c;
		vv[i][j] = c != '.' ? (c == 'P' ? 1 : 2) : 0;
	}

	int eaten = 0;
	for (int i = 1; i <= n; i++) 
	for (int j = 1; j <= m; j++) eaten += vv[i][j] == 2 ? (vv[i - 1][j] == 1 || vv[i][j-1] == 1 || vv[i + 1][j] == 1 || vv[i][j + 1] == 1) : 0;	

	cout << eaten;
}
