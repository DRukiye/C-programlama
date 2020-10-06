#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	printf("Kac elemanli fibonacci dizisi olusturlsun? \n");
	scanf("%d",&n);
	
	int birincisayi=0;
	int ikincisayi=1;
	int ucuncusayi=1;

	
	printf("%d\n%d\n%d\n",birincisayi,ikincisayi,ucuncusayi);
	
	int i;
	for(i=0;i<= n;i++)
	{
		
	   int temp= ucuncusayi;
	   ucuncusayi += ikincisayi;
	   ikincisayi=temp;	
	   
	   printf("%d\n",ucuncusayi);
	   
	}
	
    return 0;	
	
}
