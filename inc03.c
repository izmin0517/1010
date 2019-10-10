#include<stdio.h>

int main()
{
	int a, b, c;
	
	a = 6;
	b = a++;	//++가 a의 뒤에 있으므로 b에 a를 넘겨주고 a를 증가시킴 
	printf("%d %d\n", a, b);	//a는 1증가한 상태고, b는 a에 증가되기 전 들어간 상태임. 
	
	c = ++a; 	//++가 a의 앞에 있으므로 증가된 a의 값을 c에 넘겨 줌 
	printf("%d %d\n", a, c); 
	return 0;
}
