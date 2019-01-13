#include<stdio.h>
#include<conio.h>

void main()
{
	int mat1[2][2],mat2[2][2],i,j,mat3[2][2];
	clrscr();
	printf("Matrix1\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Matrix2\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
					}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		       printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	}
	getch();
}


