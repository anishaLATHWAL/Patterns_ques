/*  Produce pattern of the type
	1
	2 3
	4 5 6
	7 8 9 10
*/
#include <iostream>
using namespace std;
int main()
{
	int n, count=1;
	cin >> n;
	int rows =1;
	while (rows <=n )
	{
		int cols=1;
		while (cols <= rows )
		{
			cout << count << " ";
			count= count+1;
			cols =cols+1;
		}
		cout << endl;
		rows= rows+1;
	}
	return 0;
}
