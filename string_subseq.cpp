#include<iostream>
using namespace std;

int sub_seq(string s, string out[]) {

	if (s.empty()) {
		out[0] = "";
		return 1;
	}

	string small = s.substr(1);
	int smallSize = sub_seq(small, out);

	for (int i = 0; i < smallSize ; i++) {
		out[i + smallSize] = s[0] + out[i];
	}
	return 2*smallSize;
}


int main() {
	string s = "abc";

	string* out = new string[100];

	cout << sub_seq(s, out) << endl;

	for(int i=0; i < sub_seq(s, out) ; i++){
		cout << out[i] << endl;
	}
}