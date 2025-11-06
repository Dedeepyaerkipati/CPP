#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	try{
		if(b==0)
		{
			throw " division by zero is not allowed!" ;
			
		}
		else
		{
			cout << "result=" << a/b << endl;
		}
	}
	catch(const char* msg)
	{
		cout << "exception caugh: " << msg <<endl;
	}
	
	
}
