#include <stdio.h>

void done ();
int factorial (int x)
{
    int cc = 0 ;
    x=x-1;
    for (;x>0;x--)
    {
        cc=cc+x;
        
    }
    return cc;
}
int cc = 0 ;
int factorial1 (int x)
{
	if ( x > 0 )
	{
		x=x-1;
		cc=cc+x;
	
		x=factorial1(x);
		
		
		
		
	}
	else
	{
		return x;
	}
	
return  cc;
}

int range (int a );
int b = 0 ; 
int v[5] = {2,4,6,8,10};
int min (int y )
{
	if(range(y) != -1)
	return range(y) ;
	int m , n ; 
	int a , b = 0 ;
	a = y / 2 ; 
	if( y % 2 == 1)
	b = (y/2) +1 ; 
	else 
	b = y/2 ; 
	m = range(a);
	n = range(b);
	if ( m == -1 )
	m = min(a);
	if ( n == -1)
	n = min (b);
	return m+n;
	
	
	//printf("%d",y);
}

int range (int a )
{
	if (a < 8 && a > 2 )
	{
		return v[a-3];
	}
	else 
	return -1;
	
}



int done (int num , int num1)
{
	
int c [num];
int x [num-1];
int i = 0 ; 
int j = 0 ;
cc=0;
int minimum = 0 ;
	if(range(num) == -1 ) { printf("min of %d %% %d\n",num,num-1+min(num-1));
		minimum = num-1+min(num-1);
		}
	else { printf("range of %d is %d \n",num , range(num)); minimum= range(num) ; }
int max = num-1+factorial1(num-1) ; 

	if(num1 >max || num1 < minimum )
    {
        printf("-1");
        return 0;
    }
	
int dif = 0 ;
int case1 = 0;
	for ( i = num-1 ; i>=0 ; i--)
	{
		c [i] = i+1 ;
	}
	for ( i = num-2 ; i>=0 ; i--)
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
		
		if(case1==i)
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
		
		for ( i = 7 ; i<1000000 ; i++)
		if(case1==i)
		{
			for( j=1;j<=i;j++)
			c[num-j]=num-i-j;
			break;
		}
		
		printf("case = %d ",case1);
		
		for (i=1;i<100;i++)
		if(dif==i)
		{	
			c[i] = i+2;
			c[i+1] = i+1;
			printf(" c[%d] = %d , c[%d] = %d ",i , i+2 , i+1 , i+1 );
		}
		int total = 0 ;
		for ( i = num-1 ; i>=0 ; i--)
	{
		printf("\nc [%d] = %d ",i,c[i]);
		
	}
	
			return 0 ;
		}




int main(){
//49 1170
        
        	int num = 48;
        	int num1 = 430;

	///////////////////////////////////////////////////
	
	
		done(num,num1);
	
}
