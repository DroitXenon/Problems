#include <iostream>
#include <cstring>
using namespace std;
struct student {
	string name;
};
int main() {
	int x, y, g, i, j, vio;
	student a[100][2], b[100][2];
	string gro, name1, name2, name3;
	bool viola;
	cin >> x;
	for (i = 1; i <= x; i++) {
		cin >> a[i][1].name >> a[i][2].name;

	}
	cin >> y;
	for (i = 1; i <= y; i++) {
		cin >> b[i][1].name >> b[i][2].name;
	}
	cin >> g;
	vio = 0;
	viola = false;
	for (i = 1; i <= g; i++) {
		cin >> name1 >> name2 >> name3;
		gro = name1 + ' ' + name2 + ' ' + name3;
		for (j = 1; j <= x; j++) {
			if( ((gro.find(a[j][1].name) == gro.npos) && (gro.find(a[j][2].name) != gro.npos)) && !viola) {
				vio++;
				viola = true;
				
			}
			else if (((gro.find(a[j][1].name) != gro.npos) && (gro.find(a[j][2].name) == gro.npos))&& !viola) {
				vio++;
				viola = true;
			}
		}
		if (!viola)
			for (j = 1; j <= y; j++) {
				if ((gro.find(b[j][1].name) != gro.npos) && (gro.find(b[j][2].name) != gro.npos)) {
					vio++;
					viola = true;
				}
			}
		viola = false;
		//cout << vio;
	}
	cout << vio;
	return 0;
}





