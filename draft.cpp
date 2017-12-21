#include <stdio.h>
int actions [50];
int o = 0;
int i = 0 ;
int ss = 0 ;
int save = 0;
int dif1=0;
int R1 = 0 ;
void generate(int dif,int R)
{
	printf(" dif = %d , R = %d , i = %d , o = %d \n",dif,R-o,i,o);
	if(dif >=R-o && (R-o)>0)
	{
		actions[i]=R-o;
		dif=dif-(R-o);
		o=o+2;
		i++;
		generate(dif,R);
	}
	else if( R-o <= 0 )
	{
		ss++;
		for(int ii = 0 ; ii <10; ii++)
	{
		actions[ii]=0;
	//	printf(" Actions [%d] = %d \n",ii,actions[ii]);
	}
		if(ss==1)
		{
		actions[0]=R1+R1-2;
		dif=dif1-(R1+R1-2);
		
		o=1; 
		R=R1-2;

		i=1;
		}
	else if (ss==2)
	{
		int ggg ; 
		//scanf("%d",&ggg);
		actions[0]=R1+R1+R1-2-4;
		dif=dif1-(R1+R1+R1-2-4);
		
		o=1; 
		R=R1-2;

		i=1;
		printf(" dif = %d , R = %d , i = %d , o = %d \n",dif,R-o,i,o);
		
		//scanf("%d",&ggg);
	}
		generate(dif,R);
	
		
	}
	else if ( dif > 0)
	{
		actions[i]=dif;
		i++;
		
	}
	
}




int main () 
{
	for(int ii = 0 ; ii <10; ii++)
	{
		actions[ii]=0;
		printf(" Actions [%d] = %d \n",ii,actions[ii]);
	}
	dif1=70;
	R1=15;
	generate (dif1,R1);
	for(int ii = 0 ; ii <10; ii++)
	{
		printf(" Actions [%d] = %d \n",ii,actions[ii]);
	}
}
