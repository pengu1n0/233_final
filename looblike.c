#include<stdio.h>
int main()
{
	int n,i,m;
	scanf("%d",&n);
	int A[1000]={0},max=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		A[m]+=1;
	}
	for(i=0;i<1000;i++)
	{
		if(max<A[i])
		{
			max=A[i];
		}
	}
	for(i=0;i<=1000;i++)
	{
		if(max==A[i])
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
