       /*c program to print welcome to progrmamming language*/
	#include<stdio.h>
	void main()
	{
	int i,j,m,n,a,b,first[10][10],second[10][10],sum[10][10];
	printf("enter no.of rows and colunms in first matrix");
	scanf("%d%d",&m,&n);
	printf("enter no.of rows and columns in second matrix");
	scanf("%d%d",&i,&j);
	if(n==i)
	{
	printf("enter first matrix elements");
	for(a=0;a<m;a++)
	{
	for(b=0;b<n;b++)
	  {
	  scanf("%d%d",&first[a][b]);
	  }
	}
	printf("enter second matrix elements");
	for(a=0;a<i;a++)
	{
	for(b=0;b<j;b++)
	  {
	  scanf("%d%d",&second[a][b]);
	  }
	  }
	for(a=0;a<m;a++)
	{
	for(b=0;b<j;b++)
	{
	sum[a][b]=first[a][b]+second[a][b];
	printf("sum=",sum[a][b]);
	}
	}

	}
	else
	{
	printf("error");
	}
	 }
