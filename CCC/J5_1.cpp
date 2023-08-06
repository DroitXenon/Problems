#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int n, t, i,x, y;
	cin >> n >> t;
	cin >> x >> y;
	cout << max(max((n - x), (n - y)), max(x - 1, y - 1));
	return 0;
}
