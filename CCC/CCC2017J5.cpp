#include<iostream>
using namespace std;
int l[1000005];
bool u[1000005];
int main() {
	int n,i,j,i1,i2,j1,j2,k,max,sum;
	//memset(u, 0 , sizeof(u));
	cin >> n;
	max = 1;
	sum = 1;
	k = 1;
	for (i = 1; i <= n; i++) {
		cin >> l[i];
		u[i] = false;
	}
	for (i=2;i<=n;i++)
		for(j=n;j>=i;j--)
			if (l[j] > l[j - 1]) {
				swap(l[j], l[j - 1]);
			}
	for (i1 = 1; i1 < n; i1++)
		for (j1 = n; j1 >= i1 + 3; j1--){
			for (i2 = i1 + 1; i2 <= j1 - 2; i2++)
				for (j2 = j1 - 1; j2 > i2; j2--)
					if ((l[i1] + l[j1] == l[i2] + l[j2]) && (!u[i2]) && (!u[j2])) {
						sum++;
						//l[i1] = true;
						//l[j1] = true;
						u[i2] = true;
						u[j2] = true;
						//cout << i1 << j1 << i2 << j2;
						break;
					}

			if (sum = max) {
				k++;
				sum = 1;
			}
			else if (sum > max) {
				max = sum;
				sum = 1;
				k = 1;
			}
			else sum = 1;
			}
	cout << max<<k;	
	return 0;
}


	