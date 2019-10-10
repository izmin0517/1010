#include<stdio.h>

int main()
{
	int a,b,c;
	
	a = 6;
	b = a++ + a++ + a++;	//a는 ++가 3번이므로 총 3이 증가해 9가 된다. 
	printf("%d %d\n",a,b);	//하지만 b는 1번이 ++가 되기 전 b에 들어가므로 총 6+7+8 = 21이 된다. 
	
	c= ++a + ++a + ++a;		//a는 3이 더 증가하여 12가 된다. 
	printf("%d %d\n",a,c);	//
	return 0;
}
