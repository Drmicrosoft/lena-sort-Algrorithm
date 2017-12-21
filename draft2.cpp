#include <stdio.h>
int num = 9 ;
int c [9];
int x [9-1];
int i = 0 ; 
int j = 0 ;
int max = 36;
int minimum = 17;
int num1= 36 ; 
int dif = 0 ;
int case1 = 0;

int main () 
{
	for ( i = 8 ; i>=0 ; i--)
	{
		c [i] = i+1 ;
	}
	for ( i = 7 ; i>=0 ; i--)
	{
		x [i] = i+1 ;
	}
	dif = max - num1;
	j=2;
	i=num-j;
			printf(" dif = %d , i = %d , j = %d , case = %d dif-i = %d \n",dif,i,j,case1 , dif-i);
		
	for(;;)
		if(dif-i > 0)
		{
			if(j==2)
			j++;
			j++;
			dif = dif-i;
			i=num-j;
			case1++;
			printf(" dif = %d , i = %d , j = %d , case = %d dif-i = %d \n",dif,i,j,case1 , dif-i);
		}
		else break;
		if(case1==0)
		{
			c[num-1] = num;
		}
		else if(case1==1)
		{
			c[num-1] = num-1;
			c[num-2] = num;
		}
		else if(case1==2)
		{
			c[num-1] = num-2;
			c[num-2] = num-1;
			c[num-3] = num;
		}
		else if(case1==4)
		{
			c[num-1] = num-3;
			c[num-2] = num-2;
			c[num-3] = num-1;
			c[num-4] = num;
		}
		
		else if(case1==5)
		{
			c[num-1] = num-4;
			c[num-2] = num-3;
			c[num-3] = num-2;
			c[num-4] = num-1;
			c[num-5] = num;
		}
		
		
		else if(case1==6)
		{
			c[num-1] = num-5;
			c[num-2] = num-4;
			c[num-3] = num-3;
			c[num-4] = num-2;
			c[num-5] = num-1;
			c[num-6] = num;
		}
		
		printf("case = %d ",case1);
		
		for (i=1;i<100;i++)
		if(dif==i)
		{	
			c[i] = i+2;
			c[i+1] = i+1;
			printf(" c[%d] = %d , c[%d] = %d ",i , i+2 , i+1 , i+1 );
		}
		
		for ( i = 8 ; i>=0 ; i--)
	{
		printf("\nc [%d] = %d ",i,c[i]);
	}
	
			
}
	

