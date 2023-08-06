#include<iostream>
using namespace std;
int main() {
	int T, G, A, B, Sa, Sb,sum;
	int score[10], times[10];
	cin >> T>>G;
	for (int i = 1; i <= 4; i++) times[i] = 3;
	//memset(times, 0, sizeof(times));
	memset(score, 0, sizeof(score));
	//cout << times[T] << score[T];
	for (int i = 1; i <= G; i++) {
		cin >> A >> B >> Sa >> Sb;
		if (Sa > Sb) {
			score[A] += 3;
		}
		else if (Sa < Sb) {
			score[B] += 3;
		}
		else {
			score[A]++;
			score[B]++;
		}
		times[A]--;
		times[B]--;
	}
	//cout << times[T] << score[T];

	if ((times[T] == 0) && (score[T] <= 3)) cout << "0";
	if (score[T] == 9) cout << (6 - G) * 3;
	sum = (6 - G) * 3;
	for (int i = 1; i <= 4; i++) {
		if (i != T) {
			if (times[i] * 3 + score[i] >= score[T] || times[i] * 1 + score[i] >= score[T]) sum-=times[i];
		}
	}
	cout << sum;
	return 0;
}
