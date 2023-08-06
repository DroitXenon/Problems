#include <iostream>
#include <cstring>
using namespace std;
string str;
int main() {
	long i, len;
	long zh;
	cin >> str;
	len = str.length();
	for (i = 0; i < len; i++) {
		zh = int(str[i]);
		if ((zh <= int('Z')) && (zh >= int('A'))) cout << str[i];
		else if ((zh <= int('9')) && (zh >= int('0'))) cout << str[i] << endl;
		else if (zh == int('+')) cout << ' ' << "tighten" << ' ';
		else cout << ' ' << "loosen" << ' ';
	}
	return 0;
}


