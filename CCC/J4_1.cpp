#include <iostream>
#include <cstring>
using namespace std;
struct student {
	string name;
};
int main() {
	int x, y, g, i, j, vio;
	student a[100][2], b[100][2],gro[100];
	string  name1, name2, name3;
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
	viola = false;
	vio = 0;
	for (i = 1; i <= g; i++) {
		cin >> name1 >> name2 >> name3;
		gro[i].name = name1 + ' ' + name2 + ' ' + name3;
	}
	for (i = 1; i <= x; i++) {
		for (j = 1; j <= g; j++) {
			if (((gro[j].name.find(a[i][1].name) == gro[j].name.npos) && (gro[j].name.find(a[i][2].name) != gro[j].name.npos)) && !viola) {
				vio++;
				
				viola = true;
			}
			if (((gro[j].name.find(a[i][1].name) != gro[j].name.npos) && (gro[j].name.find(a[i][2].name) == gro[j].name.npos)) && !viola) {
				vio++;
				
				viola = true;
			}
		}
		//if (!viola) vio++;
		viola = false;
		//cout << vio;
	}
	for (i = 1; i <= y; i++) {
		for (j = 1; j <= g; j++) {
			if ((gro[j].name.find(b[i][1].name) != gro[j].name.npos) && (gro[j].name.find(b[i][2].name) != gro[j].name.npos)) 
				vio++;
		}
		
	}
	cout << vio;
	return 0;
}





