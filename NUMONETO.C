#include<stdio.h>
#include<conio.h>
void main()
{
int num=0,i=0,sum=0;
clrscr();
printf("Enter the number");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
	sum+= i;

}
printf("The Sum Of N Number is %d \n",sum);
getch();
}
