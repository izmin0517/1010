#include<stdio.h>

int main()
{
	int year;
		
	printf("�⵵ �Է�:");
	scanf("%d",&year);
	
	if(year%4 == 0 && year%100 != 0 || year%400 == 0)	//year�� 4�� ����̰�,100�� ����� �ƴ�����, Ȥ�� 400�� ����϶� 
	{
		printf("%d���� ����(leap year)�Դϴ�.\n)",year);	//year�� �� ������ �������� �� �����̴�.	
	}
	else
	{
		printf("%d���� ���(common year)�Դϴ�.\n)",year);
	}
	
	return 0;
}

