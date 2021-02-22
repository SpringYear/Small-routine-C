#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		if((i+j)%2==0)
		printf("%c%c",0xa8,0x80);//´òÓ¡³öºÚ°×¸ñ 
		else
		printf("  ");
		printf("\n");
	}
	return 0;
}
