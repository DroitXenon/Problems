#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n <= 5) cout << (n / 2) + 1;
	else if (n == 6) cout << "3";
	else if (n <= 8) cout << "2";
	else cout << "1";
	return 0;
}

//18