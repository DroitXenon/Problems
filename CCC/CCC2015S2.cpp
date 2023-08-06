#include <iostream>
using namespace std;
int jer[100002], ath[100002];
int main() {
	int J, A,sum,num;
	char size;
	cin >> J >> A;
	sum = 0;
	for (int i = 1; i <= J; i++) {
		cin >> size;
		if (size == 'L') jer[i] = 3;
		if (size == 'M') jer[i] = 2;
		if (size == 'S') jer[i] = 1;
	}
	for (int i = 1; i <= A; i++) {
		cin >> size >> num;
		if (size == 'L') ath[i] = 3;
		if (size == 'M') ath[i] = 2;
		if (size == 'S') ath[i] = 1;
		if (ath[i] <= jer[num]) {
			jer[num] = 0;
			sum++;
		}
	}
	cout << sum;
	return 0;
}

//16min