//#include <iostream>
//using namespace std;
//class GFG
//{
//	private:
//	int private_var;
//	
//	protected:
//	int protected_var;
//	
//	public:
//	GFG()
//	{
//		private_var=10;
//		protected_var= 99;
//	}		
//	
//	friend class f;
//};
//
//class f{
//	public:
//		void display(GFG& t){
//			cout << "The value of private variables= " << t.private_var <<endl;
//			cout << "The value of protected variables= " << t.protected_var <<endl;
//		}
//};
//
//int main()
//{
//	GFG g;
//	f fri;
//	fri display(g);
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//	int x=7;
//	int *p;
//	int **pp;
//	p= &x;
//	
//	cout << p << endl;
//	cout << &x << endl;
//	cout << *p << endl;
//	cout << *(&x) <<endl;
//	cout << sizeof(p) <<endl;
//	cout << &p << endl;
//	
//	cout << pp << endl;
//	cout << &pp <<endl;	
//	return 0;
//}


#include <iostream>
using namespace std;
struct emp
{
	int id;
	string name;
	float fee;
}s;
int main()
{
	struct emp *e;
	e->id = 100 ;
	e->name = "cse" ;
	e->fee = 345.678;
	cout << "ID" <<e->id << endl;
	cout << "Name" << e->name << endl;
	cout << "Fee" << e->fee << endl;
}
























