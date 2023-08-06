#include <iostream>
using namespace std;



int main() {
	long N,M,X,Y,Z;
	long A[2002];
	cin >> N >> M;
	for (int i = 1; i <= M; i++) {
		cin >> X >> Y >> Z;
		while (Z >= A[X]) A[X] = A[X]+ Z[i-1];
		while ((Z >= A[Y]) || (A[X] >= A[Y])) A[Y] = A[Y] + Z[i-1];
		while (gcd(A[X],A[Y]) != Z) {
			

		}

	}


	return 0;
}