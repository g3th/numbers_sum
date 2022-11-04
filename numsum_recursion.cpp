#include <iostream>
using namespace std;

// method using recursive function

int DigitSum(int n1){
	
	if (n1 == 0){
		return 0;
	}
	int n2 = n1 % 10;
	n1 = n1 / 10;
	int sum = n2 + DigitSum(n1);
	return sum;
}

int main(){
	int n1 =0;
	cout << "Enter number to add digits: ";
	cin >> n1;
	cout << DigitSum(n1) << endl;
}
