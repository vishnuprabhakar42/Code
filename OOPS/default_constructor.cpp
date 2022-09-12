
#include <iostream>
using namespace std;
 
//Class Name: Default_construct
class Default_construct
{
public:
	int a, b;
							
	// Default Constructor(
	// MY name is shobhit sing and today i am updating this
	// what dou you think about this0)
	Default_construct()
	{
		a = 100;
		b = 200;
	}
};
 
int main()
{
	Default_construct con;  //Object created
	cout << "Value of a: " << con.a;
        cout<< "Value of b: " << con.b;
	return 0;
	// I am doing all these things for testing purpose
	// and i am also exploring all these things like version control
}
