// Li_Christopher_CS111_HW2

#include <iostream>
using namespace std;

int main(){
	int number;
	cout << "Please input the size of file in KB: ";
	cin >> number;
	int k, m, g; // KB, MB, Gb wanted
	
	g = number/(1000*1000);
	number = number % (1000*1000);
	m = number / 1000;
	k = number%1000;
	
	cout << "Your file's size is " << g << "GB, " << m << "MB, "
		<< k << "KB.";
	cout << endl;
	return 0;
}
