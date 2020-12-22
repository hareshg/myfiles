#include<iostream>
using namespace std;

void print_subseq(string in, string out) {

	if (in.empty()) {
		cout << out << endl;
		return;
	}

	print_subseq(in.substr(1), out);
	print_subseq(in.substr(1), out + in[0]);
}

int main(int argc, char const *argv[])
{
	string s = "abc", out;
	print_subseq(s, out);
	return 0;
}