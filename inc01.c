#include<stdio.h>

int main()
{
	int a, b, c;
	
	a = 6;
	a++; //6+1	//전위  연산자 
	printf("%d\n",a);	// ++ : a를 1 증가시킴	
	++a;	//7+1	//후위 연산자 
	printf("%d\n",a); 
	a = a + 1;//오른쪽의 계산값을 왼쪽으로 옮
	printf("%d\n", a);
	return 0;
}
