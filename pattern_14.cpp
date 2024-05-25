/* produce pattern
	A B C
	B C D
	C D E
*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int rows=1;
	while (rows <=n )
	{
		int cols = 1;
		
		while ( cols <= n)
		{
			char ch='A'+rows + cols-2;
			cout << ch << " " ;
			cols = cols+1;
		}
		cout << endl;
		rows =rows + 1;
	}
	return 0;
}
