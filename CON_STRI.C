#include<stdio.h>
#include<conio.h>
void main()
{
	int len;
	char str1[10]= {0},str2[10]= {0},str3[10]= {0};
	int i;
	clrscr();
	scanf("%s%s",str1,str2);
	for(i=0;str1[i]!='\0';i++)
	{
		len=i;
	}
	for(i=0;i<len;i++)
	{
	  str3[i]=str1[i];
	  if(i==len)
	  {
	  str3[i]=str2[i];
	  }
	}  printf("%c",str3);
	getch();
}
