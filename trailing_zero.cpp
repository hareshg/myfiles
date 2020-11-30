#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int n = 100;

	int pow = 5, sum = 0;

	while(n/pow != 0){
		sum = sum + n/pow;
		pow *= 5;
	}
	cout << sum  << endl;

	return 0;
}
