#include <iostream>
using namespace std;
int main() {
	int x1,y1, x2, y2, len;
	cin >> x1 >> y1 >> x2 >> y2 >> len;
	if ((abs(x1 - x2) + abs(y1 - y2)) > len) {
		cout << "N"; 
		return 0;
	}
	if ((len - (abs(x1 - x2) + abs(y1 - y2))) % 2 == 0)
		cout << "Y";
	else cout << "N";
	return 0;
}