int main(void)
{
		char s;
	
	printf("lutfen bir harf giriniz: ");
	scanf("%c",&s);

	//int c = (int) s;
	
	printf("%d\n",c);
	
	if(c>96 && c<123)
	{
		c = c - 96;
		printf("%d",c);
	}
	else if(c>64 && c<91)
	{
		c = c - 64;
		printf("%d",c);
	}
	else
	{
		printf("Hatalı Giriş");
	}
}
