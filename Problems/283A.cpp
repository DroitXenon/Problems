#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
long s[200005];
int main() {
	long i,j,n,a,x,t,k,len;
	double ans,result;
	cin >> n;
	s[0] = 0;
	len = 1;
	ans = 0;
	cout << fixed << setprecision(6);
	for (i = 1; i <= n; i++) {
		cin >> t;
		if (t == 1) {
			cin >> a >> x;
			for (i = 0; i <= a; i++)
				s[i] =s[i] + x;
			ans += a*x;
			result = ans / len;

			cout << result<<endl;
			
		}
		else if (t == 2) {
			cin >> k;
			s[len+1] =k;
			len++;
			ans = ans + k;
			result = ans / len;
			cout << result<<endl;
			
		}
		else if (t == 3) {
			ans -= s[len]; 
			s[len] = 0;
			len--;
			result = ans / len;
			cout << result<<endl;
			
		}
	
	}
	
	return 0;
}