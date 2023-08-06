#include <iostream>
using namespace std;
int main() {
	int N;
	string name[32];
	string partner[32];
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> name[i];
	}
	for (int i = 1; i <= N; i++) {
		cin >> partner[i];
		if (partner[i] == name[i]) {
			cout << "bad";
			return 0;
		}
	}
	for (int i=1;i<=N;i++)
		for (int j = 1; j <= N; j++) {
			if (name[i] == partner[j]) 
				if (name[j] != partner[i]) {
					cout << "bad";
					return 0;
			}
		}
	cout << "good";
	return 0;
}