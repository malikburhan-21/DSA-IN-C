#include<iostream>
using namespace std  ;
int main()
{
	int a[100],size,n,i,count=0 ;
	cout<<"enter array size"<<endl;
	cin>>size;
	cout<<"enter array elements";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"enter any element of array to know its frequency"<<endl;
	cin>>n;
	
	for(i=0;i<size;i++)
	{
		if(a[i]==n)
		{
			count++;
		}
	}
	cout<<"entered number"<<n<<" occured"<<ends<<count<<ends<<"times in array"<<endl;
	return 0;
}

