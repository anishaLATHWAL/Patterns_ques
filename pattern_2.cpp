/*  Produce pattern of the type
	111
	222
	333
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
			cout << rows ;
			cols= cols+1;
		}
		cout << endl;
		rows = rows +1;
	}
	return 0;
}
