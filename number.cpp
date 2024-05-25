#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the value of number : ";
	cin >> num;
	if (num>0){
		cout << "Number is greater than 0";
	}
	else
	{
		if (num<0)
		{
			cout << "Number is less than 0";
		}
		else{
			cout << "Number you entered is equal to zero";
		}
	}
	return 0;
}
