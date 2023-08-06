#include<iostream>
using namespace std;
int main() {
	int t, C1, C2, J1, J2,dc,dj;
	char map[11][11];
	t = 0;
	dc = 0;
	dj = 0;
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'C') C1 = i; C2 = j;
			if (map[i][j] == 'J') J1 = i; J2 = j;
		}
	while (true) {
		t++;
		
		if (dc == 0)
		if (map[C1 - 1][C2] == '.') {
			map[C1 - 1][C2] == 'C';
			map[C1][C2] == '.';
			C1--;
		}
		else if (map[C1 - 1][C2] == '*') dc = (dc + 1) % 4;

		if (dc == 1)
		if (map[C1 - 1][C2] == '.') {
			map[C1 - 1][C2] == 'C';
			map[C1][C2] == '.';
			C1--;
		}
		else if (map[C1 - 1][C2] == '*') dc = (dc + 1) % 4;

		if (dc == 2)
		if (map[C1 - 1][C2] == '.') {
			map[C1 - 1][C2] == 'C';
			map[C1][C2] == '.';
			C1--;
		}
		else if (map[C1 - 1][C2] == '*') dc = (dc + 1) % 4;
	
		if (dc == 3)
		if (map[C1 - 1][C2] == '.') {
			map[C1 - 1][C2] == 'C';
			map[C1][C2] == '.';
			C1--;
		}
		else if (map[C1 - 1][C2] == '*') dc = (dc + 1) % 4;

		if (dc == 0)
			if (map[C1 - 1][C2] == '.') {
				map[C1 - 1][C2] == 'C';
				map[C1][C2] == '.';
				C1--;
			}
			else if (map[C1 - 1][C2] == '*') dc = (dc + 1) % 4;

		if (dc == 1)
			if (map[C1 - 1][C2] == '.') {
				map[C1 - 1][C2] == 'C';
				map[C1][C2] == '.';
				C1--;
			}
			else if (map[C1 - 1][C2] == '*') dc = (dc + 1) % 4;

		if (dc == 2)
			if (map[C1 - 1][C2] == '.') {
				map[C1 - 1][C2] == 'C';
				map[C1][C2] == '.';
				C1--;
			}
			else if (map[C1 - 1][C2] == '*') dc = (dc + 1) % 4;

		if (dc == 3)
			if (map[C1 - 1][C2] == '.') {
				map[C1 - 1][C2] == 'C';
				map[C1][C2] == '.';
				C1--;
			}
			else if (map[C1 - 1][C2] == '*') dc = (dc + 1) % 4;
	
	
	
	
	}
	return 0;
}