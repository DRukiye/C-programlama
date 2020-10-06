int main(void)
{
	int a;
	printf("lutfen bir sayi giriniz: ");
	scanf("%d",&a);
	
	int i;
	int toplam=0;
	for(i=1;i<=a;i++)
	{
		toplam = toplam+i;			   
	}
    	printf("%d\n",toplam);
    
   	 int carpim=1;
  	  for(i=1;i<=a;i++)
    	{
		carpim *= i;

	}
   	 printf("faktoriyel= %d",carpim);
    
   return 0;
}
