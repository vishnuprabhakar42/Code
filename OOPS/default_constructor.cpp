
#include <iostream>
using namespace std;
 
//Class Name: Default_construct
class Default_construct
{
public:
	int a, b;

	// Default Constructor(Vishnu Prabhakar)
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
}
