#include <iostream>

typedef long long ll;
using namespace std;

int main(void){
	ll len;
	cin >> len;
	bool arr[len] = {0};
	ll num;
	for (ll i=0; i<len-1; i++){
		cin >> num;
		arr[num-1] = 1;
	}
	for (ll i=0; i<len; i++){
		if (arr[i] == 0){
			cout << i+1 << "\n";
			break;
		}
	}
}

