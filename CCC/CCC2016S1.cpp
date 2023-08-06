#include<iostream>
using namespace std;
int main() {
	string str1,str2;
	cin >> str1 >> str2;
	int a[200]={0};
	for (int i = 1; i <= str1.length(); i++) {
		a[int(str1[i])]++;
	}
	for (int i = 1; i <= str2.length(); i++) {
		a[int(str2[i])]--;
	}
	for (int i = 96; i <= 130; i++)
		if (a[i] < 0) {
			cout << "N";
			return 0;
		}
	cout << "A";
	return 0;
}

//15min