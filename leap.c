#include<stdio.h>

int main()
{
	int year;
		
	printf("년도 입력:");
	scanf("%d",&year);
	
	if(year%4 == 0 && year%100 != 0 || year%400 == 0)	//year이 4의 배수이고,100의 배수는 아니지만, 혹은 400의 배수일때 
	{
		printf("%d년은 윤년(leap year)입니다.\n)",year);	//year은 위 조건을 충족했을 시 윤년이다.	
	}
	else
	{
		printf("%d년은 평년(common year)입니다.\n)",year);
	}
	
	return 0;
}

