#include <iostream>
#include <cstring>
using namespace std;
string str1, str2;
int main() {
	long long m, i, j;
	bool find;
	char st;
	cin >> str1 >> str2;
	m = 0;
	find = false;
	
	for (i = 1; i <= str2.length(); i++) {
		for (j = 0; j < str1.length(); j++) {
			if (str1[j] == str2[m]) {
				m = m + 1;
			}
			else if ((m>=1)&&(str1[j] == str2[m-1])) m=1;
			else m = 0;
			if (m == str2.length()) find = true;
			//cout << m;
		}
		st=str2[str2.length() - 1];
		for (j = str2.length() - 2; j >= 0; j--) {
			str2[j + 1] = str2[j];
		}
		str2[0] = st;
		//cout << str2 << endl;
	}
	if (find) cout << "yes";
	else cout << "no";
	return 0;
}
