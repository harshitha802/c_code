#include<stdio.h>
#include<conio.h>
void main()
{
	int max,min,arr[5]={1,4,5,6,7},i;
	clrscr();
	for(i=1;i<5;i++)
	{
	max = arr[0];
	if(arr[i] > max)
	{
		max = arr[i];

	}
	}
	printf("%d",max);
	getch();
}
