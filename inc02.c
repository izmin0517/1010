#include<stdio.h>

int main()
{
	int a;
	
	a = 6;
	a--;	//단항연산자 
	printf("%d\n",a);
		
	--a;
	printf("%d\n",a);
	 
	a = a - 1; //2항연산자 
	printf("%d\n", a);
	return 0;
}
