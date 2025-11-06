#include<bits/stdc++.h>
using namespace std;
void testfunction(){
	try{
		cout << "inside test function()\n";
		throw 10;
	}
	catch(int x)
	{
		cout <<"exceptional caugh inside testfunction():" << x << endl;
		throw;
	}
}
int main()
{
	try{
		testfunction();
		
	}
	catch(int x)
	{
		cout <<"exceptional caugh in main():" << x << endl;
	}
	return 0;
}
