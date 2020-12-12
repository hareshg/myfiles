#include <iostream>
#include <cstring>
using namespace std;


int stringToInt(string s){
	int ans = 0, p =1;
	for(int i=s.length()-1; i >=0 ; i--){
		ans += ((s[i] - '0') * p);
		p *= 10;
	}
	return ans;
}

int main() {

	char a[] = "199";

	cout << stoi(a) << endl;
	cout << stringToInt(a) << endl;




	return 0;
}