/* produce pattern
	A
	B C
	D E F
	G H I J
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int rows=1;
	char ch='A';
	while (rows<=n)
	{
		int cols=1;
		while (cols <=rows)
		{
			cout << ch << " ";
			cols= cols +1;
			ch= ch+1;
		}
		cout << endl;
		rows = rows+ 1;
	}
	return 0;
}
