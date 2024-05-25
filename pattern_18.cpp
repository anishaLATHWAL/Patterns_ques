#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int rows=1;
	while (rows<=n)
	{
		int space= n-rows;
		while (space)
		{
			cout << " ";
			space= space-1;
		}
		int cols=1;
		while (cols<=rows)
		{
			cout << "*" ;
			cols=cols+1;
		}
		cout << endl;
		rows= rows+1;
	}
	return 0;
}
