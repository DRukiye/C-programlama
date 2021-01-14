#include <stdio.h>
#include <stdlib.h>


#include <dos.h>
void matrisiyazdir(char labirent[10][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
		   printf("\t%c",labirent[i][j]);
		}
		printf("\n");
	} 
}

void matrisiolustur(char labirent[][10],int n)
{
	int i,j;
	int x=0;
	int y=1;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			labirent[i][j]='1';		
		}
		labirent[x][y]='0';
		labirent[x][x]='0';
		x++;
		y++;
	}
	labirent[0][0]='X';
	labirent[n-1][n-1]='C';
	labirent[9][8]='0';
}


int main()
{
	char labirent[10][10];	
	matrisiolustur(labirent,10);					
	matrisiyazdir(labirent,10);	
		
	
	int weidth=0;
	int height=0;

	while(labirent[9][9] =! 'X')
	{
		printf("\nistediğiniz bşr hareket tusu giriniz: ");
		getch();
		system("cls");
	
		switch(getch())
		{
			case 72:	
						
				if(labirent[weidth-1][height] != '1')
				{
					if(labirent[weidth-1][height] == '0')
					{
						labirent[weidth-1][height]='X';
						labirent[weidth][height]='0';
						weidth--;
					}
					else
					{
						printf("\ncıkısa vardiniz\n");
						break;
					}		
				}
				else
				{
					printf("\nileri gidemezsiniz duvar var\n");
				}
				break;		
			case 75:
				
				if(labirent[weidth][height-1] != '1')
				{
					if(labirent[weidth][height-1] == '0')
					{
						labirent[weidth][height-1]='X';
						labirent[weidth][height]='0';
						height--;
					}
					else
					{
						printf("\ncıkısa vardiniz\n");
						break;
					}
				}
				else
				{
					printf("\nileri gidemezsiniz duvar var\n");
				}
				break;		
			case 77:
				
				if(labirent[weidth][height+1] != '1')
				{
					if(labirent[weidth][height+1] == '0')
					{
						labirent[weidth][height+1]='X';
						labirent[weidth][height]='0';
						height++;
					}	
					else
					{
						printf("\ncıkısa vardiniz\n");
						break;
					}		
				}
				else
				{
					printf("\nileri gidemezsiniz duvar var\n");
				}
				break;		
			case 80:
				
				if(labirent[weidth+1][height] != '1')
				{
					if(labirent[weidth+1][height] == '0')
					{
						labirent[weidth+1][height]='X';
						labirent[weidth][height]='0';
						weidth++;
					}
					else
					{
						printf("\ncıkısa vardiniz\n");
						break;
					}		
				}
				else
				{
					printf("\nileri gidemezsiniz duvar var\n");
				}
				break;					
			default:
					printf("yanlıs yön tusu kullandınız!");
					break;				
		}
		matrisiyazdir(labirent,10);			
	}
	return 0;	
}
