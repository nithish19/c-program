#include <stdio.h>
#include <conio.h> 
void main(void) 
{
	int n,m,pro;
  clrscr();
	printf("enter the number1:");
	scanf("%d",&n);
	printf("\nenter the number2:");
	scanf("%d",&m);
	pro=n*m;
	if(pro%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
  getch();
	return 0;
}
 
