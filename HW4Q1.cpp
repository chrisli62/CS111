#include <iostream>
using namespace std;

int twos(int n){
	if(n==0) return 0;
	if(n%2==1&&n!=2) return twos(n/10);
	return twos(n/10)*10+n%10;
}

int main(){
	cout<<twos(23)<<endl; // prints 2
	cout<<twos(1212)<<endl; // prints 22
	cout<<twos(777)<<endl; // prints 0, because nothing is left
	return 0;
}
