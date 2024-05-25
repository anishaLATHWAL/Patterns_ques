/*  Produce pattern of the type
	1 2 3 4
	1 2 3 4
	1 2 3 4
	1 2 3 4
*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int rows=1;
	while (rows<=n){
		int cols =1;
		while (cols<=n){
			cout << cols ;
			cols=cols+1;
		}
		cout << endl;
		rows = rows + 1;
	}
	return 0;
}



