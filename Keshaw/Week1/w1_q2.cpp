#include <bits/stdc++.h>
using namespace std;

int main(void){
	string seq;
	cin >> seq;
	//char c = seq.begin();
	int max_ = 1;
	int keep = 1;
	for (int i=1; i<seq.length(); i++)
		if (seq[i] == seq[i-1]){
			keep += 1;
			max_ = max(keep, max_);
		} else
			keep = 1;

	cout << max_ << "\n";
}

