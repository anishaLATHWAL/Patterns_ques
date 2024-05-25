
#include <iostream>
using namespace std;
int main()
{
	int n, nextnum;
	int a=0, b=1;
	cout << "Enter the value of n: " ;
	cin >> n;
	cout << "Fibonacci series is : " << a << " " << b << " ";
	for (int i=0;i<=n; i++){
		nextnum =a+b;
		cout << nextnum << " " ;
		a=b;
		b=nextnum;
	}
	return 0;
}
