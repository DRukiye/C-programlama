#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int eleman,i;
	int s[100];
	
    printf("dizinin eleman sayisini giriniz: ");
    scanf("%d",&eleman);
    
    printf("dizinin elemanlarini giriniz: \n");
    for(i=0;i<eleman;i++)
    {
    	scanf("%d",&s[i]);
	}
    
    int max;
    max=s[0];
	for(i=0;i<eleman;i++)
	{
		if(s[i]>max)
		{
			max=s[i];
		}
		
	}
	printf("Dizinin en buyuk elemani = %d\n",max);
	
	int min;
	min=s[0];
	for(i=0;i<eleman;i++)
	{
		if(s[i]<min)
		{
			min=s[i];
		}	
	}
	printf("Dizinin en kucuk elemani = %d\n",min);
	
    return 0;		
	
}
