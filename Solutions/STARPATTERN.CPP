//21BCA11 :- PATTERN 2 // plese give exaple like n=2 print *
							   * *

#include<stdio.h>
#include<conio.h>
 void main()
{
	int i,j;
	clrscr();
	for(i=5;i>=0;i--)
	{
	  for(j=0;j<=i;j++)
	  {
	     printf("* ");
	  }
	printf("\n");
	}
	getch();
}
