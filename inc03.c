#include<stdio.h>

int main()
{
	int a, b, c;
	
	a = 6;
	b = a++;	//++�� a�� �ڿ� �����Ƿ� b�� a�� �Ѱ��ְ� a�� ������Ŵ 
	printf("%d %d\n", a, b);	//a�� 1������ ���°�, b�� a�� �����Ǳ� �� �� ������. 
	
	c = ++a; 	//++�� a�� �տ� �����Ƿ� ������ a�� ���� c�� �Ѱ� �� 
	printf("%d %d\n", a, c); 
	return 0;
}
