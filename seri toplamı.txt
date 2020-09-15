#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{ 
    int n;
    printf("lütfen eleman sayisini giriniz: ");
    scanf("%d",&n);
    
    float i;
    float toplam = 0;
    for(i=1;i<=n;i++)
    {
    	toplam = toplam + 1/i;	
    	
	}
	printf("%f\n",toplam);
	
    
    return 0; 	
	
}
