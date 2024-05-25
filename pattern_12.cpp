#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int rows=1;
	char ch= 'A';
	while (rows <=n )
	{
		int cols = 1;
		while ( cols <= n)
		{
			cout << ch << " " ;
			cols = cols+1;
		}
		cout << endl;
		ch = ch+1;
		rows =rows + 1;
	}
	return 0;
}
