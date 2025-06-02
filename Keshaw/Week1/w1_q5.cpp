#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long num;
	cin >> num;
	cout << num << " ";
	while (num != 1)
		if (num % 2 == 0){
			num /= 2;
			cout << num << " ";
		} else {
			num = num * 3 + 1;
			cout << num << " ";
		}
	
	// cout << num << "\n";
}
