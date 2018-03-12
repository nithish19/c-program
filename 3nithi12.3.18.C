#include <stdio.h>
#include <conio.h> 
void main(void) 
{
	int num,temp,sum=0;
  clrscr();
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		temp=num%10;
		sum=sum+temp;
		num=num/10;
 
	}
	printf("\n%d",sum);
  getch();
	return 0;
}
