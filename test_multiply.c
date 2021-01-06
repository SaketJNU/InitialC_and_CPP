#include<stdio.h>    
#include<stdlib.h>  
void main(){  
int a[10][10], b[10][10], mul[10][10],r,c,i,j,k;    
system("cls");  
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter the second matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("multiply of the matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j] = mul[i][j] + a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
printf("\nEntered first matrix is ____________\n");
	for(i=0; i<r ; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("\t%d", a[i][j]);
			}
			printf("\n");
		}

printf("\nEntered second matrix is ____________\n");
		for(i=0; i<r ; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("\t%d", b[i][j]);
			}
			printf("\n");
		}
printf("\nThere multiplication is __________-\n");
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}     
}
