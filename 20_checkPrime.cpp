#include <iostream>
using namespace std;
int main()
{
	int n ;
	cout << "Enter the number: " ;
	cin >> n;
	for (int i=2;i<n;i++){
		if (n%i==0){
			cout << "Not a prime number";
			break;
		}
		else {
			cout << "It is a prime number.";
		}
	}
	return 0;
}
