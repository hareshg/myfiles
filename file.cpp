#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	
		int n=10,i,j;
		for(i=1;i<=n;i++){
			int num=1;
			for(int spaces = 1;spaces<=(n-i+1);spaces++)
			      cout << " ";
			for(j=1;j<=i;j++){
				if(j==1)
					cout << j << " ";
				else{
					num=num*(i-j+1)/(j-1);
					cout << num << " ";
				}
			}
			cout << endl;
		}
			
	return 0;
}