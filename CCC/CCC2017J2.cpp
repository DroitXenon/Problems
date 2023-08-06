#include <iostream>
using namespace std;
int main() {
	int N,K,sum;
	cin >> N >> K;
	sum = 0;
	for (int i = 1; i <= K + 1; i++) {
		sum = sum + N;
		N *= 10;
	}
	cout << sum;
	return 0;
}