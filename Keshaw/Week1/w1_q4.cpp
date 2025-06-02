#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
	ll num, max;
	cin >> num >> max;
	ll weights[num];
	ll gondola = 0;
	for (int i=0; i<num; i++)
		cin >> weights[i];
	sort(weights, weights+num, greater<int>());

	for (int i=0; i<num; i++){
		if ((weights[i] + weights[num-1] <= max) && not (i == num - 1))
			num -= 1;
		gondola += 1;
	}
	cout << gondola << "\n";
}
