	#include <stdio.h>
#include <stdlib.h>


int main(void)
{ 
 
    int s[8];
	int eleman=8;
	int i;
	int sonuc=0;
	
	printf("dizinin elemanlarini giriniz: \n");
    for(i=0;i<eleman;i++)
    {
    	printf("%d.inci sayı giriniz: ",i+1);
    	scanf("%d",&s[i]);
    }
    	for(i=0;i<eleman;i++)
    	{
    			if((s[i]%2==0))
    	       {
    	       	printf("1");
    	       	s[i]=0;
	            sonuc=s[7]*128+s[6]*64+s[5]*32+s[4]*16+s[3]*8+s[2]*4+s[1]*2+s[0]*1;
	        	
		       }
			   else
		       { 
		       printf("0");
		        s[i]=1;
		        sonuc=s[7]*128+s[6]*64+s[5]*32+s[4]*16+s[3]*8+s[2]*4+s[1]*2+s[0]*1;	        	
	           }
			   		  
		}
		printf("\n");
		printf("%d\n",sonuc);
		
 
}
