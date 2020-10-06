#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//dizinin toplamı
void dizitoplamibul(int dizi[],int boyut)
{
	int i,toplam =0;
	for(i=0;i<boyut;i++)
	{
		toplam += dizi[i];
	}
	printf("Girilen dizinin toplami = %d\n",toplam);
}

//dizinin elemnlarının çarpımı	
void dizicarpimibul(int dizi[],int boyut)
{
	int i,sonuc=1;
	for(i = 0;i<boyut;i++)
	{
		sonuc = sonuc * dizi[i];
	}
	printf("Girilen dizinin carpimi = %d\n",sonuc);
}

//dizinin girilen elmanlarının en büyüğünü bulma
void enbuyuk(int dizi[],int boyut)
{
	int i,enb;
	enb=dizi[0];
	for(i=0;i<boyut;i++)
	{
		if(dizi[i] > enb)
		{
			enb=dizi[i];
		}
	}
	printf("Dizinin en buyuk elemani = %d\n",enb);
	
}

//dizinin girilen elmanlarının en küçüğünü bulma
void enkucuk(int dizi[],int boyut)
{
	int i,enk;
	enk=dizi[0];
	for(i=0;i<boyut;i++)
	{
		if(dizi[i] < enk)
		{
			enk=dizi[i];
		}
	}
	printf("Dizinin en kucuk elemani = %d\n",enk);
}

//dizinin elemanlarından belirlenen bir sayıya en yakın olan sayıyı bulma
void enyakinsayiyibul(int dizi[],int boyut)
{
	int i,j;
	int yakinsayi;
	
	printf("lutfen bir sayi giriniz: \n");
	scanf("%d",&yakinsayi);
	
	j=abs(yakinsayi-dizi[i]);
	dizi[j]=dizi[0];
	
	for(i=0;i<boyut;i++)
	{
		if(j>abs(yakinsayi-dizi[i]))
		{
			j=abs(yakinsayi-dizi[i]);
			dizi[j]=dizi[i];
		}	
	}
	printf("en yakin sayi %d\n",dizi[j]);

	
	
}

int main()
{
	int n;
	int i;
	 
   do
   {
   	  printf("Kac adet elemanlı bir dizi istersiniz: \n");
   	  scanf("%d",&n);	
   }
   while(n<1 || n>100);
	
	int dizi[n];
	
	for(i=0;i<n;i++)
	{
		printf("%d.inci elemani : ",i+1);
		scanf("%d",&dizi[i]);
	}
	
	dizitoplamibul(dizi,n);
	dizicarpimibul(dizi,n);
	enkucuk(dizi,n);
	enbuyuk(dizi,n);
	enyakinsayiyibul(dizi,n);

	return 0;	
}
