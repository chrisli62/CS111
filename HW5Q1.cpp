#include <iostream>
using namespace std;
int startBinary(int x){
	if(x<2) return x;
	if(x==2) return 10;
	if(x==3) return 11;
	return startBinary(x/2);
}
int main(){
	int x = startBinary(6);
	cout << x << endl;
	cout << startBinary(23) << endl;
	cout << startBinary( 3) << endl;
	cout << startBinary( 1) << endl;
	return 0;
}
