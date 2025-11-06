#include<bits/stdc++.h>
using namespace std;
template <class T>
bubble(T arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				T temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
template<class T>
void display(T arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		
	
		cout <<arr[i]<<" "  ;
	}
}
int main()
{
	int arr1[]={ 10,20,3045,50,34535,3454,80};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int arr2[]={ 2.3,3.4,5.67,76.776,45.45,2371873.23,23.34,54.67,67.45};
	int n2=sizeof(arr2)/sizeof(arr2[0]);
	cout <<"before sorting:" << endl;
	display(arr1,n1);
	bubble(arr1,n1);
	cout <<"after sorting:" << endl;
	display(arr1,n1);
	cout <<"before sorting" <<endl;
	display(arr2,n2);
	bubble(arr2,n2);
	cout <<"after sorting:" << endl;
	display(arr2,n2);

	
}
