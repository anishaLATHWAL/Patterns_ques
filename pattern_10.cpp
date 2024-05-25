/*  Produce pattern of the type
	1
	2 3
	3 4 5
	4 5 6 7
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int rows =1;
	while (rows <=n )
	{
		int cols=1;
		int count= rows;
		while (cols <= rows )
		{
			cout << count << " ";
			cols =cols+1;
			count = count+1;
		}
		cout << endl;
		rows= rows+1;
	}
	return 0;
}
