#include <stdio.h>

int main(void) {
	int num;
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d positive number",num);
	}
	else if(num<0)
	{
		printf("%d negative number",num);
		
	}
	else
	printf("%d zero",num);
	return 0;
}
