#include<stdlib.h>
#include<stdio.h>
main()
{
	int magic;
	int guess;
	int counter=0;
	unsigned int seed;
	printf("Please enter seed:");
	scanf("%u",&seed);
	srand(seed);
	magic=rand() %100+1;
	do{printf("please guess a magic number:");
	   scanf("%d",&guess);
	   counter++;
	   if(guess>magic)
	   {
	   	printf("wrong! Too high!\n");
	   }
	   else if(guess<magic)
	   {
	    printf("wrong! Too low!\n");
	   }
	   else
	   {
	   	printf("right!\n");
	   	printf("The number is:%d\n",magic);
	   }
	 }while(guess!=magic);
	 printf("counter=%d\n",counter);
}
