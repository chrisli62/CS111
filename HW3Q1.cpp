#include <iostream>
using namespace std;

int gcd(int a, int b){ //greatest common divisor
	int greatest;
	for(int n=1;n<=a && n<=b;n++){
		if(a%n==0 && b%n==0){
			greatest=n;
		}
	}
	return greatest;
}
int main(){
	cout<<"The greatest common divisor of 17 and 23 is "
		<<gcd(17, 23)<<endl;
	cout<<"The greatest common divisor of 56 and 63 is "
		<<gcd(56, 63)<<endl;
	cout<<"The greatest common divisor of 102 and 99 is "
		<<gcd(102, 99)<<endl;
	cout<<"The greatest common divisor of 1 and 2 is "
		<<gcd(1, 2)<<endl;
	return 0;
}
