#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	cout <<"Enter the value of a: " << a << " Enter the value of b: " << b << endl ;
	cout << "a & b is " << (a&b) << endl ;
	cout << "a | b is " << (a|b)<< endl ;
	cout << "~a  is " << (~a)<< endl ;
	cout << "a ^ b is " << (a^b)<< endl ;
	return 0;
}
