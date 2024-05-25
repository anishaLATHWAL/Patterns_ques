#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number: " ;
	cin >> n;
	cout << "The numbers from 1 to n are : " << endl;
	for(int i=0 ; i>=n; i--){
		cout << i << endl;
	}  
	
 	// we can also write multiple initialisation, conditions and updations....
 	for (int a=0, b=1; a>=0 && b>=1; a--,b--)
 	{
 		cout << a << " " << b << endl;
	}
	return 0;
}
