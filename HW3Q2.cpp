#include <iostream>
using namespace std;

void print(int size, int num){
	if(size%2==1){
		size=(size/2)+1;
	}
	for(int n=1;n<=num;n++){
		for(int r=1;r<=size;r++){
			for(int c1=size-r;c1>=1;c1--){
				cout<<" ";
			}
			for(int c2=1;c2<=2*r-1;c2++){
				cout<<"*";
			}
			cout<<"\n";
		}
		for(int r=size-1;r>=1;r--){
			for(int c1=1;c1<=size-r;c1++){
				cout<<" ";
			}
			for(int c2=1;c2<=2*r-1;c2++){
				cout<<"*";
			}
			cout<<"\n";
		}
	}
	return;
}

int main(){
	int size;
	int num;
	do{
	cout<<"Enter an odd positive number of rows and a positive number: "; 
		cin>>size>>num;
	}while(size<0 || size%2==0 || num<0);
	print(size,num);
	cout<<endl;
	return 0;
}
