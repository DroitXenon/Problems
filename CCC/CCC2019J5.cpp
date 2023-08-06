#include <bits/stdc++.h>
using namespace std;
int c = 0, x, y, js = 1;
string str1, str1t, str2, str2t, str3, str3t, fir, las;
bool findw = false;
int meth[10], posi[10];
void process(string a, string b, int c, int d) {
	if (c == d) return;
	if (b.find(str1t) != b.npos) {
			meth[c] = 1;
				posi[c] = b.find(str1t) + 1;
				b.replace(b.find(str1t), str1t.length(), str1);
				c++;
				//cout << b<<endl;
				//process(a, b);
	}
	else if (b.find(str2t) != b.npos) {
			meth[c] = 2;
				posi[c] = b.find(str2t) + 1;
			b.replace(b.find(str2t), str2t.length(), str2);
			c++;
			//cout << b << endl;
			//process(a, b);
	}
	else if (b.find(str3t) != b.npos) {
			meth[c] = 3;
			posi[c] = b.find(str3t) + 1;
			b.replace(b.find(str3t), str3t.length(), str3);
			c++;
			//cout << b<<endl;
			//process(a, b);
	}
	//cout << c << endl;
	//if (js == 0) {
	//	x = meth[c];     
	//	y = posi[c];
		//cout << x << y;
	//}
	process(a, b, c, d);

	if (c != d) cout << meth[c] << " " << posi[c] << " " << b << endl;
	//cout << c << endl;
	if (c == 1)  cout << meth[c - 1] << " " << posi[c - 1] << " ";
}


int main() {
	int steps;
	cin >> str1 >> str1t >> str2 >> str2t >> str3 >> str3t >> steps >> fir >> las;
	process(fir, las, 0, steps);
	cout << las;
	return 0;
}


