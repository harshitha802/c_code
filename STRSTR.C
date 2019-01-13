       /*c program to print welcome to progrmamming language*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char str[30] = {0},str1[30] = {0};
	clrscr();
	printf("enter a string into str\n");
	gets(str);
	printf("enter a string into str1\n");
	scanf("%[^\n]s",str1);
	if(strstr(str,str1))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	getch();
}