#include <iostream>
#include <string>
using namespace std;
string str;
int main() {
	int i, j,len,swa;
	cin >> str;
	len = str.length();
	swa = 0;
	//cout << str[0]<<str[len - 1];
	for (i=0;i<len;i++)
		for (j = len - 1; j > i; j--) {
			if (int(str[i]) > int(str[j])) {
				swap(str[i], str[j]);
				swa++;
				//cout << swa << endl;
				//cout << str<<endl;
			}
			break;
		}
	cout << swa;
	return 0;
}


