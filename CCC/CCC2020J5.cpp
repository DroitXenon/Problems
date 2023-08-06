#include<iostream>
using namespace std;
int a[1005][1005];
bool findw = false;
int cs = 0;
void find(int x, int y,int m,int n ) {
	cs++;
	if ((x * y) == a[1][1]) {
		findw = true;
		return;
	}
	else if ((x==1&&y==1) || x<1||y<1||cs>m*n) {
		return;
	}
	for (int i = m; i >=1; i--)
		for (int j = n; j >=1; j--) {
			if (x* y == a[i][j]) find(i, j,m,n);
		}
	
}
int main() {
	int m, n,i,j;
	cin >> m >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
	find(m, n, m, n);
	if (findw) cout << "yes";
	else cout << "no";
	return 0;
}


