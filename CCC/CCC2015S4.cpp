#include<iostream>
using namespace std;

int K, N, M,max,t;
int a[10002], b[10002], t[10002], h[10002];
void crea(int a, int b) {
	int j;
	if (K <= 0) {
		exit;
	}
	if (b[j] == b) {
		max = t;
		t = 0;
	}
	for (j = 1; j <= M; j++) {
		if (a[j] == a){
			K = K - h[j];
			t = t + t[j];
			crea(b[j], b);
	}
		K = K + h[j];
		t = t - t[j];
}
	
	int main() 
	{
	cin >> K >> N >> M;
	for (int i = 1; i <= M; i++) {
		cin >> a[i] >> b[i] >> t[i] >> h[i];
	}
	cin >> st >> ed;
	crea(st, ed);
	cout << max;
	return 0;
}