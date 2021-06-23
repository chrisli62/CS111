#include <iostream>
using namespace std;

int Fibonacci(int n){ // Fibonacci sequence
	if(n<=1){
		return n;
	}
	return Fibonacci(n-1)+Fibonacci(n-2);
}

bool isPrime(int a){ // Check for prime number
	if(a<2) return false;
	if(a==2) return true;
	for(int i=2;i<a;i++){
		if((a%i)==0){
			return false;
		}
	}
	return true;
}

int main(){
	int i=0, counter_fib=0;
	while(true){
		if(counter_fib==5) break;
		int fib_val=Fibonacci(i);
		if(isPrime(fib_val)){
			cout<<fib_val<<" ";
			counter_fib++;
		}
		i++;
	}
	cout<<endl;
	return 0;
}
