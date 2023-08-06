#include <iostream>
#include <cstring>
using namespace std;
string str1, str2;
long m, i, j;
int main() {
	bool find;
	char st;
	cin >> str1 >> str2;
	m = 0;
	find = false;
	//cout << str1.length()<<endl;
	for (i = 1; i <= str2.length(); i++) {
		for (j = 0; j < str1.length(); j++) {
			if (str1[j] == str2[m]) {
				m = m + 1;
			}
			else if ((m >= 1) && (str1[j] == str2[m - 1])) m=m;
			else m = 0;
			if (m == str2.length()) find = true;
			//cout << m<<j<<endl;
		}
		st = str2[str2.length() - 1];
		for (j = str2.length() - 2; j >= 0; j--) {
			str2[j + 1] = str2[j];
		}
		str2[0] = st;
		//cout << str2 << endl;
	}
	//cout << str1[997] << str1[998];
	if (find) cout << "yes";
	else cout << "no";
	return 0;
}
