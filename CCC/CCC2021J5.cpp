#include <iostream>
#include <cstring>
using namespace std;
string str;
bool map[10005][10005];
int main() {
	int i,j,m, n,r,num,sum;
	char ad;
	memset(map, 1, sizeof(map));
	cin >> m >> n >> r;
	sum = 0;
	for (i = 1; i <= r; i++) {
		cin >> ad >> num;
		if (ad == 'R') {
			for (j = 1; j <= n; j++)
				map[num][j]=!map[num][j];
		}
		if (ad == 'C') {
			for (j = 1; j <= m; j++)
				map[j][num]=!map[j][num];
		}
	}
	for (i=1;i<=m;i++)
		for (j = 1; j <= n; j++) {
			if (!map[i][j]) sum++;
			
		}
	cout << sum;
	return 0;
}


