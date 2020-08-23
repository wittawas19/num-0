#include <stdio.h>

int main() 
{
	int num; 
	scanf_s("%d", &num);
	if(num == 0)
	{
		printf(" = 0");
	}
	else if(num < 0)
	{
		printf(" < 0");
	}else
	{
		printf(" > 0");
	}
}