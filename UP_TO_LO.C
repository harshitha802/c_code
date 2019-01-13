#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char str[10] = {0};
	clrscr();
	printf("enter string values");
	scanf("%s",str);
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
		str[i]=str[i]+32;
		}
		else
		{
		str[i]=str[i]-32;
		}
	 }
	 printf("%s",str);
	 getch();
}