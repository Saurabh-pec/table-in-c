#include <stdio.h>
#include <stdlib.h>
void  table(int a)
{  
    int i;
    long j;
    for(i=1;i<=10;i++)
	{
   		j=a*i;
    	printf("%d * %d = %d\n",a,i,j);
	}
	
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 { 
 	int a,i,n;
 	printf("how many table you want? ");
 	scanf("%d",&n);
 	for(i=1; i<=n;i++)
 	{
 		printf("Enter a number( for table ): ");
 		scanf("%d", &a);
    	table(a);
	 }
 	
    

   // printf("%d",2);
	return 0;
}
