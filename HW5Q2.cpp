#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, count;
	cout<<"Enter an integer n (at most 20): ";
	cin>>n;
	string x[n];
	cout<<"Enter "<<n<<" words: ";
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	int a[n];
	for(int i=0;i<n;i++){
		std::string str(x[i]);
		a[i]=str.length();
		//std::cout<<str.length();
		//cout<<x[i]<<endl;
	}
	for(int i=0;i<n;i++){
		int foo=0;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]) foo++;
		}
		if(foo==0){
			count=1;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]) count++;
			}
			cout<<"Length "<<a[i]<<" : Count "<< count<<endl;
		}
	}
	return 0;
}
