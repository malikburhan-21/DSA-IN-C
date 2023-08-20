#include<iostream>
#include<math.h>
using namespace std  ;
int main()
{
	int sum=0,sum2=0 ,n ,i;
	float a[100],mean,variance,deviation;
	cout<<"enter array size"<<endl;
	cin>>n;
	cout<<"enter array elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	mean=sum/n;
	for(i=0;i<n;i++)
	{
	   sum2=sum2+(mean-a[i]) *	(mean-a[i]);
	}
	variance=sum2/n;
	deviation=sqrt(variance);
	cout<<"mean="<<mean<<endl;
	cout<<"variance="<<variance<<endl;
	cout<<"deviation="<<deviation;
	return 0;
}
