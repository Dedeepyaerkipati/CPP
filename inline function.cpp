#include<bits/stdc++.h>
using namespace std;
inline int add(int a, int b)
{
	return a+b;
	
}
inline int square(int n)
{
	return n*n;
}
inline int cube(int n)
{
	return n*n*n;
}
int main()
{
	int n,a,b;
	cin >> n >> a >> b;
	cout << add(a,b) << endl;
	cout << square(n) << endl;
	cout << cube(n) << endl;
}
