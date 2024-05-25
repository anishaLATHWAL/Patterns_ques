// To print the sum of n numbers using for loop....
#include <iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout << "Enter the number : " ;
	cin >> n ;
	for (int i=0;i<=n;i++){
		sum=sum+i;
	}
	cout << "\n" << sum ;
	return 0;
}
