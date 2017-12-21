#include <stdio.h>
int factorial (int x)
{
    int c = 0 ;
    x=x-1;
    for (;x>0;x--)
    {
        c=c+x;
        
    }
    return c;
}
int c = 0 ;
int factorial1 (int x)
{
	if ( x > 0 )
	{
		x=x-1;
		c=c+x;
	
		x=factorial1(x);
		
		
		
		
	}
	else
	{
		return x;
	}
	
return  c;
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
int factorial (int x);
int main(){

        
        	int num = 0;
	int num1 = 0 ; 
	///////////////////////////////////////////////////
	for ( num = 3 ; num < 10 ; num ++)
	{
        if(num == 1)
        {
            printf("1 \n");
            continue;
            
        }
        if(num == 3)
        {
            printf("2 1 3 \n");
            continue;
            
        }
	int max = num-1+factorial1(num-1) ; 
	c=0;
        b=0;
	//printf("range of %d is %d \n",num , range(num));
	int minimum = 0 ;
	if(range(num) == -1 ) { 
		minimum = num-1+min(num-1);
		}
	else {  minimum= range(num) ; }
	
	
	printf (" num  = %d \n",num);
	for (  num1 = minimum -1 ; num1 < max+2 ; num1 ++)
	{
	printf (" num 1 = %d \n",num1);
	int R = num - 2 ; 
	
	if(num1 >max || num1 < minimum )
    {
        printf("-1");
        continue;
    }
	
	
	int omar [num];
	//Dont forget to check if the input of the num1 between the range of min and max
	int dif = max - num1 ; 
	
	int o = 0 ;
	int i = 0 ; 
	for ( i = num ; i>0;i--)
	{
		omar[i] = i ; 
		
	}

		
	i=num;
	for ( ;;)
	{
		a:;
        
		if(dif<R && dif==i-1 && dif!=0) 
		{
			omar[i]=omar[i+1];
			omar[i+1]=i;
			
		}
		if(i==0)
		break;
		b:;
		if (dif<=R*3 && dif!=0 &&dif>=R )
		{
					
			dif=dif-R+o;
			o=o+1;
			R=R-o;
			
				
			goto b;
		
		} 
		
		else
		{
				omar[num]=num-o;
			omar[num-o]=num;
			
			
		i--;
			goto a;
		}
		
		
	}
	
	for ( i = num ; i>0;i--)
	{
		printf("%d ",omar[i]);
	}
        printf("\n");
}

}


}


