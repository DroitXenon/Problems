#include<iostream>
#include <cstring>
using namespace std;
int a[1000005], b[1000005],suma[1000005];
int main() {
	int n,i,sumb,max;
	bool find;
	cin>>n;
	sumb = 0;
	max = 0;
	find = false;
	memset(suma, 0, sizeof(suma));
	for (i = 1; i <= n; i++) {
		cin >> a[i];
		suma[i] =suma[i-1]+ a[i];
	}
	for (i = 1; i <= n; i++) {
		cin >> b[i];
		sumb += b[i];
		if (suma[i] == sumb) {
			find = true;
			if (max < i) max = i;
		}
	}
	if (find) cout << max;
	else cout << "0";
	return 0;
}



//18