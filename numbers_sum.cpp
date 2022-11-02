#include <iostream>
#include <vector>
using namespace std;

vector<int> digitSum(int);


int main () {

	int num = 0;
	int sum = 0;
	int number = 0;
	cout << "Enter a number to get its sum: ";
	cin >> number;
	vector<int> digits = digitSum(number);
	cout << "\nResult of ";
	for (int x = 0; x < digits.size(); ++x){
		sum = sum + digits[x];
		cout << digits[x];
		if ( x < digits.size()-1){
			cout << " + ";
		}
	}
	cout << " = " << sum << "\n\n";
}	


vector<int> digitSum(int num){

	int x =0;
	string num_to_string = to_string(num);
	int str_size = num_to_string.size();
	char store_string[str_size];
	vector<int> int_list;	
	
	for (int x = 0; x < num_to_string.size(); ++x){
		store_string[x] = num_to_string[x] - '0';
		int_list.push_back(num_to_string[x] - '0');
	}

	return int_list;
}

