//21BCA69 :- pattern 3

#include<stdio.h>
#include<conio.h>
 void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
	 for(k=1;k<=5;k++)
	 {
	    printf(" ");
	 }
	 for(j=i;j>=1;j--)
	 {
	    printf(" %d",j);
	 }
	  printf("\n");
	}
	getch();
}